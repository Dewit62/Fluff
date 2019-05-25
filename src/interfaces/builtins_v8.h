#ifndef BUILTINS_H_
#define BUILTINS_H_
#include <string>

namespace builtins {

const std::string variables[] = {
    "NaN",       "undefined", "JSON",       "Math",        "console",
    "Intl",      "Reflect",   "testRunner", "Realm",       "performance",
    "os",        "Atomics",   "globalThis", "WebAssembly", "arguments",
    "variables", "functions", "methods",    "top",         "__proto__",
    "E",         "LN10",      "LN2",        "LOG10E",      "LOG2E",
    "PI",        "SQRT1_2",   "SQRT2",      "shared",      "length",
};

const std::string functions[] = {
    "Object",
    "Function",
    "Array",
    "Number",
    "parseFloat",
    "parseInt",
    "Boolean",
    "String",
    "Symbol",
    "Date",
    "Promise",
    "RegExp",
    "Error",
    "EvalError",
    "RangeError",
    "ReferenceError",
    "SyntaxError",
    "TypeError",
    "URIError",
    "ArrayBuffer",
    "Uint8Array",
    "Int8Array",
    "Uint16Array",
    "Int16Array",
    "Uint32Array",
    "Int32Array",
    "Float32Array",
    "Float64Array",
    "Uint8ClampedArray",
    "BigUint64Array",
    "BigInt64Array",
    "DataView",
    "Map",
    "BigInt",
    "Set",
    "WeakMap",
    "WeakSet",
    "Proxy",
    "decodeURI",
    "decodeURIComponent",
    "encodeURI",
    "encodeURIComponent",
    "escape",
    "unescape",
    "eval",
    "isFinite",
    "isNaN",
    "print",
    "printErr",
    "write",
    "read",
    "readbuffer",
    "readline",
    "load",
    "setTimeout",
    "quit",
    "version",
    "Worker",
    "SharedArrayBuffer",
    "extractBuiltins",
};

const std::string methods[] = {
    "parse",
    "stringify",
    "constructor",
    "__defineGetter__",
    "__defineSetter__",
    "hasOwnProperty",
    "__lookupGetter__",
    "__lookupSetter__",
    "isPrototypeOf",
    "propertyIsEnumerable",
    "toString",
    "valueOf",
    "toLocaleString",
    "abs",
    "acos",
    "acosh",
    "asin",
    "asinh",
    "atan",
    "atanh",
    "atan2",
    "ceil",
    "cbrt",
    "expm1",
    "clz32",
    "cos",
    "cosh",
    "exp",
    "floor",
    "fround",
    "hypot",
    "imul",
    "log",
    "log1p",
    "log2",
    "log10",
    "max",
    "min",
    "pow",
    "random",
    "round",
    "sign",
    "sin",
    "sinh",
    "sqrt",
    "tan",
    "tanh",
    "trunc",
    "debug",
    "error",
    "info",
    "warn",
    "dir",
    "dirxml",
    "table",
    "trace",
    "group",
    "groupCollapsed",
    "groupEnd",
    "clear",
    "count",
    "countReset",
    "assert",
    "profile",
    "profileEnd",
    "time",
    "timeLog",
    "timeEnd",
    "timeStamp",
    "context",
    "getCanonicalLocales",
    "DateTimeFormat",
    "NumberFormat",
    "Collator",
    "v8BreakIterator",
    "PluralRules",
    "RelativeTimeFormat",
    "ListFormat",
    "Locale",
    "defineProperty",
    "deleteProperty",
    "apply",
    "construct",
    "get",
    "getOwnPropertyDescriptor",
    "getPrototypeOf",
    "has",
    "isExtensible",
    "ownKeys",
    "preventExtensions",
    "set",
    "setPrototypeOf",
    "notifyDone",
    "waitUntilDone",
    "quit",
    "current",
    "owner",
    "global",
    "create",
    "createAllowCrossRealmAccess",
    "navigate",
    "detachGlobal",
    "dispose",
    "switch",
    "eval",
    "now",
    "chdir",
    "setenv",
    "unsetenv",
    "umask",
    "mkdirp",
    "rmdir",
    "load",
    "store",
    "add",
    "sub",
    "and",
    "or",
    "xor",
    "exchange",
    "compareExchange",
    "isLockFree",
    "wait",
    "wake",
    "notify",
    "compile",
    "validate",
    "instantiate",
    "Module",
    "Instance",
    "Table",
    "Memory",
    "Global",
    "CompileError",
    "LinkError",
    "RuntimeError",
    "concat",
    "copyWithin",
    "fill",
    "find",
    "findIndex",
    "lastIndexOf",
    "pop",
    "push",
    "reverse",
    "shift",
    "unshift",
    "slice",
    "sort",
    "splice",
    "includes",
    "indexOf",
    "join",
    "keys",
    "entries",
    "values",
    "forEach",
    "filter",
    "flat",
    "flatMap",
    "map",
    "every",
    "some",
    "reduce",
    "reduceRight",
    "delete",
};

}  // namespace builtins

#endif  // ifndef BUILTINS_H_
