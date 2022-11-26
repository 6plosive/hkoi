#include <bits/stdc++.h>
using namespace std;

bool isnum(char c){
    return c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9';
}

void J221(){
    bool invalid=false;
    string input="";
    cin>>input;
    bool p1=false,p2=false,p3=false,p4=false;//exist
    string p1fix="",p2fix="",p3fix="",p4fix="";
    bool p1nor=false,p2nor=false,p4nor=false;
    if(!isnum(input[0])){
        p1=true;
    }
    if(!isnum(input[input.length()-1])){
        p4=true;
    }
    string processmidint=input;
    if(p1==true) processmidint=processmidint.substr(1, processmidint.length()-1);
    if(p4==true) processmidint=processmidint.substr(0, processmidint.length()-1);
    if(processmidint.length()==3){
        p2=true;
    }
    if(processmidint.length()==2){
        p3=true;
    }
    if(p1){//p1 exist
        if(input[0]=='A') p1fix="Airport";
        else if(input[0]=='B') p1fix="Border";
        else if(input[0]=='N') p1fix="Overnight";
        else invalid=true;
    }else{//no letter prefix
        p1nor=true;
    }
    if(p2){//p2 exist
        if(processmidint[0]=='1') p2fix="Cross River";
        else if(processmidint[0]=='2') p2fix="Air-conditioned";
        else if(processmidint[0]=='3') p2fix="Holiday";
        else invalid=true;
    }else{//no 3rd digit
        p2nor=true;
    }
    //deter tenth digit
    char tenthdigit;
    if(p2) tenthdigit=processmidint[1];
    else if(p3) tenthdigit=processmidint[0];
    if(p3||p2){//tenth digit exist
        if(tenthdigit=='0'||tenthdigit=='1'||tenthdigit=='2') p3fix="Downtown";
        else if(tenthdigit=='3'||tenthdigit=='4') p3fix="West District";
        else if(tenthdigit=='7') p3fix="North District";
        else if(tenthdigit=='9') p3fix="East District";
        else invalid=true;
    }else{
        p3fix="Downtown";
    }
    if(p4){//p4 exist
        if(input[input.length()-1]=='A'||input[input.length()-1]=='B'||input[input.length()-1]=='C') p4nor=true;
        else if(input[input.length()-1]=='P') p4fix="Peak Hour";
        else if(input[input.length()-1]=='S') p4fix="Special";
        else if(input[input.length()-1]=='X') p4fix="Express";
        else invalid=true;
    }else{//no suffix
        p4nor=true;
    }
    
    if(p1fix=="Overnight"&&p4fix=="Peak Hour") invalid=true;
    if(p2fix=="Holiday"&&p4fix=="Peak Hour") invalid=true;
    
    //dbg(p1fix);
    //dbg(p2fix);
    //dbg(p3fix);
    //dbg(p4fix);
    
    if(!invalid){//valid
        if(p1nor&&p2nor&&p4nor) p4fix="Normal";
        if(!p3fix.empty()) cout<<p3fix;
        if(!p2fix.empty()) cout<<' '<<p2fix;
        if(!p4fix.empty()) cout<<' '<<p4fix;
        if(!p1fix.empty()) cout<<' '<<p1fix;
        cout<<endl;
    }else{//invalid
        cout<<"Invalid"<<endl;
    }
}

int main(){
	J221();
}