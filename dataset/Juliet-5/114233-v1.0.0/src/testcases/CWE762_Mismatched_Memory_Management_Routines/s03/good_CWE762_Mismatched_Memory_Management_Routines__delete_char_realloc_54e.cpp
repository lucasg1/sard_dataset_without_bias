namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = new char;
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN6(char * data)
{
    FUN5(data);
}
void FUN7(char * data);
void FUN8(char * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN9(char * data);
void FUN5(char * data)
{
    FUN9(data);
}
void FUN11(char * data);
void FUN7(char * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN6(char * data);
void FUN0(char * data)
{
    FUN6(data);
}
void FUN8(char * data);
void FUN2(char * data)
{
    FUN8(data);
}
} 
namespace NAMESPACE0
{
void FUN9(char * data)
{
    delete data;
}
void FUN11(char * data)
{
    free(data);
}
} 
