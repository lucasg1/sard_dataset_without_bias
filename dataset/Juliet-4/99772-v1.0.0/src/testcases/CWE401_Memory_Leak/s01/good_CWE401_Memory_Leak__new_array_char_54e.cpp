namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3(char * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN5()
{
    char * data;
    data = NULL;
    char VAR2[100];
    data = VAR2;
    strcpy(data, "A String");
    printLine(data);
    FUN1(data);
}
void FUN3(char * data);
void FUN7()
{
    char * data;
    data = NULL;
    data = new char[100];
    strcpy(data, "A String");
    printLine(data);
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN9(char * data);
void FUN10(char * data)
{
    FUN9(data);
}
void FUN11(char * data);
void FUN12(char * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN10(char * data);
void FUN0(char * data)
{
    FUN10(data);
}
void FUN12(char * data);
void FUN2(char * data)
{
    FUN12(data);
}
} 
namespace NAMESPACE0
{
void FUN9(char * data)
{
    ; 
}
void FUN11(char * data)
{
    delete[] data;
}
} 
