static int VAR0 = 0;
void FUN0(FILE * data)
{
    if(VAR0)
    {
<START>
        fclose(data);
<END>
    }
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    VAR0 = 1; 
    FUN0(data);
}
