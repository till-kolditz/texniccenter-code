#ifndef _AFFIX_HXX_
#define _AFFIX_HXX_

#include "atypes.hxx"
#include "baseaffix.hxx"
#include "affixmgr.hxx"

class Prefix : public Affix
{
       AffixMgr*           pmyMgr;
public:
       unsigned char flag;
       Prefix(AffixMgr* pmgr, unsigned char a, int num, affentry* dp );
       ~Prefix();

       struct hentry * check(const char * word, int len);
};



class Suffix : public Affix
{
       AffixMgr*           pmyMgr;
public:
       unsigned char flag;
       Suffix(AffixMgr* pmgr, unsigned char a, int num, affentry* dp );
       ~Suffix();

       struct hentry * check(const char * word, int len, int optflags, Prefix* ppfx);

};

#endif
