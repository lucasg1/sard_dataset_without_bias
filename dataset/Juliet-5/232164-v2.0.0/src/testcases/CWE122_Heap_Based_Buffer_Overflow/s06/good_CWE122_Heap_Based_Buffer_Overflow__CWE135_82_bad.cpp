namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(void * data)
{
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        if (dest == NULL) {exit(-1);}
        memcpy(dest, data, (dataLen+1)*sizeof(wchar_t));
        printWLine((wchar_t *)dest);
        free(dest);
    }
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN1::action(void * data)
{
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        if (dest == NULL) {exit(-1);}
        memcpy(dest, data, (dataLen+1)*sizeof(wchar_t));
        printWLine((wchar_t *)dest);
        free(dest);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    data = NULL;
    {
        char * VAR3 = (char *)malloc(50*sizeof(char));
        if (VAR3 == NULL) {exit(-1);}
        memset(VAR3, 'A', 50-1);
        VAR3[50-1] = '\0';
        data = (void *)VAR3;
    }
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    void * data;
    data = NULL;
    {
        wchar_t * VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR4 == NULL) {exit(-1);}
        wmemset(VAR4, L'A', 50-1);
        VAR4[50-1] = L'\0';
        data = (void *)VAR4;
    }
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
void FUN2()
{
    FUN0();
    FUN1();
}
} 
namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    data = NULL;
    {
        char * VAR3 = (char *)malloc(50*sizeof(char));
        if (VAR3 == NULL) {exit(-1);}
        memset(VAR3, 'A', 50-1);
        VAR3[50-1] = '\0';
        data = (void *)VAR3;
    }
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
void FUN1()
{
    void * data;
    data = NULL;
    {
        wchar_t * VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (VAR4 == NULL) {exit(-1);}
        wmemset(VAR4, L'A', 50-1);
        VAR4[50-1] = L'\0';
        data = (void *)VAR4;
    }
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN1;
    baseObject->action(data);
    delete baseObject;
}
void FUN2()
{
    FUN0();
    FUN1();
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(void * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(void * data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(void * data);
};
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(void * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(void * data);
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(void * data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(void * data)
{
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)calloc(dataLen+1, 1);
        if (dest == NULL) {exit(-1);}
        (void)strcpy((char *)dest, (char *)data);
        printLine((char *)dest);
        free(dest);
    }
}
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(void * data)
{
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)calloc(dataLen+1, 1);
        if (dest == NULL) {exit(-1);}
        (void)strcpy((char *)dest, (char *)data);
        printLine((char *)dest);
        free(dest);
    }
}
}
