static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    FILE * data;
    data = NULL; 
    if(staticTrue)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    if(staticTrue)
    {
<START>
        fclose(data);
<END>
    }
}
