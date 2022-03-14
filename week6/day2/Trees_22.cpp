#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int level = 0;

string complement(string lvl){
	string a;
        for(int i = 0; i<lvl.size(); i++){
		if(strcmp(lvl[i]," 0"){
			strcpy(lvl[i]," 1");
		} else {
			strcpy(lvl[i]," 0");
 		}
	}
	return a;
}

string upperlevel(int lvl){
	if(lvl == 0){
		return " 0";
	}
	int upLvl;
        upLvl = upperlevel(lvl - 1);
        return upLvl + complement(upLvl);
}

int main(){
	cout<<"Enter the level : ";
	cin>>level;
	cout<<upperlevel(level);
}
