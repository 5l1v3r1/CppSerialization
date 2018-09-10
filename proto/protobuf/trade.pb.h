// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: trade.proto

#ifndef PROTOBUF_INCLUDED_trade_2eproto
#define PROTOBUF_INCLUDED_trade_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3006001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_trade_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_trade_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_trade_2eproto();
namespace Trade {
namespace protobuf {
class Account;
class AccountDefaultTypeInternal;
extern AccountDefaultTypeInternal _Account_default_instance_;
class Balance;
class BalanceDefaultTypeInternal;
extern BalanceDefaultTypeInternal _Balance_default_instance_;
class Order;
class OrderDefaultTypeInternal;
extern OrderDefaultTypeInternal _Order_default_instance_;
}  // namespace protobuf
}  // namespace Trade
namespace google {
namespace protobuf {
template<> ::Trade::protobuf::Account* Arena::CreateMaybeMessage<::Trade::protobuf::Account>(Arena*);
template<> ::Trade::protobuf::Balance* Arena::CreateMaybeMessage<::Trade::protobuf::Balance>(Arena*);
template<> ::Trade::protobuf::Order* Arena::CreateMaybeMessage<::Trade::protobuf::Order>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace Trade {
namespace protobuf {

enum OrderSide {
  buy = 0,
  sell = 1,
  OrderSide_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  OrderSide_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool OrderSide_IsValid(int value);
const OrderSide OrderSide_MIN = buy;
const OrderSide OrderSide_MAX = sell;
const int OrderSide_ARRAYSIZE = OrderSide_MAX + 1;

const ::google::protobuf::EnumDescriptor* OrderSide_descriptor();
inline const ::std::string& OrderSide_Name(OrderSide value) {
  return ::google::protobuf::internal::NameOfEnum(
    OrderSide_descriptor(), value);
}
inline bool OrderSide_Parse(
    const ::std::string& name, OrderSide* value) {
  return ::google::protobuf::internal::ParseNamedEnum<OrderSide>(
    OrderSide_descriptor(), name, value);
}
enum OrderType {
  market = 0,
  limit = 1,
  stop = 2,
  OrderType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  OrderType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool OrderType_IsValid(int value);
const OrderType OrderType_MIN = market;
const OrderType OrderType_MAX = stop;
const int OrderType_ARRAYSIZE = OrderType_MAX + 1;

const ::google::protobuf::EnumDescriptor* OrderType_descriptor();
inline const ::std::string& OrderType_Name(OrderType value) {
  return ::google::protobuf::internal::NameOfEnum(
    OrderType_descriptor(), value);
}
inline bool OrderType_Parse(
    const ::std::string& name, OrderType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<OrderType>(
    OrderType_descriptor(), name, value);
}
// ===================================================================

class Order : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Trade.protobuf.Order) */ {
 public:
  Order();
  virtual ~Order();

  Order(const Order& from);

  inline Order& operator=(const Order& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Order(Order&& from) noexcept
    : Order() {
    *this = ::std::move(from);
  }

  inline Order& operator=(Order&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Order& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Order* internal_default_instance() {
    return reinterpret_cast<const Order*>(
               &_Order_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Order* other);
  friend void swap(Order& a, Order& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Order* New() const final {
    return CreateMaybeMessage<Order>(NULL);
  }

  Order* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Order>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Order& from);
  void MergeFrom(const Order& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Order* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string symbol = 2;
  void clear_symbol();
  static const int kSymbolFieldNumber = 2;
  const ::std::string& symbol() const;
  void set_symbol(const ::std::string& value);
  #if LANG_CXX11
  void set_symbol(::std::string&& value);
  #endif
  void set_symbol(const char* value);
  void set_symbol(const char* value, size_t size);
  ::std::string* mutable_symbol();
  ::std::string* release_symbol();
  void set_allocated_symbol(::std::string* symbol);

  // int32 uid = 1;
  void clear_uid();
  static const int kUidFieldNumber = 1;
  ::google::protobuf::int32 uid() const;
  void set_uid(::google::protobuf::int32 value);

  // .Trade.protobuf.OrderSide side = 3;
  void clear_side();
  static const int kSideFieldNumber = 3;
  ::Trade::protobuf::OrderSide side() const;
  void set_side(::Trade::protobuf::OrderSide value);

  // double price = 5;
  void clear_price();
  static const int kPriceFieldNumber = 5;
  double price() const;
  void set_price(double value);

  // double volume = 6;
  void clear_volume();
  static const int kVolumeFieldNumber = 6;
  double volume() const;
  void set_volume(double value);

  // .Trade.protobuf.OrderType type = 4;
  void clear_type();
  static const int kTypeFieldNumber = 4;
  ::Trade::protobuf::OrderType type() const;
  void set_type(::Trade::protobuf::OrderType value);

  // @@protoc_insertion_point(class_scope:Trade.protobuf.Order)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr symbol_;
  ::google::protobuf::int32 uid_;
  int side_;
  double price_;
  double volume_;
  int type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_trade_2eproto;
};
// -------------------------------------------------------------------

class Balance : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Trade.protobuf.Balance) */ {
 public:
  Balance();
  virtual ~Balance();

  Balance(const Balance& from);

  inline Balance& operator=(const Balance& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Balance(Balance&& from) noexcept
    : Balance() {
    *this = ::std::move(from);
  }

  inline Balance& operator=(Balance&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Balance& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Balance* internal_default_instance() {
    return reinterpret_cast<const Balance*>(
               &_Balance_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Balance* other);
  friend void swap(Balance& a, Balance& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Balance* New() const final {
    return CreateMaybeMessage<Balance>(NULL);
  }

  Balance* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Balance>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Balance& from);
  void MergeFrom(const Balance& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Balance* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string currency = 1;
  void clear_currency();
  static const int kCurrencyFieldNumber = 1;
  const ::std::string& currency() const;
  void set_currency(const ::std::string& value);
  #if LANG_CXX11
  void set_currency(::std::string&& value);
  #endif
  void set_currency(const char* value);
  void set_currency(const char* value, size_t size);
  ::std::string* mutable_currency();
  ::std::string* release_currency();
  void set_allocated_currency(::std::string* currency);

  // double amount = 2;
  void clear_amount();
  static const int kAmountFieldNumber = 2;
  double amount() const;
  void set_amount(double value);

  // @@protoc_insertion_point(class_scope:Trade.protobuf.Balance)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr currency_;
  double amount_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_trade_2eproto;
};
// -------------------------------------------------------------------

class Account : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Trade.protobuf.Account) */ {
 public:
  Account();
  virtual ~Account();

  Account(const Account& from);

  inline Account& operator=(const Account& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Account(Account&& from) noexcept
    : Account() {
    *this = ::std::move(from);
  }

  inline Account& operator=(Account&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Account& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Account* internal_default_instance() {
    return reinterpret_cast<const Account*>(
               &_Account_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Account* other);
  friend void swap(Account& a, Account& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Account* New() const final {
    return CreateMaybeMessage<Account>(NULL);
  }

  Account* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Account>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Account& from);
  void MergeFrom(const Account& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Account* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Trade.protobuf.Order orders = 4;
  int orders_size() const;
  void clear_orders();
  static const int kOrdersFieldNumber = 4;
  ::Trade::protobuf::Order* mutable_orders(int index);
  ::google::protobuf::RepeatedPtrField< ::Trade::protobuf::Order >*
      mutable_orders();
  const ::Trade::protobuf::Order& orders(int index) const;
  ::Trade::protobuf::Order* add_orders();
  const ::google::protobuf::RepeatedPtrField< ::Trade::protobuf::Order >&
      orders() const;

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // .Trade.protobuf.Balance wallet = 3;
  bool has_wallet() const;
  void clear_wallet();
  static const int kWalletFieldNumber = 3;
  const ::Trade::protobuf::Balance& wallet() const;
  ::Trade::protobuf::Balance* release_wallet();
  ::Trade::protobuf::Balance* mutable_wallet();
  void set_allocated_wallet(::Trade::protobuf::Balance* wallet);

  // int32 uid = 1;
  void clear_uid();
  static const int kUidFieldNumber = 1;
  ::google::protobuf::int32 uid() const;
  void set_uid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Trade.protobuf.Account)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::Trade::protobuf::Order > orders_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::Trade::protobuf::Balance* wallet_;
  ::google::protobuf::int32 uid_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_trade_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Order

// int32 uid = 1;
inline void Order::clear_uid() {
  uid_ = 0;
}
inline ::google::protobuf::int32 Order::uid() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Order.uid)
  return uid_;
}
inline void Order::set_uid(::google::protobuf::int32 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:Trade.protobuf.Order.uid)
}

// string symbol = 2;
inline void Order::clear_symbol() {
  symbol_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Order::symbol() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Order.symbol)
  return symbol_.GetNoArena();
}
inline void Order::set_symbol(const ::std::string& value) {
  
  symbol_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Trade.protobuf.Order.symbol)
}
#if LANG_CXX11
inline void Order::set_symbol(::std::string&& value) {
  
  symbol_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Trade.protobuf.Order.symbol)
}
#endif
inline void Order::set_symbol(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  symbol_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Trade.protobuf.Order.symbol)
}
inline void Order::set_symbol(const char* value, size_t size) {
  
  symbol_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Trade.protobuf.Order.symbol)
}
inline ::std::string* Order::mutable_symbol() {
  
  // @@protoc_insertion_point(field_mutable:Trade.protobuf.Order.symbol)
  return symbol_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Order::release_symbol() {
  // @@protoc_insertion_point(field_release:Trade.protobuf.Order.symbol)
  
  return symbol_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Order::set_allocated_symbol(::std::string* symbol) {
  if (symbol != NULL) {
    
  } else {
    
  }
  symbol_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), symbol);
  // @@protoc_insertion_point(field_set_allocated:Trade.protobuf.Order.symbol)
}

// .Trade.protobuf.OrderSide side = 3;
inline void Order::clear_side() {
  side_ = 0;
}
inline ::Trade::protobuf::OrderSide Order::side() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Order.side)
  return static_cast< ::Trade::protobuf::OrderSide >(side_);
}
inline void Order::set_side(::Trade::protobuf::OrderSide value) {
  
  side_ = value;
  // @@protoc_insertion_point(field_set:Trade.protobuf.Order.side)
}

// .Trade.protobuf.OrderType type = 4;
inline void Order::clear_type() {
  type_ = 0;
}
inline ::Trade::protobuf::OrderType Order::type() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Order.type)
  return static_cast< ::Trade::protobuf::OrderType >(type_);
}
inline void Order::set_type(::Trade::protobuf::OrderType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:Trade.protobuf.Order.type)
}

// double price = 5;
inline void Order::clear_price() {
  price_ = 0;
}
inline double Order::price() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Order.price)
  return price_;
}
inline void Order::set_price(double value) {
  
  price_ = value;
  // @@protoc_insertion_point(field_set:Trade.protobuf.Order.price)
}

