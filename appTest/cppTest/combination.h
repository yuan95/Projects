template <class RanIt, class Func>
void recursive_combination(RanIt nbegin, RanIt nend, int n_column,
    RanIt rbegin, RanIt rend, int r_column,int loop, Func func)
{
  int r_size=rend-rbegin;

  int localloop=loop;
  int local_n_column=n_column;

  //A different combination is out
  if(r_column>(r_size-1))
  {
    func(rbegin,rend);
    return;
  }
  //===========================

  for(int i=0;i<=loop;++i)
  {
    RanIt it1=rbegin;
    for(int cnt=0;cnt<r_column;++cnt)
    {
      ++it1;
    } 
    RanIt it2=nbegin;
    for(int cnt2=0;cnt2<n_column+i;++cnt2)
    {
      ++it2;
    } 

    *it1=*it2;

    ++local_n_column;

    recursive_combination(nbegin,nend,local_n_column,
      rbegin,rend,r_column+1,localloop,func);
      
    --localloop;
  }
}
