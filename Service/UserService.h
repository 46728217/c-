/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef UserService_H
#define UserService_H

#include <thrift/TDispatchProcessor.h>
#include "User_types.h"

namespace com { namespace baichebao { namespace service {

class UserServiceIf {
 public:
  virtual ~UserServiceIf() {}
  virtual void login(User& _return, const std::string& email, const std::string& password) = 0;
  virtual bool logout() = 0;
  virtual void get(User& _return, const int32_t uid) = 0;
};

class UserServiceIfFactory {
 public:
  typedef UserServiceIf Handler;

  virtual ~UserServiceIfFactory() {}

  virtual UserServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(UserServiceIf* /* handler */) = 0;
};

class UserServiceIfSingletonFactory : virtual public UserServiceIfFactory {
 public:
  UserServiceIfSingletonFactory(const boost::shared_ptr<UserServiceIf>& iface) : iface_(iface) {}
  virtual ~UserServiceIfSingletonFactory() {}

  virtual UserServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(UserServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<UserServiceIf> iface_;
};

class UserServiceNull : virtual public UserServiceIf {
 public:
  virtual ~UserServiceNull() {}
  void login(User& /* _return */, const std::string& /* email */, const std::string& /* password */) {
    return;
  }
  bool logout() {
    bool _return = false;
    return _return;
  }
  void get(User& /* _return */, const int32_t /* uid */) {
    return;
  }
};

typedef struct _UserService_login_args__isset {
  _UserService_login_args__isset() : email(false), password(false) {}
  bool email :1;
  bool password :1;
} _UserService_login_args__isset;

class UserService_login_args {
 public:

  static const char* ascii_fingerprint; // = "07A9615F837F7D0A952B595DD3020972";
  static const uint8_t binary_fingerprint[16]; // = {0x07,0xA9,0x61,0x5F,0x83,0x7F,0x7D,0x0A,0x95,0x2B,0x59,0x5D,0xD3,0x02,0x09,0x72};

  UserService_login_args(const UserService_login_args&);
  UserService_login_args& operator=(const UserService_login_args&);
  UserService_login_args() : email(), password() {
  }

  virtual ~UserService_login_args() throw();
  std::string email;
  std::string password;

  _UserService_login_args__isset __isset;

  void __set_email(const std::string& val);

  void __set_password(const std::string& val);

  bool operator == (const UserService_login_args & rhs) const
  {
    if (!(email == rhs.email))
      return false;
    if (!(password == rhs.password))
      return false;
    return true;
  }
  bool operator != (const UserService_login_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_login_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const UserService_login_args& obj);
};


class UserService_login_pargs {
 public:

  static const char* ascii_fingerprint; // = "07A9615F837F7D0A952B595DD3020972";
  static const uint8_t binary_fingerprint[16]; // = {0x07,0xA9,0x61,0x5F,0x83,0x7F,0x7D,0x0A,0x95,0x2B,0x59,0x5D,0xD3,0x02,0x09,0x72};


  virtual ~UserService_login_pargs() throw();
  const std::string* email;
  const std::string* password;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const UserService_login_pargs& obj);
};

typedef struct _UserService_login_result__isset {
  _UserService_login_result__isset() : success(false) {}
  bool success :1;
} _UserService_login_result__isset;

class UserService_login_result {
 public:

  static const char* ascii_fingerprint; // = "B58B3E9FDF96C582CF0C21EEB6A7A524";
  static const uint8_t binary_fingerprint[16]; // = {0xB5,0x8B,0x3E,0x9F,0xDF,0x96,0xC5,0x82,0xCF,0x0C,0x21,0xEE,0xB6,0xA7,0xA5,0x24};

  UserService_login_result(const UserService_login_result&);
  UserService_login_result& operator=(const UserService_login_result&);
  UserService_login_result() {
  }

  virtual ~UserService_login_result() throw();
  User success;

  _UserService_login_result__isset __isset;

  void __set_success(const User& val);

  bool operator == (const UserService_login_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const UserService_login_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_login_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const UserService_login_result& obj);
};

typedef struct _UserService_login_presult__isset {
  _UserService_login_presult__isset() : success(false) {}
  bool success :1;
} _UserService_login_presult__isset;

class UserService_login_presult {
 public:

  static const char* ascii_fingerprint; // = "B58B3E9FDF96C582CF0C21EEB6A7A524";
  static const uint8_t binary_fingerprint[16]; // = {0xB5,0x8B,0x3E,0x9F,0xDF,0x96,0xC5,0x82,0xCF,0x0C,0x21,0xEE,0xB6,0xA7,0xA5,0x24};


  virtual ~UserService_login_presult() throw();
  User* success;

  _UserService_login_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const UserService_login_presult& obj);
};


class UserService_logout_args {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  UserService_logout_args(const UserService_logout_args&);
  UserService_logout_args& operator=(const UserService_logout_args&);
  UserService_logout_args() {
  }

  virtual ~UserService_logout_args() throw();

  bool operator == (const UserService_logout_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const UserService_logout_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_logout_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const UserService_logout_args& obj);
};


class UserService_logout_pargs {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};


  virtual ~UserService_logout_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const UserService_logout_pargs& obj);
};

typedef struct _UserService_logout_result__isset {
  _UserService_logout_result__isset() : success(false) {}
  bool success :1;
} _UserService_logout_result__isset;

class UserService_logout_result {
 public:

  static const char* ascii_fingerprint; // = "D9D3B4421B1F23CB4063C80B484E7909";
  static const uint8_t binary_fingerprint[16]; // = {0xD9,0xD3,0xB4,0x42,0x1B,0x1F,0x23,0xCB,0x40,0x63,0xC8,0x0B,0x48,0x4E,0x79,0x09};

