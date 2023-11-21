#include<iostream>
#include "pugiconfig.hpp"
#include "pugixml.cpp"
#include "pugixml.hpp"
#include<string>
#include<map>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace pugi;
using namespace std;

class FileName{
    public:
    xml_document doc;
    string x;
    FileName(string s){
        x= s;
        if(doc.load_file((char*)s.c_str())){
            cout<<"Your File has been Loaded.. \n";
        }
    }
};
