

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMAADDOBJECTSOPERATION_H
        #define RECMAADDOBJECTSOPERATION_H

        #include <ecmaapi_global.h>

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RAddObjectsOperation.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaAddObjectsOperation {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getROperation(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        addObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        apply
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPreviewCounter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLimitPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RAddObjectsOperation* getSelf(const QString& fName, QScriptContext* context)
    ;static RAddObjectsOperation* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    