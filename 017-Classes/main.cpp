#include <iostream>

#define NEW_VERSION

namespace orhan {

#ifndef NEW_VERSION
    inline
#endif
    namespace old_version {
        class Myclass{
        public:
            Myclass()
            {
                std::cout << "Myclass old version\n";
            }
        };
    }

#ifdef NEW_VERSION
    inline
#endif
    namespace new_version {
        class Myclass{
        public:
            Myclass()
            {
                std::cout << "Myclass new version\n";
            }
        };
    }

}

//client.cpp
int main()
{
    orhan::Myclass m;

}



/***************************************************/
/***************************************************/