  UserService_logout_result(const UserService_logout_result&);
  UserService_logout_result& operator=(const UserService_logout_result&);
  UserService_logout_result() : success(0) {
  }

  virtual ~UserService_logout_result() throw();
  bool success;

  _UserService_logout_result__isset __isset;

  void __set_success(const bool val);

  bool operator == (const UserService_logout_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const UserService_logout_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_logout_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const UserService_logout_result& obj);
};

typedef struct _UserService_logout_presult__isset {
  _UserService_logout_presult__isset() : success(false) {}
  bool success :1;
} _UserService_logout_presult__isset;

class UserService_logout_presult {
 public:

  static const char* ascii_fingerprint; // = "D9D3B4421B1F23CB4063C80B484E7909";
  static const uint8_t binary_fingerprint[16]; // = {0xD9,0xD3,0xB4,0x42,0x1B,0x1F,0x23,0xCB,0x40,0x63,0xC8,0x0B,0x48,0x4E,0x79,0x09};


  virtual ~UserService_logout_presult() throw();
  bool* success;

  _UserService_logout_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const UserService_logout_presult& obj);
};

typedef struct _UserService_get_args__isset {
  _UserService_get_args__isset() : uid(false) {}
  bool uid :1;
} _UserService_get_args__isset;

class UserService_get_args {
 public:

  static const char* ascii_fingerprint; // = "E86CACEB22240450EDCBEFC3A83970E4";
  static const uint8_t binary_fingerprint[16]; // = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};

  UserService_get_args(const UserService_get_args&);
  UserService_get_args& operator=(const UserService_get_args&);
  UserService_get_args() : uid(0) {
  }

  virtual ~UserService_get_args() throw();
  int32_t uid;

  _UserService_get_args__isset __isset;

  void __set_uid(const int32_t val);

  bool operator == (const UserService_get_args & rhs) const
  {
    if (!(uid == rhs.uid))
      return false;
    return true;
  }
  bool operator != (const UserService_get_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_get_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const UserService_get_args& obj);
};


class UserService_get_pargs {
 public:

  static const char* ascii_fingerprint; // = "E86CACEB22240450EDCBEFC3A83970E4";
  static const uint8_t binary_fingerprint[16]; // = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};


  virtual ~UserService_get_pargs() throw();
  const int32_t* uid;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const UserService_get_pargs& obj);
};

typedef struct _UserService_get_result__isset {
  _UserService_get_result__isset() : success(false) {}
  bool success :1;
} _UserService_get_result__isset;

class UserService_get_result {
 public:

  static const char* ascii_fingerprint; // = "B58B3E9FDF96C582CF0C21EEB6A7A524";
  static const uint8_t binary_fingerprint[16]; // = {0xB5,0x8B,0x3E,0x9F,0xDF,0x96,0xC5,0x82,0xCF,0x0C,0x21,0xEE,0xB6,0xA7,0xA5,0x24};

  UserService_get_result(const UserService_get_result&);
  UserService_get_result& operator=(const UserService_get_result&);
  UserService_get_result() {
  }

  virtual ~UserService_get_result() throw();
  User success;

  _UserService_get_result__isset __isset;

  void __set_success(const User& val);

  bool operator == (const UserService_get_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const UserService_get_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserService_get_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const UserService_get_result& obj);
};

typedef struct _UserService_get_presult__isset {
  _UserService_get_presult__isset() : success(false) {}
  bool success :1;
} _UserService_get_presult__isset;

class UserService_get_presult {
 public:

  static const char* ascii_fingerprint; // = "B58B3E9FDF96C582CF0C21EEB6A7A524";
  static const uint8_t binary_fingerprint[16]; // = {0xB5,0x8B,0x3E,0x9F,0xDF,0x96,0xC5,0x82,0xCF,0x0C,0x21,0xEE,0xB6,0xA7,0xA5,0x24};


  virtual ~UserService_get_presult() throw();
  User* success;

  _UserService_get_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const UserService_get_presult& obj);
};

class UserServiceClient : virtual public UserServiceIf {
 public:
  UserServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  UserServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void login(User& _return, const std::string& email, const std::string& password);
  void send_login(const std::string& email, const std::string& password);
  void recv_login(User& _return);
  bool logout();
  void send_logout();
  bool recv_logout();
  void get(User& _return, const int32_t uid);
  void send_get(const int32_t uid);
  void recv_get(User& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class UserServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<UserServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (UserServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_login(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_logout(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_get(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  UserServiceProcessor(boost::shared_ptr<UserServiceIf> iface) :
    iface_(iface) {
    processMap_["login"] = &UserServiceProcessor::process_login;
    processMap_["logout"] = &UserServiceProcessor::process_logout;
    processMap_["get"] = &UserServiceProcessor::process_get;
  }

  virtual ~UserServiceProcessor() {}
};

class UserServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  UserServiceProcessorFactory(const ::boost::shared_ptr< UserServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< UserServiceIfFactory > handlerFactory_;
};

class UserServiceMultiface : virtual public UserServiceIf {
 public:
  UserServiceMultiface(std::vector<boost::shared_ptr<UserServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~UserServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<UserServiceIf> > ifaces_;
  UserServiceMultiface() {}
  void add(boost::shared_ptr<UserServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void login(User& _return, const std::string& email, const std::string& password) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->login(_return, email, password);
    }
    ifaces_[i]->login(_return, email, password);
    return;
  }

  bool logout() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->logout();
    }
    return ifaces_[i]->logout();
  }

  void get(User& _return, const int32_t uid) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->get(_return, uid);
    }
    ifaces_[i]->get(_return, uid);
    return;
  }

};

}}} // namespace

#endif
