namespace NAMESPACE0
{
void NAMESPACE0_goodB2G::action(void * data) const
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
void FUN3()
{
    void * data;
    data = NULL;
    {
        char * VAR1 = (char *)malloc(50*sizeof(char));
        if (VAR1 == NULL) {exit(-1);}
        memset(VAR1, 'A', 50-1);
        VAR1[50-1] = '\0';
        data = (void *)VAR1;
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN3();
    baseObject.action(data);
}
void FUN4()
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
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN4();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN4::action(void * data) const
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
class NAMESPACE0_base
{
public:
    virtual void action(void * data) const = 0;
};
class NAMESPACE0_FUN3 : public NAMESPACE0_base
{
public:
    void action(void * data) const;
};
class NAMESPACE0_FUN4 : public NAMESPACE0_base
{
public:
    void action(void * data) const;
};
}
namespace NAMESPACE0
{
void FUN3()
{
    void * data;
    data = NULL;
    {
        char * VAR1 = (char *)malloc(50*sizeof(char));
        if (VAR1 == NULL) {exit(-1);}
        memset(VAR1, 'A', 50-1);
        VAR1[50-1] = '\0';
        data = (void *)VAR1;
    }
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN3();
    baseObject.action(data);
}
void FUN4()
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
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN4();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void NAMESPACE0_FUN3::action(void * data) const
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
class NAMESPACE0_base
{
public:
    virtual void action(void * data) const = 0;
};
class NAMESPACE0_FUN3 : public NAMESPACE0_base
{
public:
    void action(void * data) const;
};
class NAMESPACE0_FUN4 : public NAMESPACE0_base
{
public:
    void action(void * data) const;
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN3::action(void * data) const
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
