void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        if (RpcImpersonateClient(0) == RPC_S_OK)
<END>
        {
            exit(1);
        }
    }
}
