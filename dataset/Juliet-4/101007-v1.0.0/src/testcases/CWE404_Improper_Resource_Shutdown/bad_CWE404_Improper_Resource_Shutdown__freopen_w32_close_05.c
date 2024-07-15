static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    if(staticTrue)
    {
        if (data != NULL)
        {
<START>
            _close((int)data);
<END>
        }
    }
}
