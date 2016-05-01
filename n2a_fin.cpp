#include <iostream>

using namespace std;

int main()
{
 	long int num=0, temp1=0, temp2=0;
 	int digit_count=0, describ=0;
 	
 	string table_1[]={"sefr","yek","do","se","chahar","panj","shesh","haft",
	"hasht","noh","dah","yazdah","davazdah","sizdah","chahardah","panzdah",
 	"shanzdah","hefdah","hejdah","nozdah"};

 	string table_2[]={"bist","si","chehel","panjah","shast",
	"haftad","hashtad","navad"};

 	string table_3[]={"sad","devist","sisad","chaharsad","pansad",
 	"sheshsad","haftsad","hashtsad","nohsad"};

 	string table_4[]={"","hezar","milyon","milyard"};
 	
 	cout << "\n\n\t\t\t\tIn The Name Of GOD";
 	cout << "\n\n\tPlease insert a number between 0-1,000,000,000 : ";
 	cin >> num;
 	cout << "\n\n\t";
 	if (num==0)
 	{
  	   cout << table_1[num] << "\n\n\n\t";
  	   cout << "Press Any Key To Exit...";
  	   getchar(); //eat first lf
  	   getchar();
  	   return 0;
  	}
  	else if (num<0)
  	{
 	 	 cout << "Manfiye ";
 	 	 num*=-1;
 	}
	temp1=num;
 	while (temp1!=0)
 	{
	 	  temp2*=10;
	 	  temp2+=(temp1%10);
  	 	  temp1/=10;
  		  digit_count++;
	}
	temp1=temp2;
	
	int i=(digit_count%3), j=0, k=0;
 
	temp2=0;
	
	if (i==2)
	{
 	   j=(temp1%10);
 	   temp1/=10;
 	   k=(temp1%10);
 	   temp1/=10;
 	   
 	   if (j>1)
   	   {
 	  	  if (k!=0)
 	  	  {
		   	 cout << table_2[j-2] << " o " << table_1[k];
	 	  }
	 	  else
	 	  {
		   	  cout << table_2[j-2] << " ";
		  }
 	   }
 	   else if (j==1)
 	   {
	   	   cout << table_1[10+k] << " ";
	   }
	   else
	   {
	   	   cout << table_1[k] << " ";
	   }
	   
	   cout << table_4[((digit_count-1)/3)];
	   digit_count-=2;
	   
	   temp2=1;
 	}
 	else if (i==1)
 	{
	 	 j=(temp1%10);
 	   	 temp1/=10;
	 	 cout << table_1[j] << " ";
	 	 cout << table_4[((digit_count-1)/3)];
	 	 digit_count-=1;
	 	 
	 	 temp2=1;
 	}

 	do
 	{
		i=(temp1%10);
		temp1/=10;
		
		j=(temp1%10);
		temp1/=10;
		
		k=(temp1%10);
		temp1/=10;
		
		if (i>0)
		{
		   if (temp2==1)
   	 	   {
 	  	   	  cout << " o ";
 	   		  temp2=0;
		   }
		   cout << table_3[i-1] << " ";
		   if (j>1)
  	  	   {
 	   	   	  if (k!=0)
 	   	   	  {
 	   	  	   	 cout << " o " << table_2[j-2] << " o " << table_1[k] << " ";
  	  	   	  }
           	  else
           	  {
 	   		   	  cout << " o " << table_2[j-2] << " ";
 	   	   	  }
  	  	   }
  	  	   else if (j==1)
 	  	   {
 	   	   		cout << " o " << table_1[(j*10+k)] << " ";
   		   }
 	  	   else
 	  	   {
	   	  	   if (k!=0)
	   	  	   {
  	 	   	   	  cout << " o " << table_1[k] << " ";
  	   		   }
		   }
		   digit_count-=3;
		   if ((i!=0 or j!=0 or k!=0)and(digit_count!=0))
		   {
		   	  cout << table_4[(digit_count/3)];
		   	  temp2=1;
  		   }
		}
		else
		{
		 	if (j>1)
  	  	   	{
 	   	   	   if (k!=0)
 	   	   	   {
 	  	   	   	  cout << " o " << table_2[j-2] << " o " << table_1[k] << " ";
 	   	  	   }
           	   else
           	   {
   		   	   	   cout << " o " << table_2[j-2] << " ";
  			   }
			 }
 	   	     else if (j==1)
 	   		 {
  	   		  	  cout << " o " << table_1[(j*10+k)] << " ";
   		   	 }
 	  	   	 else
 	  	   	 {
	   	  	   	 if (k!=0)
   	  	   	  	 {
   	   	  		  	cout << " o " << table_1[k] << " ";
  	   		   	 }
	 		 }
		   digit_count-=3;
		   if ((i!=0 or j!=0 or k!=0)and(digit_count!=0))
		   {
		   	  cout << table_4[(digit_count/3)];
		   	  temp2=1;
  		   }
		}
	}
 	while (temp1!=0);
 	
 	cout << "\n\n\n\t";
	
    cout << "Press Any Key To Exit...";
    getchar(); // eat first lf
    getchar();
 	return 0;
}
