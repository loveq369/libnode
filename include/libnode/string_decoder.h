// Copyright (c) 2012 Plenluno All rights reserved.

#ifndef LIBNODE_STRING_DECODER_H_
#define LIBNODE_STRING_DECODER_H_

#include "libnode/buffer.h"

namespace libj {
namespace node {

class StringDecoder : LIBJ_JS_OBJECT(StringDecoder)
 public:
    static Ptr create(String::Encoding enc = String::UTF8);

    virtual String::CPtr write(Buffer::CPtr buf) const = 0;
};

}  // namespace node
}  // namespace libj

#endif  // LIBNODE_STRING_DECODER_H_
