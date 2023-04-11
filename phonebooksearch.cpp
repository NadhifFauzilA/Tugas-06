#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct PhoneBook{
	string name;
	string address;
	string number;
	
};
int find2(vector<PhoneBook> data, string k){
	for (int i=0; i<data.size(); i++)
	if (data[i].name == k)
	return i;
	
	return data.size();
}

int main(){
	vector<PhoneBook> pb;
	for (int i=0; i<3; i++){
		system ("cls");
		string in_name, in_addr, in_num;
		cout <<"Name    :";
		getline(cin, in_name);
		if (in_name == "")
		break;
		cout <<"Address : ";
		getline(cin, in_addr);
		cout <<"Number  : ";
			getline(cin, in_num);
			
			
			pb.push_back({in_name, in_addr, in_num}) ;
		
	}
system ("cls");
cout<<"=================================================================" << endl;
cout << setw(15) <<"Name"<<setw(25)<<"Address"<<setw(13)<<"Number" <<endl;
cout<<"=================================================================" <<endl;
	
	
for(PhoneBook out : pb){
	cout << setw(15) << out.name ;
	cout << setw(25) << out.address ;
	cout << setw(13) << out.number <<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
}
string key;
	cout << "cari : ";
	getline(cin, key);
	
	auto found = find2(pb, key);
	if(found != pb.size())
	cout <<"data ditemukan\n";
	else
	cout <<"data tidak ditemukan\n";

	return 0;
}

