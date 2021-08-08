#include <iostream>
#include <string>

#include "../user.pb.h"

/*
    UserService原来是一个本地服务，提供了两个进程内的基本方法，Login和GetFriendLists
*/

class UserService: public fixbug::UserServiceRpc
{
    //重写UserServiceRpc的虚函数 下面这些方法都是框架直接调用的
    virtual void Login(google::protobuf::RpcController* controller,
                       const ::fixbug::LoginRequest* request,
                       ::fixbug::LoginResponse* response,
                       ::google::protobuf::Closure* done)
    {

    }
};

int main(){
    UserService us;
    // us.Login("aaa","sfd");
    return 0;
}