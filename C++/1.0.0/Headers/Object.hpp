#ifndef ObjectDefined
    #define ObjectDefined

    namespace Org {
        namespace Gius {
            namespace Types {
                class Object {
                    protected:
                        virtual bool isInt() = 0;
                        virtual bool isFloat() = 0;
                        virtual bool isDouble() = 0;
                        virtual bool isBool() = 0;
                        virtual bool isChar() = 0;
                        virtual bool isNotPrimitive() = 0;
                };
            }
        }
    }
#endif