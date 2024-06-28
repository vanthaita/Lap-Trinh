class BankAccount
{
private:
	string accountNumber;
	string accountName;
	double balance = 0;
public:
	void BankAcount(string UserName, string UserNum)
	{
		accountNumber = UserNum;
		accountName = UserName;
	}
	void getAccountNumber()
	{
		cout << accountNumber <<"\n";
	}
	void getAccountName()
	{
		cout << accountName << "\n";
	}
	double getBalance()
	{
		cout << balance << endl;
	}
	double deposit(double sent)
	{
		balance = sent;
	}
	double withdraw(double out)
	{
		int flag;
		if(out <= balance)
		{
			flag = true;
			balance = balance - out;
			return flag;
		}
		else
		{
			flag = false;
			cout << "False";
		}
	}

};
class Bank
{
private:
	BankAccount *ArryList = new BankAcount[];
public:
	void search(string UserNum)
	{
		int k = 0;
		ArryList[8].accountNumber = UserNum;
		while(a[k].accountNumber != UserNum)
		{
			k++;
		}
		if(k < 7)
		{
			return k;
		}
		cout << "-1";
	}
};
int main()
{
		
}