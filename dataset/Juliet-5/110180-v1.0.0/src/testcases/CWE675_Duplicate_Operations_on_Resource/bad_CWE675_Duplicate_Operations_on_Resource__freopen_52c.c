void FUN0(FILE * data);
void FUN1(FILE * data)
{
    FUN0(data);
}
void FUN1(FILE * data);
void FUN3()
{
    FILE * data;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    FUN1(data);
}
void FUN0(FILE * data)
{
<START>
    fclose(data);
<END>
}
