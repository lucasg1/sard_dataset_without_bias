static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    FILE * data;
    data = NULL; 
    if(staticTrue)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(staticTrue)
    {
<START>
        fclose(data);
<END>
    }
}
