int VAR0 = 0;
void FUN0(FILE * data);
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(FILE * data)
{
    if(VAR0)
    {
<START>
        fclose(data);
<END>
    }
}