// double volume = 6;
inline void Order::clear_volume() {
  volume_ = 0;
}
inline double Order::volume() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Order.volume)
  return volume_;
}
inline void Order::set_volume(double value) {
  
  volume_ = value;
  // @@protoc_insertion_point(field_set:Trade.protobuf.Order.volume)
}

// -------------------------------------------------------------------

// Balance

// string currency = 1;
inline void Balance::clear_currency() {
  currency_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Balance::currency() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Balance.currency)
  return currency_.GetNoArena();
}
inline void Balance::set_currency(const ::std::string& value) {
  
  currency_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Trade.protobuf.Balance.currency)
}
#if LANG_CXX11
inline void Balance::set_currency(::std::string&& value) {
  
  currency_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Trade.protobuf.Balance.currency)
}
#endif
inline void Balance::set_currency(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  currency_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Trade.protobuf.Balance.currency)
}
inline void Balance::set_currency(const char* value, size_t size) {
  
  currency_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Trade.protobuf.Balance.currency)
}
inline ::std::string* Balance::mutable_currency() {
  
  // @@protoc_insertion_point(field_mutable:Trade.protobuf.Balance.currency)
  return currency_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Balance::release_currency() {
  // @@protoc_insertion_point(field_release:Trade.protobuf.Balance.currency)
  
  return currency_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Balance::set_allocated_currency(::std::string* currency) {
  if (currency != NULL) {
    
  } else {
    
  }
  currency_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), currency);
  // @@protoc_insertion_point(field_set_allocated:Trade.protobuf.Balance.currency)
}

