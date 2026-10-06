#include<iostream>
#include<cstring>
using namespace std;
class text
{
    char *buf;
    public:text(const char *s=" ")
    {
        buf=new char[strlen(s)+1];
        strcpy(buf,s);
    }
    text(const text &o)
    {
        buf=new char[strlen(o.buf)+1];
        strcpy(buf,o.buf);
    }
    text &operator=(const text &o)
    {
        if(this!=&o)
        {
            delete[]buf;
            buf=new char[strlen(o.buf)+1];
            strcpy(buf,o.buf);
            
        }
        return*this;
    }
    ~text()
    {
        delete[]buf;
    }
    void show()const{
        cout<<buf<<endl;
    }
    };
    int main()
    {
        text a("alpha"),b("beta");
        b=a;
        a.show();
        b.show();
        return 0;
    }
    
