static int VAR0 = 0;
void FUN0(FILE * data)
{
    if(VAR0)
    {
        if (data != NULL)
        {
<START>
            CloseHandle((HANDLE)data);
<END>
        }
    }
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    VAR0 = 1; 
    FUN0(data);
}
