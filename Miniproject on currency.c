//currency conversion
#include<stdlib.h>
#include <stdio.h>
void Explore();
void Exchange();
void Compare();
void Denomination();
void A(int *a,int *amount);
void B(int *b,int *amount);
void C(int *c,int *amount);
void D(int *d,int *amount);
void E(int *e,int *amount);
void F(int *f,int *amount);
void G(int *g,int *amount);
void H(int *h,int *amount);
void J(int *j,int *amount);
void K(int *k,int *amount);
int main()
{
  int num,n,choice;
  int symbol;
  float total;
  char ch[20];
  printf("*************WELCOME TO MINIPROJECT_C************** \n\n");
  printf("FUNCTIONALITES AVAILABLE:\n");
  printf(
    "\n1.EXPLORE CURRENCY" 
    "\n2.COMPARE CURRENCIES"
    "\n3.FOREIGN EXCHANGE"
    "\n4.DENOMINATION CALCULATOR");
  printf("\n\nENTER YOUR CHOICE\n");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  Explore();
  break;
  case 2:
  Compare();
  break;
  case 3:
  Exchange();
  break;
  case 4:
  Denomination();
  break;
 }
}
void Explore()
{
    int s;
    printf("\n1.$""\n2.€""\n3.¥""\n4.﷼""\n5.£\n6.৳""\n7.₱" "\n8.₽""\n9.฿""\n10.₫");
    printf("\nENTER CURRENCY OF SEARCH\n");
    scanf("%d",&s);
  switch(s)
{
  case 1:
  printf("It is an official currency of USA\n.It is called DOLLAR\n.The Indian equivalent is ₹76.057\n.");
  break;
  case 2:
  printf("It is an official currency of European countries like France,Italy,Iceland and 32 more countries.\nIt is called EURO.\nThe Indian equivalent is ₹83.80.\n");
  break;
  case 3:
  printf("It is  used as an official currency of Japan.\nIt is called YEN.\nThe Indian equivalent is ₹0.64.\n");
  break;
  case 4:
  printf("It is used as an official currency by Iran.\nIt is called RIAL.\nThe Indian equivalent is ₹0.0018.\n");
  break;
  case 5:
  printf("It is used as an official currency by UK.\nIt is called POUND STERLING.\nThe Indian equivalent is ₹99.81.\n");
  break;
  case 6:
  printf("It is used as an official currency by Bangladesh.\nIt is called TAKKA.\nThe Indian equivalent is ₹0.88.\n");
  break;
  case 7:
  printf("It is used as an official currency by Philipines.\nIt is called PESO.\nThe Indian equivalent is ₹1.45.\n");
  break;
  case 8:
  printf("It is used as an official currency by Russia.\nIt is called RUBLE.\nThe Indian equivalent is ₹0.77.\n");
  break;
  case 9:
  printf("It is used as an official currency by Thailand.\nIt is called BAHT.\nThe Indian equivalent is ₹2.28.\n");
  break;
  case 10:
  printf("It is used as an official currency by Vietnem.\nIt is called VIETNEMESE DONG.\nThe Indian equivalent is ₹0.0033.\n");
  break;
}
}
void Exchange()
{
  int num;
  int n;
  float total;
  char ch[20];
  printf("SELECT CURRENCY YOU WISH TO CONVERT TO RUPPEE\n\n");
  printf("1.Dollar   2.Euro  3. Yen 4.Riyal  5.pound  6.Tukka 7.Peso   8.Rubble  9.Baht 10.Dong 11.\n");
  //printf("\n---------------------------------------");
  //printf("\n'''''''''''''''''''''''''''''''");
  printf("Enter currency type \n");
  scanf("%d",&num);
  printf("Enter the amount you want to convert\n");
  scanf("%d",&n);
  switch(num)
    {
    case 1:
    total=n*(76.057);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 2:
    total=n*(83.30);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 3:
    total=n*(0.64);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 4:
    total=n*(0.0018);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 5:
    total=n*(99.81);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 6:
    total=n*(0.88);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 7:
    total=n*(1.45);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 8:
    total=n*(0.77);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 9:
    total=n*(2.28);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 10:
    total=n*(0.00);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 11:
    total=n*(0.0033);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 12:
    total=n*(83.80);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 13:
    total=n*(249.86);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 14:
    total=n*(5.20);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    }
}
void Compare()
{
    int comp;
    printf("ENTER CURRENCY PAIRS TO COMPARE\n");
    printf("\n1.Dollar Vs Euro\n2.Yen Vs Rial \n3.Pound Vs Takka\n4.Peso Vs Ruble\n5.Baht Vs Dong\n");
    scanf("\n%d",&comp);
    switch(comp)
    {
      case 1:
      printf("DOLLAR is the national currency of USA *** EURO is the national currency of France,Italy,Iceland and 32 more countries .\n 1$=1.10\n");
      break;
      case 2:
      printf("YEN is the national currency of JAPAN *** RIAL is the national currency of IRAN.\n 1¥=352.18﷼\n");
      break; 
      case 3:
      printf("POUND is the national currency of UK ***  TAKKA is the national currency of BANGLADESH.\n 1£=113.24৳\n");
      break;
      case 4:
      printf("PESO is the national currency of PHILIPPINES *** RUBLE is the national currency OF RUSSIA.\n1₱=1.93₽\n");
      break;
      case 5:
      printf("BAHT is the national currency of THAILAND *** DONG is the national currency of VIETNAM.\n 1฿=682.63₫\n");
      break;
    }
  }
    void Denomination()
    {
        int amount,country;
        int a[20];
        int b[20];
        int c[20];
        int d[20];
        int e[20];
        int f[20];
        int g[20];
        int h[20];
        int j[20];
        int k[20];
        /*printf("ENTER AMOUNT:\n");
        scanf("%d",&amount);*/
        printf("ENTER COUNTRY\n");
       printf("1.Dollar\n2.Euro\n3.Yen\n4.Riyal\n5.pound\n6.Tukka\n7.Peso\n8.Rubble\n9.Baht\n10.Dong\n");
        scanf("%d",&country);
        switch(country)
        {
        case 1:;
        int a[7]={100,50,20,10,5,2,1};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN USA:\n");
        A(a,&amount);
        break;
        case 2:;
        int b[7]={500,200,100,50,20,10,5};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN EURO:\n");
        B(b,&amount);
        break;
        case 3:;
        int c[6]={500,100,50,10,5,1};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN JAPAN:\n");
        C(c,&amount);
        break;
        case 4:;
        int d[8]={500,200,100,50,20,10,5,1};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN RIYAL:\n");
        D(d,&amount);
        break;
        case 5:;
        int e[4]={50,20,10,5};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN Uk:\n");
        E(e,&amount);
        break;
        case 6:;
        int f[9]={1000,500,200,100,50,20,10,5,2};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN TAKKA:\n");
        F(f,&amount);
        break;
        case 7:;
        int g[6]={1000,500,200,100,50,20};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN PESO:\n");
        G(g,&amount);
        break;
        case 8:;
        int h[7]={5000,1000,500,100,50,10,5};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN RUBLE:\n");
        H(h,&amount);
        break;
        case 9:;
        int j[9]={1000,500,100,50,20,10,5,2,1};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN BAHT:\n");
        J(j,&amount);
        break;
        case 10:;
        int k[12]={500000,200000,100000,50000,20000,10000,5000,2000,1000,500,200,100};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN DONG:\n");
        K(k,&amount);
        break;
    }
    }
