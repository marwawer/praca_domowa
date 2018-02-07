#include <stdio.h>

int main()
{
    const char tab[30]="KlmnoKdewTrYnBdsUrYcXz";
    int histagram[26]={0};
    char znak;
    int licz=0;
    while((znak=tab[licz]) !=0){
        if ((znak>='A')&&(znak<='Z')) {
            ++histagram[znak-'A'];
        }
        if ((znak>='a')&&(znak<='z')) {
            ++histagram[znak-'a'];
        }
        ++licz;
    }
    for (int x = 0; x <26 ; ++x) {
        printf("%c,%c->%d \n", 'A'+x,'a'+x,histagram[x]);
        
    }

return 0;

}