// double amount = 2;
inline void Balance::clear_amount() {
  amount_ = 0;
}
inline double Balance::amount() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Balance.amount)
  return amount_;
}
inline void Balance::set_amount(double value) {
  
  amount_ = value;
  // @@protoc_insertion_point(field_set:Trade.protobuf.Balance.amount)
}

// -------------------------------------------------------------------

// Account

// int32 uid = 1;
inline void Account::clear_uid() {
  uid_ = 0;
}
inline ::google::protobuf::int32 Account::uid() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Account.uid)
  return uid_;
}
inline void Account::set_uid(::google::protobuf::int32 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:Trade.protobuf.Account.uid)
}

// string name = 2;
inline void Account::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Account::name() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Account.name)
  return name_.GetNoArena();
}
inline void Account::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Trade.protobuf.Account.name)
}
#if LANG_CXX11
inline void Account::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Trade.protobuf.Account.name)
}
#endif
inline void Account::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Trade.protobuf.Account.name)
}
inline void Account::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Trade.protobuf.Account.name)
}
inline ::std::string* Account::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:Trade.protobuf.Account.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Account::release_name() {
  // @@protoc_insertion_point(field_release:Trade.protobuf.Account.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Account::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Trade.protobuf.Account.name)
}

// .Trade.protobuf.Balance wallet = 3;
inline bool Account::has_wallet() const {
  return this != internal_default_instance() && wallet_ != NULL;
}
inline void Account::clear_wallet() {
  if (GetArenaNoVirtual() == NULL && wallet_ != NULL) {
    delete wallet_;
  }
  wallet_ = NULL;
}
inline const ::Trade::protobuf::Balance& Account::wallet() const {
  const ::Trade::protobuf::Balance* p = wallet_;
  // @@protoc_insertion_point(field_get:Trade.protobuf.Account.wallet)
  return p != NULL ? *p : *reinterpret_cast<const ::Trade::protobuf::Balance*>(
      &::Trade::protobuf::_Balance_default_instance_);
}
inline ::Trade::protobuf::Balance* Account::release_wallet() {
  // @@protoc_insertion_point(field_release:Trade.protobuf.Account.wallet)
  
  ::Trade::protobuf::Balance* temp = wallet_;
  wallet_ = NULL;
  return temp;
}
inline ::Trade::protobuf::Balance* Account::mutable_wallet() {
  
  if (wallet_ == NULL) {
    auto* p = CreateMaybeMessage<::Trade::protobuf::Balance>(GetArenaNoVirtual());
    wallet_ = p;
  }
  // @@protoc_insertion_point(field_mutable:Trade.protobuf.Account.wallet)
  return wallet_;
}
inline void Account::set_allocated_wallet(::Trade::protobuf::Balance* wallet) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete wallet_;
  }
  if (wallet) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      wallet = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, wallet, submessage_arena);
    }
    
  } else {
    
  }
  wallet_ = wallet;
  // @@protoc_insertion_point(field_set_allocated:Trade.protobuf.Account.wallet)
}

