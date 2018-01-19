/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: tdata.proto */

#ifndef PROTOBUF_C_tdata_2eproto__INCLUDED
#define PROTOBUF_C_tdata_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _DataType DataType;
typedef struct _TraceType TraceType;


/* --- enums --- */


/* --- messages --- */

struct _DataType {
    ProtobufCMessage base;
    int32_t logid;
    char *function;
    int32_t cost;
    protobuf_c_boolean has_lineno;
    int32_t lineno;
    char *filename;
    char *input;
    char *return_;
};
#define DATA_TYPE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&data_type__descriptor) \
    , 0, NULL, 0, 0, 0, NULL, NULL, NULL }


struct _TraceType {
    ProtobufCMessage base;
    size_t n_trace;
    DataType **trace;
};
#define TRACE_TYPE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&trace_type__descriptor) \
    , 0,NULL }


/* DataType methods */
void data_type__init
        (DataType * message);

size_t data_type__get_packed_size
        (const DataType *message);

size_t data_type__pack
        (const DataType *message,
         uint8_t *out);

size_t data_type__pack_to_buffer
        (const DataType *message,
         ProtobufCBuffer *buffer);

DataType *
data_type__unpack
        (ProtobufCAllocator *allocator,
         size_t len,
         const uint8_t *data);

void data_type__free_unpacked
        (DataType * message,
         ProtobufCAllocator * allocator);

/* TraceType methods */
void trace_type__init
        (TraceType *message);

size_t trace_type__get_packed_size
        (const TraceType *message);

size_t trace_type__pack
        (const TraceType *message,
         uint8_t *out);

size_t trace_type__pack_to_buffer
        (const TraceType *message,
         ProtobufCBuffer *buffer);

TraceType *
trace_type__unpack
        (ProtobufCAllocator *allocator,
         size_t len,
         const uint8_t *data);

void trace_type__free_unpacked
        (TraceType *message,
         ProtobufCAllocator *allocator);

/* --- per-message closures --- */

typedef void (*DataType_Closure)
        (const DataType *message,
         void *closure_data);

typedef void (*TraceType_Closure)
        (const TraceType *message,
         void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor data_type__descriptor;
extern const ProtobufCMessageDescriptor trace_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_tdata_2eproto__INCLUDED */
