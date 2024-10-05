#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map <string, int> mp;
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;
    mp["four"] = 4;


    // Iteration though the Map 

    map <string, int> ::iterator itr = mp.begin();
    while (itr != mp.end()) 
    {
        cout << "Key is : " << itr-> first << " Value is : " << itr-> second <<endl;
        itr++;
    }
    // The Size of the map 

    cout << "The Size of Map is : " << mp.size() <<endl;


    // Insert Pair function in the map
    map <int, int> map1;
    map1.insert(pair<int, int>(1,40));
    map1.insert(pair<int, int>(2,30));
    map1.insert(pair<int, int>(3,50));
    map1.insert(pair<int, int>(4,10));
    map1.insert(pair<int, int>(5,70));

    map1[6]= 10;

    map<int , int> :: iterator it;
    cout << "\nThe Map of the Second size is : \n";
    cout << "\n The Key Element is : \n";
    for (it = map1.begin(); it != map1.end(); it++) {
        cout << '\t' << it ->first << '\t' << it->second <<"\n";
    }
    cout << endl;

    // Begin and End elements of the function

    map <int, int> map2(map1.begin(), map1.end());

    cout << "\n The Map of the Second is after" <<" assign from map is : \n";
    cout << "\t Key \t Elements\n";

    for (it = map2.begin(); it != map2.end(); it++) {
        cout << '\t' <<it->first <<'\t' <<it-> second <<'\n';
    }
    cout <<endl;


    cout << "\n The Map after Removal is " "elements less the key = 3 : \n";
    cout << "\t KEY \t Elements \n";
    map2.erase(map2.begin(), map2.find(3));
    for (it = map2.begin(); it != map2.end(); it++) {
        cout << "\t" << it -> first << "\t" << it -> second << "\n";
    }

    // erase function in the map
    int num;
    num = map2.erase(4);
    cout << "\n map2.erase(4) : ";
    cout << num << "removed \n";

    cout << "\t Key Elements\n";
    for (it = map2.begin(); it != map2.end(); it ++) {
        cout <<'\t' << it -> first <<'\t' << it -> second << "\n";
    }
    cout << endl;

    cout << "map2.lower_bound(5)" << map2.lower_bound(5) -> first << '\t';
    cout << "\t Element= " << map2.lower_bound(5) -> second << endl;
    cout << "map2.upper_bound(5)" <<map2.upper_bound(5) ->first << '\t';
    cout << "\t Element = " <<map2.upper_bound(5) -> second << endl;


    map <string, int> mapp;
    mapp["One"] = 1;
    mapp["Two"] = 2;
    mapp["Three"] = 3;

    cout << "Key : One , Value : " << mapp["One"] << endl;
    cout << "Key : Two , Value : " << mapp["Two"] << endl;
    cout << "Key : Three, Value : " << mapp["Three"] << endl;

    if (mapp.count("four") > 0) {
        cout << "Key four is in the map" <<endl;
    }
    else {
        cout << "Key four is not in the map" <<endl;
    }

    return 0;
    

}