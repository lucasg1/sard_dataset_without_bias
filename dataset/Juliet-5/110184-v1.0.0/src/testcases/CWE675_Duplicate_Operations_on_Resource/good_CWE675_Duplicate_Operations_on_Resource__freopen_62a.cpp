namespace NAMESPACE0
{
void FUN0(FILE * &data)
{
    data = fopen("GoodSource_fopen.txt", "w+");
}
void FUN1(FILE * &data)
{
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
}
} 
namespace NAMESPACE0
{
void FUN0(FILE * &data);
void FUN3()
{
    FILE * data;
    data = NULL; 
    FUN0(data);
    fclose(data);
}
void FUN1(FILE * &data);
void FUN5()
{
    FILE * data;
    data = NULL; 
    FUN1(data);
    ; 
}
} 
