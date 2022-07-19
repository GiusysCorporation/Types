#ifndef DoubleDefined
    #define DoubleDefined
    #include "../Object.hpp"

    namespace Org {
        namespace Gius {
            namespace Types {
                namespace Primitives {
                    class Double: public Object {
                        public:
                            double value = 0.0;

                            Double(double value);
                            bool isObject();
                            bool isInt();
                            bool isFloat();
                            bool isDouble();
                            bool isBool();
                            bool isChar();
                            bool isNotPrimitive();
                    };
                }
            }
        }
    }
#endif