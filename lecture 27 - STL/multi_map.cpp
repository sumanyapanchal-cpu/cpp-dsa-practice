#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<string, int> m;
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);

    //m.erase("tv"); //it removes all the tv hence map will be empty but to remove one single value we need to use iterator meaning - ki humko m.erase(m.find("tv")) jisse jo bh value match kregi is k sath usme se ek remove hoga baki sb as it is rahega

    m.erase(m.find("tv")); //it removes only one tv hence map will have 3 tvs left

    //agar normal map hota toh ye ek hi baar tv 100 aata output me, but multimap me hum ek hi key ke naam ke multiple pairs values create kr skte hai 

    //m.insert({"camera", 20});
    //m.emplace("mobile", 200);

    //cout << m.count("laptop") << endl;

    for (auto p : m)
    {

        cout << p.first << " " << p.second << endl;
    }

    return 0;
}