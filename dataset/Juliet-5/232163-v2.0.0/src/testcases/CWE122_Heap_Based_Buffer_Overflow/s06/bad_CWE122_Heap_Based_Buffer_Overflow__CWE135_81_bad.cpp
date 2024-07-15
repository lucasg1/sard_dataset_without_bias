namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    data = NULL;
    {
        wchar_t * VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR1 == NULL) {exit(-1);}
        wmemset(VAR1, L'A', 50-1);
        VAR1[50-1] = L'\0';
        data = (void *)VAR1;
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(void * data) const = 0;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(void * data) const;
};
}
namespace NAMESPACE0
{
void FUN1()
{
    void * data;
    data = NULL;
    {
        wchar_t * VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR2 == NULL) {exit(-1);}
        wmemset(VAR2, L'A', 50-1);
        VAR2[50-1] = L'\0';
        data = (void *)VAR2;
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(void * data) const = 0;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(void * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(void * data) const
{
    {
<START>
        size_t dataLen = strlen((char *)data);
<END>
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        if (dest == NULL) {exit(-1);}
        (void)wcscpy((wchar_t *)dest, (wchar_t *)data);
        printLine((char *)dest);
        free(dest);
    }
}
}
}