// repeated .Trade.protobuf.Order orders = 4;
inline int Account::orders_size() const {
  return orders_.size();
}
inline void Account::clear_orders() {
  orders_.Clear();
}
inline ::Trade::protobuf::Order* Account::mutable_orders(int index) {
  // @@protoc_insertion_point(field_mutable:Trade.protobuf.Account.orders)
  return orders_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::Trade::protobuf::Order >*
Account::mutable_orders() {
  // @@protoc_insertion_point(field_mutable_list:Trade.protobuf.Account.orders)
  return &orders_;
}
inline const ::Trade::protobuf::Order& Account::orders(int index) const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Account.orders)
  return orders_.Get(index);
}
inline ::Trade::protobuf::Order* Account::add_orders() {
  // @@protoc_insertion_point(field_add:Trade.protobuf.Account.orders)
  return orders_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Trade::protobuf::Order >&
Account::orders() const {
  // @@protoc_insertion_point(field_list:Trade.protobuf.Account.orders)
  return orders_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace Trade

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Trade::protobuf::OrderSide> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Trade::protobuf::OrderSide>() {
  return ::Trade::protobuf::OrderSide_descriptor();
}
template <> struct is_proto_enum< ::Trade::protobuf::OrderType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Trade::protobuf::OrderType>() {
  return ::Trade::protobuf::OrderType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_trade_2eproto
