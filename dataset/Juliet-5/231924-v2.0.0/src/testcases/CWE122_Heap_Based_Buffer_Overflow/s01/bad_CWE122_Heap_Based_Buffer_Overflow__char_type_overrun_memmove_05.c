typedef struct _charVoid
{
    char charFirst[16];
    void * voidSecond;
    void * voidThird;
} charVoid;
static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            charVoid * structCharVoid = (charVoid *)malloc(sizeof(charVoid));
            if (structCharVoid == NULL) {exit(-1);}
            structCharVoid->voidSecond = (void *)SRC_STR;
            printLine((char *)structCharVoid->voidSecond);
<START>
            memmove(structCharVoid->charFirst, SRC_STR, sizeof(*structCharVoid));
<END>
            structCharVoid->charFirst[(sizeof(structCharVoid->charFirst)/sizeof(char))-1] = '\0'; 
            printLine((char *)structCharVoid->charFirst);
            printLine((char *)structCharVoid->voidSecond);
        }
    }
}