void A(int *a,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<7;i++)
    {
     
     printf("\n%d notes is:%d",*(a+i),temp/(*(a+i)));
     temp=temp%a[i];
     	
    } 
}
void B(int *b,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<7;i++)
    {
     
     printf("\n%d notes is:%d",*(b+i),temp/(*(b+i)));
     temp=temp%b[i];
     	
    } 
}
void C(int *c,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<6;i++)
    {
     
     printf("\n%d notes is:%d",*(c+i),temp/(*(c+i)));
     temp=temp%c[i];
     	
    } 
}
void D(int *d,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<8;i++)
    {
     
     printf("\n%d notes is:%d",*(d+i),temp/(*(d+i)));
     temp=temp%d[i];
     	
    } 
}
void E(int *e,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<4;i++)
    {
     
     printf("\n%d notes is:%d",*(e+i),temp/(*(e+i)));
     temp=temp%e[i];
     	
    } 
}
void F(int *f,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<9;i++)
    {
     
     printf("\n%d notes is:%d",*(f+i),temp/(*(f+i)));
     temp=temp%f[i];
     	
    } 
}
void G(int *g,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<6;i++)
    {
     
     printf("\n%d notes is:%d",*(g+i),temp/(*(g+i)));
     temp=temp%g[i];
     	
    } 
}
void H(int *h,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<7;i++)
    {
     
     printf("\n%d notes is:%d",*(h+i),temp/(*(h+i)));
     temp=temp%h[i];
     	
    } 
}
void J(int *j,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<9;i++)
    {
     
     printf("\n%d notes is:%d",*(j+i),temp/(*(j+i)));
     temp=temp%j[i];
     	
    } 
}
void K(int *k,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<12;i++)
    {
     
     printf("\n%d notes is:%d",*(k+i),temp/(*(k+i)));
     temp=temp%k[i];
     	
    } 
}
    
