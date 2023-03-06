#include <stdio.h.>
#include <conio.h>
#include <string.h>
int calculation(int amount,int interest,int per_month,int time,int month){
	per_month = ((amount*interest)/(month*100))+(amount/(month*time));
 	return per_month;
}
int main(){
	
	printf("\t\t\t\t\t***::::::::::::::::::::BANK ACCOUNT MANAGEMENT SYSTEM::::::::::::::::::::***");
	
	printf("\n\n\n");
	
	//variable declarations
	
	char name[30], accountdt[10],accountbt[10];   //char declaration
	int accnolen,opt,opt1,age,limit,total,fd,emi;				//int declaration
	
	
	//Bank account details of the account holder
	for (;;){
		
		printf("Name of the account holder(Please use underscores for spaces): ");								
		gets(name);
		if (strlen(name)==0){
			printf("Sorry no name entered.Please enter again.\n");
		}
		else{
			break;
		}
	}
	
	
	//account number
	for(;;){
		
	printf("Please enter the account no.: ");
	gets(accountdt);
	accnolen= strlen(accountdt);
	if (accnolen!=8){
		printf("The account number should be of 8 digits. Please try again.\n");
	}
	else{
		printf("\n********************Welcome %s to the Bank Management system.********************\n\n\n",name);
	
		printf("Please browse through the menu given below and type the option number selected.\n");
		printf("1.Loan\n");
		printf("2.FD\n");
		printf("3.EMI\n");
		printf("4.Bank to Bank transfer\n");
		printf("5.Self transfer\n");
		printf("6.Exit\n\n");
		printf("Please enter the option selected: ");
		scanf("%d",&opt);
		break;
	}
}

	//Menu options
	
	for (;;){
		if (opt==1){
			// loan option selection	
			printf("1.Home Loan\n");
			printf("2.Loan agianst property\n");
			printf("3.Personal Loan\n");
			printf("4.Education Loan\n");
			printf("5.Business Loan\n");
			printf("6.Vehicle Loan\n\n");
			for(;;){
				printf("Please select a option from the above options: ");
				scanf("%d",&opt1);
				// loan option selection
				//Home loan
				if(opt1==1){
					printf("\n\nThanks for choosing Home Loan.\n\n");
					printf(" The age critera for Home Loan is 21 to 65 years.\n\n");
					printf("You can avail the loan for 8 percent interest p.a.\n\n");
					printf("A maximum of 90 percent of the price of the house can be availed.But the loan pool is upto 10 Crore.\n\n");
					printf("The loan amount with applied intereset to be paid in 10 years.");
					printf("To proceed further please give the following details.\n");
					label1:
					for(;;){
						
						printf("Please enter your age: ");
						scanf("%d", &age);
						
						if(age<21 || age>65){
						printf("Please start again.\n");
						goto label1;
						}
						
						printf("Please enter the amount of loan: ");
						scanf("%d", &limit);
						
						if(limit>100000000 || limit<500000){
							printf("Please start again.\n");
							goto label1;
						}
						else{
							//Loan calculation per month
							total=calculation(limit,8,0,10,12);
							printf("YOu will give %d per month",total);
							break;
						}
						break;}
					}
					//Loan against property
					if(opt1==2){
					printf("\n\nThanks for choosing Loan against property.\n\n");
					printf(" The age critera for Loan against property is 25 to 65 years.\n\n");
					printf("You can avail the loan for 9 percent interest p.a.\n\n");
					printf("The loan pool is upto 25 Crore and a minimum of 10 lakhs can be availed.\n\n");
					printf("The loan amount with applied intereset to be paid in 10 years.");
					printf("To proceed further please give the following details.\n");
					label2:
					for(;;){
						
						printf("Please enter your age: ");
						scanf("%d", &age);
						
						if(age<25 || age>65){
						printf("Please start again.\n");
						goto label2;
						}
						
						printf("Please enter the amount of loan: ");
						scanf("%d", &limit);
						
						if(limit>250000000 || limit<1000000){
							printf("Please start again.\n");
							goto label1;
						}
						else{
							//Loan calculation per month
							total=calculation(limit,9,0,10,12);
							printf("YOu will give %d per month",total);
							break;
						}
						break;}
					}
					// Personal Loan
					if(opt1==3){
					printf("\n\nThanks for choosing Personal Loan.\n\n");
					printf(" The age critera for Home Loan is 21 to 67 years.\n\n");
					printf("You can avail the loan for 12 percent interest p.a.\n\n");
					printf("The loan pool is upto 30 Lakhs and minimum of 50000.\n\n");
					printf("The loan amount with applied intereset to be paid in 5 years.");
					printf("To proceed further please give the following details.\n");
					label3:
					for(;;){
						
						printf("Please enter your age: ");
						scanf("%d", &age);
						
						if(age<21 || age>67){
						printf("Please start again.\n");
						goto label3;
						}
						
						printf("Please enter the amount of loan: ");
						scanf("%d", &limit);
						
						if(limit>3000000 || limit<50000){
							printf("Please start again.\n");
							goto label3;
						}
						else{
							//Loan calculation per month
							total=calculation(limit,12,0,5,12);
							printf("YOu will give %d per month",total);
							break;
						}
						break;}
					}
					//Education Loan
					if(opt1==4){
					printf("\n\nThanks for choosing Education Loan.\n\n");
					printf(" The age critera for Home Loan is 21 to 70 years.\n\n");
					printf("You can avail the loan for 9 percent interest p.a.\n\n");
					printf("The loan pool is upto 1 Cr and minimum of 50000 can be availed.\n\n");
					printf("The loan amount with applied intereset to be paid in 8 years.");
					printf("To proceed further please give the following details.\n");
					label4:
					for(;;){
						
						printf("Please enter your age: ");
						scanf("%d", &age);
						
						if(age<21 || age>70){
						printf("Please start again.\n");
						goto label4;
						}
						
						printf("Please enter the amount of loan: ");
						scanf("%d", &limit);
						
						if(limit>100000000 || limit<50000){
							printf("Please start again.\n");
							goto label4;
						}
						else{
							//Loan calculation per month
							total= calculation(limit,9,0,8,12);
							printf("YOu will give %d per month",total);
							break;
						}
						break;}
					}
					//Business Loan
					if(opt1==5){
					printf("\n\nThanks for choosing Business Loan.\n\n");
					printf(" The age critera for Home Loan is 21 to 65 years.\n\n");
					printf("You can avail the loan for 12 percent interest p.a.\n\n");
					printf("The loan pool is upto 100 Cr and mimimum of 1Cr.\n\n");
					printf("The loan amount with applied intereset to be paid in 12 years.");
					printf("To proceed further please give the following details.\n");
					label5:
					for(;;){
						
						printf("Please enter your age: ");
						scanf("%d", &age);
						
						if(age<21 || age>65){
						printf("Please start again.\n");
						goto label5;
						}
						
						printf("Please enter the amount of loan: ");
						scanf("%d", &limit);
						
						if(limit>1000000000 || limit<10000000){
							printf("Please start again.\n");
							goto label5;
						}
						else{
							//Loan calculation per month
							total=calculation(limit,12,0,12,12);
							printf("YOu will give %d per month",total);
							break;
						}
						break;}
					}
					//Vehicle Loan
					if(opt1==6){
					printf("\n\nThanks for choosing Vehicle Loan.\n\n");
					printf(" The age critera for Home Loan is 21 to 60 years.\n\n");
					printf("You can avail the loan for 7 percent interest p.a.\n\n");
					printf("A maximum of 70 percent of the price of the house can be availed.But the loan pool is upto 75 Lakhs and minimum of 50000 can be availed.n\n");
					printf("The loan amount with applied intereset to be paid in 7 years.");
					printf("To proceed further please give the following details.\n");
					label6:
					for(;;){
						
						printf("Please enter your age: ");
						scanf("%d", &age);
						
						if(age<21 || age>60){
						printf("Please start again.\n");
						goto label6;
						}
						
						printf("Please enter the amount of loan: ");
						scanf("%d", &limit);
						
						if(limit>100000000 || limit<50000){
							printf("Please start again.\n");
							goto label6;
						}
						else{
							//Loan calculation per month
							total=calculation(limit,7,0,7,12);
							printf("YOu will give %d per month",total);
							break;
						}
						break;}
					}
				break;
			}
		break;
	}	
		else if(opt==2){
			printf("Thanks for choosing. For Fixed Deposit please read the below details.");
			printf("\nAge criteria is between 21 to 60.");
			printf("\nIntersest given on amount is 5 percent.");
			printf("\nFor senior citizen the interest rate is 8 percent.");
			for(;;){
				label7:
				printf("\n\nPlease enter your age: ");
				scanf("%d",&age);
				if(age<21){
					printf("\nPlease start again.");
					goto label7;
				}
				if(age>=21 || age<=60){
					printf("\nMaturity period is 10 years.");
					printf("\nPlease enter the amount: ");
					scanf("%d",&limit);
					fd= limit*0.005;
					printf("You will be getting %d per year.",fd);
					break;
				}
				if(age>60 || age<100){
					printf("\nMaturity period is 10 years.");
					printf("\nYou are eilgible for senior citizen FD scheme.");
					printf("\nPlease enter the amount: ");
					scanf("%d",&limit);
					fd= limit * 0.008;
					printf("You will be getting %d per year.",fd);
					break;
				}
				else{
					printf("Age, amount or wrong input.");
					goto label7;
				}
				break;
				}
			break;
			}
		
		//EMI
		else if(opt==3){
			printf("Thanks for choosing. Please refer to the below details and proceed for EMI.");
			printf("\nAge criteria is between 21 to 60.");
			printf("\nYou can avail the EMI at 3 percent p.m .");
			printf("EMI will be for 9 months.");
			label8:
			for(;;){
			printf("\nPlease enter your age: ");
			scanf("%d",&age);
			if(age<21 || age> 60){
				printf("\nPlease enter again.");
				goto label8;
			}
			else if(age>=21 || age<= 60){
				printf("Please enter the amount: ");
				scanf("%d",&limit);
				emi = calculation(limit,3,0,1,9);
				printf("The EMI for every month is %d.",emi);
				break;	
			}
			else{
				printf("Please try again.");
				continue;
			}
			}
			
			break;
		}
		
		//Bank to Bank transfer
		else if(opt==4){
			printf("Please enter the Bank account number of the reciever.\n");
			printf("The account number should be of 8 digits only.\n");
			for(;;){
				printf("Enter the account number: ");
				scanf("%s",accountbt);
				if(strlen(accountbt)!=8){
					printf("Please try again.");
					continue;
				}
				else{
					printf("You can transfer a maximum of 1000000 and mimimum of 100.");
					printf("Enter the ammount: ");
					scanf("%d",&limit);
					if(limit<100 || limit>1000000){
						printf("Please try again.\n");
						continue;
					}
					else{
						printf("Your money is successfully debited.");
						break;
					}
					break;
					}
				}
				break;
			}
		
		//Self transfer
		else if(opt==5){
			printf("Please confirm your Bank Account number.\n");
			for(;;){
				printf("Enter your bank account number: ");
				scanf("%s",accountbt);
				if(accountbt!=accountdt && strlen(accountbt)!=8){
					printf("Please enter again.");
					continue;
				}
				else{
					printf("A maximum of 1000000 can be transferred and a minimum of 100.\n");
					for(;;){
					printf("Please enter the amount: ");
					scanf("%d",&limit);
					if(limit<100 || limit>1000000){
						printf("Please enter again the amount.\n");
						continue;
					}
					else{
						for(;;){
						printf("Enter the account number of your another account: ");
						scanf("%s",accountbt);
						if(strlen(accountbt)!=8){
							printf("Please enter the acconut number again.\n");
							continue;
						}
						else{
							printf("Your money has been succesfully debited.");
							break;
						}
						}
					break;	
					}
						
					}
				break;	
				}
			}
		break;
		}
		
		else if(opt==6){
			printf("Thanks for using the Bank Account Management System.");
			break;
		}
		else{
			printf("No option selected");
			continue;
		}
	}
	
		return 0;		
	
}
