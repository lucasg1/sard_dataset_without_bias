typedef struct _charVoid
{
    wchar_t charFirst[16];
    void * voidSecond;
    void * voidThird;
} charVoid;
void FUN0()
{
    while(1)
    {
        {
            charVoid * structCharVoid = (charVoid *)malloc(sizeof(charVoid));
            if (structCharVoid == NULL) {exit(-1);}
            structCharVoid->voidSecond = (void *)SRC_STR;
            printWLine((wchar_t *)structCharVoid->voidSecond);
            memcpy(structCharVoid->charFirst, SRC_STR, sizeof(structCharVoid->charFirst));
            structCharVoid->charFirst[(sizeof(structCharVoid->charFirst)/sizeof(wchar_t))-1] = L'\0'; 
            printWLine((wchar_t *)structCharVoid->charFirst);
            printWLine((wchar_t *)structCharVoid->voidSecond);
            free(structCharVoid);
        }
        break;
    }
}
