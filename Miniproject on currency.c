//currency conversion
#include<stdlib.h>
#include <stdio.h>
void Explore();
void Exchange();
void Compare();
void Denomination();
int main()
{
  int num,n,exit,choice;
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
  while(exit!=1)
 {
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
    
      printf("\n......................");
      printf("\n\n\t press 1 to exit and 2 to continue (yes=1/no=2):");
      scanf("%d",&exit);
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
        int note500000=0;
        int note200000=0;
        int note100000=0;
        int note50000=0;
        int note20000=0;
        int note10000=0;
        int note5000=0;
        int note2000=0;
        int note1000=0;
        int note500=0;
        int note200=0;
        int note100=0;
        int note50=0;
        int note20=0;
        int note10=0;
        int note5=0;
        int note2=0;
        int note1=0;
        printf("ENTER AMOUNT:\n");
        scanf("%d",&amount);
        printf("ENTER COUNTRY\n");
       printf("1.Dollar\n2.Euro\n3.Yen\n4.Riyal\n5.pound\n6.Tukka\n7.Peso\n8.Rubble\n9.Baht\n10.Dong\n");
        scanf("%d",&country);
        switch(country)
        {
        case 1:
       if(amount >= 100)
       {
        note100 = amount/100;
        amount = amount - (note100 * 100);
       }
      if(amount >= 50)
       {
        note50 = amount/50;
        amount = amount - (note50 *50);
       }
      if(amount >= 20)
       {
        note20 = amount/20;
        amount = amount -(note20*20);
       }
      if(amount >= 10)
      {
        note10 = amount/10;
        amount = amount -(note10 *10);
      }
      if(amount >=5)
      {
        note5 = amount/5;
        amount = amount -(note5 *5);
      }
     if(amount >=2)
      {
        note2 = amount/2;
        amount = amount - (note2 *2);
      }
      if(amount >=1)
     {
        note1 = amount/1;
        amount = amount - (note1 *1);
     } 
    printf("DENOMINATION IN USA:");
    printf("100 = %d\n50 = %d\n20 = %d\n10 = %d\n5 =%d\n2 = %d\n1 = %d\n",note100,note50,note20,note10,note5,note2,note1);
    break;
        case 2:
        if(amount >= 500)
       {
        note500 = amount/500;
        amount = amount - (note500 * 500);
       }
      if(amount >= 200)
       {
        note200 = amount/200;
        amount = amount - (note200 *200);
       }
      if(amount >= 100)
       {
        note100 = amount/100;
        amount = amount -(note100*100);
       }
      if(amount >= 50)
      {
        note50 = amount /50;
        amount = amount -(note50 *50);
      }
      if(amount >=20)
      {
        note20 = amount/20;
        amount = amount -(note20 *20);
      }
     if(amount >=10)
      {
        note10 = amount/10;
        amount = amount - (note10 *10);
      }
      if(amount >=5)
     {
        note5 = amount/5;
        amount = amount - (note5 *5);
     } 
    printf("DENOMINATIONS IN EURO:\n");
    printf("500 = %d\n200 = %d\n100 = %d\n50 = %d\n20 = %d\n10 = %d\n5 = %d\n",note500,note200,note100,note50,note20,note10,note5);
          
    
    break;
        case 3:
        if(amount >= 500)
        {
        note500 = amount/500;
        amount = amount - (note500 * 500);
        }
          if(amount >= 100)
        {
        note100 = amount/100;
        amount = amount - (note100 * 100);
        }
        if(amount >= 50)
        {
        note50 = amount/50;
        amount = amount - (note50 *50);
        }
       if(amount >= 10)
        {
        note10 = amount/10;
        amount = amount -(note10*10);
        }
       if(amount >= 5)
        {
        note5 = amount /5;
        amount = amount -(note5 *5);
        }
       if(amount >=1)
        {
        note1 = amount/1;
        amount = amount -(note1 *1);
        }
    printf("DENOMINATION IN JAPAN: \n");
    printf("500 = %d\n100 = %d\n50 = %d\n10 = %d\n5 = %d\n1 = %d\n",note500,note100,note50,note10,note5,note1);
    
    break;
        case 4:
        if(amount >= 500)
        {
        note500 = amount/500;
        amount = amount -(note500 * 500);
        }
        if(amount >= 200)
       {
        note200 = amount/200;
        amount= amount - (note200 *200);
       }
        if(amount >= 100)
       {
        note100 = amount/100;
        amount = amount - (note100 * 100);
       }
      if(amount >= 50)
       {
        note50 = amount/50;
        amount = amount - (note50 *50);
       }
      if(amount >= 20)
       {
        note20 = amount/20;
        amount = amount -(note20*20);
       }
      if(amount >= 10)
      {
        note10 = amount /10;
        amount = amount -(note10 *10);
      }
      if(amount >=5)
      {
        note5 = amount/5;
        amount = amount -(note5 *5);
      }
      if(amount >= 1)
        {
        note1 = amount/1;
        amount = amount -(note1 * 1);
        }
    printf("DENOMINATION IN RIYAL: = \n");
    printf("500 = %d\n200 = %d\n100 = %d\n50 = %d\n20 = %d\n10 = %d\n5 = %d\n1 = %d\n",note500,note200,note100,note50,note20,note10,note5,note1);
    break;
        case 5:
      if(amount >= 50)
       {
        note50 = amount/50;
        amount = amount - (note50 *50);
       }
      if(amount >= 20)
       {
        note20 = amount/20;
        amount = amount -(note20*20);
       }
      if(amount >= 10)
      {
        note10 = amount /10;
        amount = amount -(note10 *10);
      }
      if(amount >=5)
      {
        note5 = amount/5;
        amount = amount -(note5 *5);
      }
    printf("DENOMINATION IN UK: = \n");
    printf("50 = %d\n20 = %d\n10 = %d\n5= %d\n ",note50,note20,note10,note5);
    break;
          case 6:
        if(amount >= 1000)
        {
        note1000 = amount/1000;
        amount = amount -(note1000 * 1000);
        }
        if(amount >= 500)
        {
        note500 = amount/500;
        amount = amount -(note500 * 500);
        }
        if(amount >= 200)
       {
        note200 = amount/200;
        amount= amount - (note200 *200);
       }
        if(amount >= 100)
       {
        note100 = amount/100;
        amount = amount - (note100 * 100);
       }
      if(amount >= 50)
       {
        note50 = amount/50;
        amount = amount - (note50 *50);
       }
      if(amount >= 20)
       {
        note20 = amount/20;
        amount = amount -(note20*20);
       }
      if(amount >= 10)
      {
        note10 = amount /10;
        amount = amount -(note10 *10);
      }
      if(amount >=5)
      {
        note5 = amount/5;
        amount = amount -(note5 *5);
      }
      if(amount >= 2)
        {
        note2 = amount/2;
        amount = amount -(note2 * 2);
        }
    printf("DENOMINATION IN TAKKA: = \n");
    printf("1000 = %d\n500 = %d\n200 = %d\n100 = %d\n 50 = %d\n20 = %d\n10 = %d\n5 = %d\n2 = %d\n",note1000,note500,note200,note100,note50,note20,note10,note5,note2);
    break;
          
          case 7:
        if(amount >= 1000)
        {
        note1000 = amount/1000;
        amount = amount -(note1000 * 1000);
        }
        if(amount >= 500)
        {
        note500 = amount/500;
        amount = amount -(note500 * 500);
        }
        if(amount >= 200)
       {
        note200 = amount/200;
        amount= amount - (note200 *200);
       }
        if(amount >= 100)
       {
        note100 = amount/100;
        amount = amount - (note100 * 100);
       }
      if(amount >= 50)
       {
        note50 = amount/50;
        amount = amount - (note50 *50);
       }
      if(amount >= 20)
       {
        note20 = amount/20;
        amount = amount -(note20*20);
       }
    printf("DENOMINATION IN PESO: = \n");
    printf("1000 = %d\n500 = %d\n200 = %d\n100 = %d\n50 = %d\n20 = %d\n",note1000,note500,note200,note100,note50,note20);
    break;
          case 8:
        if(amount >= 5000)
        {
        note5000 = amount/5000;
        amount = amount -(note5000 * 5000);
        }
        if(amount >= 1000)
        {
        note1000 = amount/1000;
        amount = amount -(note1000 * 1000);
        }
        if(amount >= 500)
        {
        note500 = amount/500;
        amount = amount -(note500 * 500);
        }
        if(amount >= 100)
       {
        note100 = amount/100;
        amount = amount - (note100 * 100);
       }
      if(amount >= 50)
       {
        note50 = amount/50;
        amount = amount - (note50 *50);
       }
      if(amount >= 10)
       {
        note10 = amount/10;
        amount = amount -(note10*10);
       }
      if(amount >=5)
      {
        note5 = amount/5;
        amount = amount -(note5 *5);
      }
    printf("DENOMINATION IN RUBLE: = \n");
    printf("5000 = %d\n1000 = %d\n500 = %d\n100 = %d\n  50 = %d\n10 = %d\n5 = %d\n",note5000,note1000,note500,note100,note50,note10,note5);
    break;
          case 9:
          if(amount >= 1000)
        {
        note1000 = amount/1000;
        amount = amount -(note1000 * 1000);
        }
       if(amount >= 500)
       {
        note500 = amount/500;
        amount = amount- (note500 * 500);
       }
       if(amount >= 100)
       {
        note100 = amount/100;
        amount = amount - (note100 * 100);
       }
      if(amount >= 50)
       {
        note50 = amount/50;
        amount = amount - (note50 *50);
       }
      if(amount >= 20)
       {
        note20 = amount/20;
        amount = amount -(note20*20);
       }
      if(amount >= 10)
      {
        note10 = amount/10;
        amount = amount -(note10 *10);
      }
      if(amount >=5)
      {
        note5 = amount/5;
        amount = amount -(note5 *5);
      }
     if(amount >=2)
      {
        note2 = amount/2;
        amount = amount - (note2 *2);
      }
      if(amount >=1)
     {
        note5 = amount/1;
        amount = amount - (note1 *1);
     }
    printf(" 1000 = %d\n500 = %d\n100 = %d\n50 = %d\n  20 = %d\n10 = %d\n5 = %d\n2 = %d\n1 = %d\n",note1000,note500,note100,note50,note20,note10,note5,note2,note1);
          case 10:
        if(amount >= 500000)
        {
        note500000 = amount/500000;
        amount = amount -(note500000 * 500000);
        }
        if(amount >= 200000)
        {
        note200000 = amount/200000;
        amount = amount -(note200000 * 200000);
        }
        if(amount >= 100000)
        {
        note100000 = amount/100000;
        amount = amount -(note100000 * 100000);
        }
          if(amount >= 50000)
        {
        note5000 = amount/50000;
        amount = amount -(note1000 * 50000);
        }
        if(amount >= 20000)
        {
        note20000 = amount/20000;
        amount = amount -(note20000 * 20000);
        }
        if(amount >= 10000)
        {
        note10000 = amount/10000;
        amount = amount -(note10000 * 10000);
        }
        if(amount >= 5000)
        {
        note5000 = amount/5000;
        amount = amount -(note5000 * 5000);
        }
        if(amount >= 2000)
        {
        note2000 = amount/2000;
        amount = amount -(note2000 * 2000);
        }
        if(amount >= 1000)
        {
        note1000 = amount/1000;
        amount = amount -(note1000 * 1000);
        }
       if(amount >= 500)
       {
        note500 = amount/500;
        amount = amount- (note500 * 500);
       }
       if(amount >= 200)
       {
        note200 = amount/200;
        amount= amount - (note200 *200);
       }
      if(amount >= 100)
       {
        note100 = amount/100;
        amount = amount - (note100 * 100);
       }
      
    printf("500000 = %d\n200000 = %d\n100000 = %d\n 50000 = %d\n20000 = %d\n10000 = %d\n5000 = %d\n2000 = %d\n1000 = %d\n500 = %d\n200 = %d\n100 = %d\n ",note500000,note200000,note100000,note50000,note20000,note10000,note5000,note2000,note1000,note500,note200,note100);
        }
    }
    