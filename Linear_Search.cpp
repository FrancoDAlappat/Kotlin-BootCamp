#include<iostream.h>
#include<conio.h>
int lsearch(int[],int,int);
int main()
{
int AR[50],ITEM,index,N;
clrscr();
cout<<"\n___________________";
cout<<"\n***LINEAR SEARCH***\n";
cout<<"___________________";
cout<<"\n\nEnter the array size:";
cin>>N;
cout<<"\n\nEnter array elements\n";
for(int i=0;i<N;i++)
{
cin>>AR[i];
}
cout<<"Enter elements to be searched for:";
cin>>ITEM;
index=lsearch(AR,N,ITEM);
if(index==-1)
cout<<"\nSorry!!Given element could not be found\n";
else
cout<<"\nElement found at   intex:"<<index<<"\n\t\t Position:"<<index+1<<endl;
getch();
return 0;

}
int lsearch(int AR[],int size,int item)
{
for(int i=0;i<size;++i)
{
if(AR[i]==item)

return i;
}
return -1;
}
