#include <bits/stdc++.h>
using namespace std;

string encrypt (string text, int n)
{
	string result = "";
	for(int i = 0; i < text.length(); i++)
	{
		if(isupper(text[i]))
			result += char(int(text[i] + n - 65) % 26 + 65);
		else
			result += char(int(text[i] + n - 97) % 26 + 97);
	}
	return result;
}
int main()
{
	int n;
	string text;
	cout<<"input text = ";
	cin>>text;
	cout<<"input n = ";
	cin>>n;
	cout<<"text : "<<text;
	cout<<"\nShift: "<<n;
	cout<<"\nCipher: "<<encrypt(text, n);
	return 0;
}
