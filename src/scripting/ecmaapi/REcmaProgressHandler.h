

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMAPROGRESSHANDLER_H
        #define RECMAPROGRESSHANDLER_H

        #include <ecmaapi_global.h>

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RProgressHandler.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaProgressHandler {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        setProgress
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProgressEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProgressText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProgressEnabled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RProgressHandler* getSelf(const QString& fName, QScriptContext* context)
    ;static RProgressHandler* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    