static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        fwrite((char *)"string", sizeof(char), strlen("string"), stdout);
<END>
    }
}
