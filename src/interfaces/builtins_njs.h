#ifndef BUILTINS_H_
#define BUILTINS_H_
#include <string>
namespace builtins {
const std::string functions[] = {
    "Object",        "Array",      "Boolean",        "Number",      "String",
    "Function",      "RegExp",     "Date",           "Error",       "EvalError",
    "InternalError", "RangeError", "ReferenceError", "SyntaxError", "TypeError",
    "URIError",      "MemoryError"};
const std::string methods[] = {"parse",
                               "stringify",
                               "asin",
                               "log10",
                               "log1p",
                               "clz32",
                               "fround",
                               "log",
                               "max",
                               "sin",
                               "sqrt",
                               "cbrt",
                               "cosh",
                               "acosh",
                               "log2",
                               "expm1",
                               "abs",
                               "ceil",
                               "sign",
                               "tanh",
                               "atanh",
                               "round",
                               "asinh",
                               "exp",
                               "imul",
                               "sinh",
                               "cos",
                               "acos",
                               "trunc",
                               "atan2",
                               "floor",
                               "pow",
                               "random",
                               "tan",
                               "atan",
                               "hypot",
                               "min",
                               "dump",
                               "toString",
                               "valueOf",
                               "UTC",
                               "now",
                               "getHours",
                               "getSeconds",
                               "getUTCMonth",
                               "setUTCDate",
                               "getUTCHours",
                               "getUTCSeconds",
                               "setTime",
                               "toLocaleString",
                               "getMonth",
                               "setDate",
                               "setSeconds",
                               "setHours",
                               "getUTCDate",
                               "getTimezoneOffset",
                               "setUTCMonth",
                               "toLocaleTimeString",
                               "getTime",
                               "setUTCSeconds",
                               "setUTCHours",
                               "toJSON",
                               "toLocaleDateString",
                               "getDate",
                               "setMonth",
                               "setUTCMinutes",
                               "toUTCString",
                               "setMilliseconds",
                               "setUTCFullYear",
                               "setMinutes",
                               "setUTCMilliseconds",
                               "setFullYear",
                               "getUTCMinutes",
                               "getUTCFullYear",
                               "getUTCDay",
                               "getMilliseconds",
                               "toTimeString",
                               "toISOString",
                               "getMinutes",
                               "toDateString",
                               "getFullYear",
                               "getDay",
                               "getUTCMilliseconds",
                               "test",
                               "exec",
                               "prototype",
                               "call",
                               "apply",
                               "bind",
                               "bytesFrom",
                               "fromCharCode",
                               "fromCodePoint",
                               "padStart",
                               "concat",
                               "toUTF8",
                               "codePointAt",
                               "indexOf",
                               "repeat",
                               "substring",
                               "substr",
                               "startsWith",
                               "slice",
                               "charCodeAt",
                               "match",
                               "toBytes",
                               "trim",
                               "split",
                               "charAt",
                               "lastIndexOf",
                               "toUpperCase",
                               "toLowerCase",
                               "replace",
                               "fromBytes",
                               "includes",
                               "endsWith",
                               "search",
                               "fromUTF8",
                               "padEnd",
                               "parseFloat",
                               "parseInt",
                               "isFinite",
                               "isSafeInteger",
                               "isInteger",
                               "isNaN",
                               "isArray",
                               "of",
                               "find",
                               "forEach",
                               "some",
                               "shift",
                               "splice",
                               "reverse",
                               "filter",
                               "reduce",
                               "reduceRight",
                               "join",
                               "every",
                               "map",
                               "pop",
                               "fill",
                               "push",
                               "unshift",
                               "findIndex",
                               "sort",
                               "create",
                               "keys",
                               "defineProperties",
                               "getOwnPropertyDescriptor",
                               "preventExtensions",
                               "getOwnPropertyDescriptors",
                               "getPrototypeOf",
                               "isFrozen",
                               "isSealed",
                               "getOwnPropertyNames",
                               "entries",
                               "defineProperty",
                               "isExtensible",
                               "values",
                               "freeze",
                               "seal",
                               "constructor",
                               "hasOwnProperty",
                               "propertyIsEnumerable",
                               "isPrototypeOf"};
const std::string variables[] = {"E",
                                 "SQRT2",
                                 "__proto__",
                                 "LN2",
                                 "LOG10E",
                                 "LN10",
                                 "LOG2E",
                                 "PI",
                                 "SQRT1_2",
                                 "version",
                                 "NaN",
                                 "Infinity",
                                 "undefined",
                                 "name",
                                 "length",
                                 "prototype",
                                 "message",
                                 "lastIndex",
                                 "global",
                                 "ignoreCase",
                                 "multiline",
                                 "source",
                                 "POSITIVE_INFINITY",
                                 "MAX_VALUE",
                                 "MAX_SAFE_INTEGER",
                                 "EPSILON",
                                 "MIN_SAFE_INTEGER",
                                 "MIN_VALUE",
                                 "NEGATIVE_INFINITY",
                                 "this",
                                 "njs",
                                 "Math",
                                 "JSON"};
};  // namespace builtins

#endif  // ifndef BUILTINS_H_