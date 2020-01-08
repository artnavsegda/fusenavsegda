// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Binding.h>
#include <Fuse.DeferredManager.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.IArray.h>
#include <Fuse.Internal.ObjectList-1.Equality.h>
#include <Fuse.Internal.ObjectList-1.h>
#include <Fuse.IObject.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Json.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Marshal.h>
#include <Fuse.MarshalException.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.Node.ContextDataResult.h>
#include <Fuse.Node.DataType.h>
#include <Fuse.Node.h>
#include <Fuse.Node.NodeDataSubscription.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.CapsObject.h>
#include <Fuse.Reactive.CapsObject.PropertySubscription.h>
#include <Fuse.Reactive.ComputeExpression.Flags.h>
#include <Fuse.Reactive.ComputeExpression.h>
#include <Fuse.Reactive.ComputeExpression.Subscription.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.DataFunction.h>
#include <Fuse.Reactive.DataFunction.Subscription.h>
#include <Fuse.Reactive.DataSubscription.h>
#include <Fuse.Reactive.DataToResource.DataToResourceSubscription.h>
#include <Fuse.Reactive.DataToResource.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.DeviceCaps.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.EventRecord.h>
#include <Fuse.Reactive.Expression.Argument.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.ExpressionBinding.h>
#include <Fuse.Reactive.ExpressionListener.h>
#include <Fuse.Reactive.ExpressionSubscriber.Flags.h>
#include <Fuse.Reactive.ExpressionSubscriber.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IEventHandler.h>
#include <Fuse.Reactive.IEventRecord.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Fuse.Reactive.InnerListener.ObservableSubscription.h>
#include <Fuse.Reactive.InstanceDefaults.h>
#include <Fuse.Reactive.InstanceDefer.h>
#include <Fuse.Reactive.InstanceIdentity.h>
#include <Fuse.Reactive.InstanceReuse.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.Instantiator.NoContextItem.h>
#include <Fuse.Reactive.InstantiatorFunction.h>
#include <Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription.h>
#include <Fuse.Reactive.Internal.PatchAlgorithm.h>
#include <Fuse.Reactive.Internal.PatchItem.h>
#include <Fuse.Reactive.Internal.PatchList.h>
#include <Fuse.Reactive.Internal.PatchOp.h>
#include <Fuse.Reactive.IObservable.h>
#include <Fuse.Reactive.IObservableArray.h>
#include <Fuse.Reactive.IObservableObject.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.IPropertyObserver.h>
#include <Fuse.Reactive.IPropertySubscription.h>
#include <Fuse.Reactive.IsAndroidFunction.h>
#include <Fuse.Reactive.IsDefined.h>
#include <Fuse.Reactive.IsDesktopFunction.h>
#include <Fuse.Reactive.IsIOSFunction.h>
#include <Fuse.Reactive.IsMobileFunction.h>
#include <Fuse.Reactive.IsOSXFunction.h>
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Reactive.IsWindowsFunction.h>
#include <Fuse.Reactive.ItemsWindowList-1.h>
#include <Fuse.Reactive.ItemsWindowList-1.IListener.h>
#include <Fuse.Reactive.IWriteable.h>
#include <Fuse.Reactive.JavaScript.Dependency.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.LookUp.h>
#include <Fuse.Reactive.LookUp.LookUpSubscription.h>
#include <Fuse.Reactive.Member.h>
#include <Fuse.Reactive.Member.Subscription.h>
#include <Fuse.Reactive.NodeExpressionBinding.h>
#include <Fuse.Reactive.NonNull.h>
#include <Fuse.Reactive.NullCoalesce.h>
#include <Fuse.Reactive.ObserverMap-1.h>
#include <Fuse.Reactive.Parameter.h>
#include <Fuse.Reactive.Parameter.Subscription.h>
#include <Fuse.Reactive.PlatformFunction.h>
#include <Fuse.Reactive.PlatformFunction.Subscription.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.Property.Subscription.h>
#include <Fuse.Reactive.QuaternaryOperator.h>
#include <Fuse.Reactive.Resource.h>
#include <Fuse.Reactive.ResourceSubscription.h>
#include <Fuse.Reactive.SimpleVarArgFunction.h>
#include <Fuse.Reactive.SimpleVarArgFunction.SimpleSubscription.h>
#include <Fuse.Reactive.Snapshot.h>
#include <Fuse.Reactive.Snapshot.Subscription.h>
#include <Fuse.Reactive.TemplateMatch.h>
#include <Fuse.Reactive.TernaryOperator.h>
#include <Fuse.Reactive.UnaryOperator.h>
#include <Fuse.Reactive.UnmappedView-1.h>
#include <Fuse.Reactive.ValueForwarder.h>
#include <Fuse.Reactive.ValueForwarder.IValueListener.h>
#include <Fuse.Reactive.ValueObserver.h>
#include <Fuse.Reactive.VarArgFunction.h>
#include <Fuse.Reactive.VarArgFunction.Subscription.h>
#include <Fuse.Reactive.WindowCaps.h>
#include <Fuse.Reactive.WindowFunction.h>
#include <Fuse.Reactive.WindowFunction.Subscription.h>
#include <Fuse.Reactive.WindowItem.h>
#include <Fuse.Reactive.WindowList-1.h>
#include <Fuse.Reactive.WindowListItem.h>
#include <Fuse.Reactive.WindowListItem.IDataWatcher.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scripting.AppInitialized.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.IThreadWorker.h>
#include <Fuse.Scripting.JavaScript.ModuleInstance.h>
#include <Fuse.Scripting.JavaScript.RootableScriptModule.h>
#include <Fuse.Scripting.JavaScript.ThreadWorker.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.ValueMirror.h>
#include <Fuse.Triggers.BusyTask.h>
#include <Fuse.Triggers.BusyTaskActivity.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.KeyCollection.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.RootableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int3.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[96];
static uType* TYPES[47];

namespace g{
namespace Fuse{
namespace Reactive{

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Expression.uno
// ---------------------------------------------------------------------------------

// public sealed class Expression.Argument :14
// {
static void Expression__Argument_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(Expression__Argument, Source), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(Expression__Argument, Subscription), 0,
        ::g::Uno::Bool_typeof(), offsetof(Expression__Argument, _HasValue), 0,
        uObject_typeof(), offsetof(Expression__Argument, _Value), 0);
}

uType* Expression__Argument_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Expression__Argument);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Expression.Argument", options);
    type->fp_build_ = Expression__Argument_build;
    type->fp_ctor_ = (void*)Expression__Argument__New1_fn;
    return type;
}

// public generated Argument() :14
void Expression__Argument__ctor__fn(Expression__Argument* __this)
{
    __this->ctor_();
}

// internal void Dispose() :27
void Expression__Argument__Dispose_fn(Expression__Argument* __this)
{
    __this->Dispose();
}

// public generated bool get_HasValue() :25
void Expression__Argument__get_HasValue_fn(Expression__Argument* __this, bool* __retval)
{
    *__retval = __this->HasValue();
}

// internal generated void set_HasValue(bool value) :25
void Expression__Argument__set_HasValue_fn(Expression__Argument* __this, bool* value)
{
    __this->HasValue(*value);
}

// public generated Argument New() :14
void Expression__Argument__New1_fn(Expression__Argument** __retval)
{
    *__retval = Expression__Argument::New1();
}

// public generated object get_Value() :20
void Expression__Argument__get_Value_fn(Expression__Argument* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// internal generated void set_Value(object value) :20
void Expression__Argument__set_Value_fn(Expression__Argument* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Argument() [instance] :14
void Expression__Argument::ctor_()
{
}

// internal void Dispose() [instance] :27
void Expression__Argument::Dispose()
{
    if (Subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(Subscription), ::TYPES[0/*Uno.IDisposable*/]));
        Subscription = NULL;
    }

    Value(NULL);
    HasValue(false);
}

// public generated bool get_HasValue() [instance] :25
bool Expression__Argument::HasValue()
{
    return _HasValue;
}

// internal generated void set_HasValue(bool value) [instance] :25
void Expression__Argument::HasValue(bool value)
{
    _HasValue = value;
}

// public generated object get_Value() [instance] :20
uObject* Expression__Argument::Value()
{
    return _Value;
}

// internal generated void set_Value(object value) [instance] :20
void Expression__Argument::Value(uObject* value)
{
    _Value = value;
}

// public generated Argument New() [static] :14
Expression__Argument* Expression__Argument::New1()
{
    Expression__Argument* obj1 = (Expression__Argument*)uNew(Expression__Argument_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/BinaryOperator.uno
// -------------------------------------------------------------------------------------

// public abstract class BinaryOperator :8
// {
static void BinaryOperator_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" No `TryCompute`, or a deprecated form, overriden. Migrate your code to override the one with `bool` return. ");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/BinaryOperator.uno");
    ::STRINGS[2] = uString::Const("TryCompute");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ComputeExpression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::ComputeExpression_type, interface1));
    type->SetFields(5);
}

::g::Fuse::Reactive::ComputeExpression_type* BinaryOperator_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ComputeExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ComputeExpression_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(BinaryOperator);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ComputeExpression_type);
    type = (::g::Fuse::Reactive::ComputeExpression_type*)uClassType::New("Fuse.Reactive.BinaryOperator", options);
    type->fp_build_ = BinaryOperator_build;
    type->fp_GetFlags = (void(*)(::g::Fuse::Reactive::ComputeExpression*, int32_t*))BinaryOperator__GetFlags_fn;
    type->fp_TryCompute = (void(*)(::g::Fuse::Reactive::ComputeExpression*, uArray*, uObject**, bool*))BinaryOperator__TryCompute_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ComputeExpression__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected object Compute(object left, object right) :41
void BinaryOperator__Compute_fn(BinaryOperator* __this, uObject* left, uObject* right, uObject** __retval)
{
    *__retval = __this->Compute(left, right);
}

// internal override sealed Fuse.Reactive.ComputeExpression.Flags GetFlags() :23
void BinaryOperator__GetFlags_fn(BinaryOperator* __this, int32_t* __retval)
{
    return *__retval = (0 | (__this->IsLeftOptional() ? 1 : 0)) | (__this->IsRightOptional() ? 2 : 0), void();
}

// protected bool get_IsLeftOptional() :30
void BinaryOperator__get_IsLeftOptional_fn(BinaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsLeftOptional();
}

// protected bool get_IsRightOptional() :31
void BinaryOperator__get_IsRightOptional_fn(BinaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsRightOptional();
}

// protected override sealed bool TryCompute(Fuse.Reactive.Expression.Argument[] args, object& result) :43
void BinaryOperator__TryCompute_fn(BinaryOperator* __this, uArray* args, uObject** result, bool* __retval)
{
    return *__retval = __this->TryCompute1(uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->Value(), uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(1))->Value(), result), void();
}

// protected bool TryCompute(object left, object right, object& result) :33
void BinaryOperator__TryCompute1_fn(BinaryOperator* __this, uObject* left, uObject* right, uObject** result, bool* __retval)
{
    *__retval = __this->TryCompute1(left, right, result);
}

// protected object Compute(object left, object right) [instance] :41
uObject* BinaryOperator::Compute(uObject* left, uObject* right)
{
    return NULL;
}

// protected bool get_IsLeftOptional() [instance] :30
bool BinaryOperator::IsLeftOptional()
{
    return false;
}

// protected bool get_IsRightOptional() [instance] :31
bool BinaryOperator::IsRightOptional()
{
    return false;
}

// protected bool TryCompute(object left, object right, object& result) [instance] :33
bool BinaryOperator::TryCompute1(uObject* left, uObject* right, uObject** result)
{
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[0/*" No `TryCom...*/], this, ::STRINGS[1/*"/usr/local/...*/], 35, ::STRINGS[2/*"TryCompute"*/]);
    *result = Compute(left, right);
    return true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/DataBinding.uno
// -------------------------------------------------------------------------------

// public enum BindingMode :8
uEnumType* BindingMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.BindingMode", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Read", 1LL,
        "Write", 2LL,
        "Clear", 4LL,
        "ReadClear", 5LL,
        "WriteClear", 6LL,
        "ReadWriteClear", 7LL,
        "ReadWrite", 3LL,
        "Default", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Device.uno
// -----------------------------------------------------------------------------

// public class CapsObject :7
// {
static void CapsObject_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObservableObject_typeof(), offsetof(CapsObject_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(CapsObject_type, interface1),
        ::g::Fuse::IObject_typeof(), offsetof(CapsObject_type, interface2));
    type->SetFields(1,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), offsetof(CapsObject, _props), 0);
}

CapsObject_type* CapsObject_typeof()
{
    static uSStrong<CapsObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(CapsObject);
    options.TypeSize = sizeof(CapsObject_type);
    type = (CapsObject_type*)uClassType::New("Fuse.Reactive.CapsObject", options);
    type->fp_build_ = CapsObject_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))CapsObject__FuseReactiveIObservableObjectSubscribe_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))CapsObject__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface2.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))CapsObject__ContainsKey_fn;
    type->interface2.fp_get_Item = (void(*)(uObject*, uString*, uObject**))CapsObject__get_Item_fn;
    type->interface2.fp_get_Keys = (void(*)(uObject*, uArray**))CapsObject__get_Keys_fn;
    return type;
}

// internal CapsObject() :12
void CapsObject__ctor_1_fn(CapsObject* __this)
{
    __this->ctor_1();
}

// protected void ChangeProperty(Uno.UX.Selector name, object value) :43
void CapsObject__ChangeProperty_fn(CapsObject* __this, ::g::Uno::UX::Selector* name, uObject* value)
{
    __this->ChangeProperty(*name, value);
}

// public bool ContainsKey(string key) :14
void CapsObject__ContainsKey_fn(CapsObject* __this, uString* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// private Fuse.Reactive.IPropertySubscription Fuse.Reactive.IObservableObject.Subscribe(Fuse.Reactive.IPropertyObserver observer) :36
void CapsObject__FuseReactiveIObservableObjectSubscribe_fn(CapsObject* __this, uObject* observer, uObject** __retval)
{
    CapsObject__PropertySubscription* sub = CapsObject__PropertySubscription::New1(__this, observer);
    __this->AddPropertyListener((uObject*)sub);
    return *__retval = (uObject*)sub, void();
}

// private object GetValue(string key) :23
void CapsObject__GetValue_fn(CapsObject* __this, uString* key, uObject** __retval)
{
    *__retval = __this->GetValue(key);
}

// public object get_Item(string key) :21
void CapsObject__get_Item_fn(CapsObject* __this, uString* key, uObject** __retval)
{
    *__retval = __this->Item(key);
}

// public string[] get_Keys() :33
void CapsObject__get_Keys_fn(CapsObject* __this, uArray** __retval)
{
    *__retval = __this->Keys();
}

// protected Uno.Collections.Dictionary<string, object> get_Props() :10
void CapsObject__get_Props_fn(CapsObject* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->Props();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector name) :49
void CapsObject__UnoUXIPropertyListenerOnPropertyChanged_fn(CapsObject* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* name)
{
}

// internal CapsObject() [instance] :12
void CapsObject::ctor_1()
{
    _props = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[29/*Uno.Collections.Dictionary<string, object>*/]));
    ctor_();
}

// protected void ChangeProperty(Uno.UX.Selector name, object value) [instance] :43
void CapsObject::ChangeProperty(::g::Uno::UX::Selector name, uObject* value)
{
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_props), ::g::Uno::UX::Selector__op_Implicit1(name), value);
    OnPropertyChanged1(name, (uObject*)this);
}

// public bool ContainsKey(string key) [instance] :14
bool CapsObject::ContainsKey(uString* key)
{
    bool ret2;
    return (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_props), key, &ret2), ret2);
}

// private object GetValue(string key) [instance] :23
uObject* CapsObject::GetValue(uString* key)
{
    bool ret3;
    uObject* value;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_props), key, (void**)(&value), &ret3), ret3))
        return value;

    return NULL;
}

// public object get_Item(string key) [instance] :21
uObject* CapsObject::Item(uString* key)
{
    return GetValue(key);
}

// public string[] get_Keys() [instance] :33
uArray* CapsObject::Keys()
{
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(6/*ToArray<string>*/, ::TYPES[5/*string*/], NULL), (uObject*)((::g::Uno::Collections::Dictionary__KeyCollection*)uPtr(_props)->Keys()));
}

// protected Uno.Collections.Dictionary<string, object> get_Props() [instance] :10
::g::Uno::Collections::Dictionary* CapsObject::Props()
{
    return _props;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/ExpressionListener.uno
// -----------------------------------------------------------------------------------------

// public abstract class ComputeExpression :223
// {
static void ComputeExpression_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(ComputeExpression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(ComputeExpression_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::Expression_typeof()->Array(), offsetof(ComputeExpression, _args), 0,
        ComputeExpression__Flags_typeof(), offsetof(ComputeExpression, _flags), 0,
        ::g::Uno::String_typeof(), offsetof(ComputeExpression, _name), 0);
}

ComputeExpression_type* ComputeExpression_typeof()
{
    static uSStrong<ComputeExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ComputeExpression);
    options.TypeSize = sizeof(ComputeExpression_type);
    type = (ComputeExpression_type*)uClassType::New("Fuse.Reactive.ComputeExpression", options);
    type->fp_build_ = ComputeExpression_build;
    type->fp_GetFlags = ComputeExpression__GetFlags_fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))ComputeExpression__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ComputeExpression__ToString_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))ComputeExpression__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// private Fuse.Reactive.ExpressionSubscriber.Flags get_EffectiveFlags() :299
void ComputeExpression__get_EffectiveFlags_fn(ComputeExpression* __this, int32_t* __retval)
{
    *__retval = __this->EffectiveFlags();
}

// internal virtual Fuse.Reactive.ComputeExpression.Flags GetFlags() :313
void ComputeExpression__GetFlags_fn(ComputeExpression* __this, int32_t* __retval)
{
    return *__retval = __this->_flags, void();
}

// protected string get_Name() :277
void ComputeExpression__get_Name_fn(ComputeExpression* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :322
void ComputeExpression__Subscribe_fn(ComputeExpression* __this, uObject* context, uObject* listener, uObject** __retval)
{
    ComputeExpression__Subscription* sub = ComputeExpression__Subscription::New1(__this, listener);
    sub->Init(context);
    return *__retval = (uObject*)sub, void();
}

// public override sealed string ToString() :284
void ComputeExpression__ToString_fn(ComputeExpression* __this, uString** __retval)
{
    uString* r = ::g::Uno::String::op_Addition2(__this->Name(), uString::Const("("));

    for (int32_t i = 0; i < uPtr(__this->_args)->Length(); ++i)
    {
        if (i > 0)
            r = ::g::Uno::String::op_Addition2(r, uString::Const(", "));

        r = ::g::Uno::String::op_Addition1(r, uPtr(__this->_args)->Strong< ::g::Fuse::Reactive::Expression*>(i));
    }

    r = ::g::Uno::String::op_Addition2(r, uString::Const(")"));
    return *__retval = r, void();
}

// private Fuse.Reactive.ExpressionSubscriber.Flags get_EffectiveFlags() [instance] :299
int32_t ComputeExpression::EffectiveFlags()
{
    int32_t flags = ((_flags & 1024) == 1024) ? GetFlags() : _flags;
    return ((((0 | (((flags & 1) == 1) ? 1 : 0)) | (((flags & 2) == 2) ? 2 : 0)) | (((flags & 4) == 4) ? 4 : 0)) | (((flags & 8) == 8) ? 8 : 0)) | (((flags & 16) == 16) ? 1024 : 0);
}

// protected string get_Name() [instance] :277
uString* ComputeExpression::Name()
{
    return _name;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/FuseJS/DebugLog.uno
// --------------------------------------------------------------------------------------

// internal static class Console :24
// {
static void Console_build(uType* type)
{
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/FuseJS/DebugLog.uno");
    ::STRINGS[4] = uString::Const("null");
    ::STRINGS[5] = uString::Const("\"");
    ::STRINGS[6] = uString::Const("function");
    ::STRINGS[7] = uString::Const("Object");
    ::STRINGS[8] = uString::Const("");
    ::STRINGS[9] = uString::Const(": ");
    ::STRINGS[10] = uString::Const("Array[");
    ::STRINGS[11] = uString::Const("]");
    ::STRINGS[12] = uString::Const(" ");
    ::STRINGS[13] = uString::Const("  ");
    ::STRINGS[14] = uString::Const("log");
    ::STRINGS[15] = uString::Const("warn");
    ::STRINGS[16] = uString::Const("info");
    ::STRINGS[17] = uString::Const("error");
    ::STRINGS[18] = uString::Const("dir");
    ::STRINGS[19] = uString::Const("console");
    ::STRINGS[20] = uString::Const("fuse-builtins");
    ::STRINGS[21] = uString::Const("(function(obj) {\tif (obj instanceof Error) return obj.stack;\treturn '' + obj;})");
    ::TYPES[1] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Uno::Float_typeof();
    ::TYPES[3] = ::g::Uno::Double_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Uno::String_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[7] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[10] = uObject_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(0,
        ::TYPES[6/*Fuse.Scripting.Function*/], (uintptr_t)&Console::_toStringFunction_, uFieldFlagsStatic);
}

uClassType* Console_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Console", options);
    type->fp_build_ = Console_build;
    return type;
}

// private static object Dir(Fuse.Scripting.Context context, object[] args) :96
void Console__Dir_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Console::Dir(context, args);
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) :108
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int32_t* maxDepth, int32_t* indent)
{
    Console::Dir1(builder, obj, *maxDepth, *indent);
}

// private static object Error(Fuse.Scripting.Context context, object[] args) :60
void Console__Error_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Console::Error(context, args);
}

// private static string Format(Fuse.Scripting.Context context, object[] args) :65
void Console__Format_fn(::g::Fuse::Scripting::Context* context, uArray* args, uString** __retval)
{
    *__retval = Console::Format(context, args);
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) :177
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int32_t* indent)
{
    Console::Indent(builder, *indent);
}

// private static object Info(Fuse.Scripting.Context context, object[] args) :55
void Console__Info_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Console::Info(context, args);
}

// public static void Init(Fuse.Scripting.Context c) :26
void Console__Init_fn(::g::Fuse::Scripting::Context* c)
{
    Console::Init(c);
}

// private static object Log(Fuse.Scripting.Context context, object[] args) :45
void Console__Log_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Console::Log(context, args);
}

// private static object LogInternal(Fuse.Scripting.Context context, object[] args, Uno.Diagnostics.DebugMessageType debugMessageType) :38
void Console__LogInternal_fn(::g::Fuse::Scripting::Context* context, uArray* args, int32_t* debugMessageType, uObject** __retval)
{
    *__retval = Console::LogInternal(context, args, *debugMessageType);
}

// private static string ToString(Fuse.Scripting.Context context, object obj) :81
void Console__ToString_fn(::g::Fuse::Scripting::Context* context, uObject* obj, uString** __retval)
{
    *__retval = Console::ToString(context, obj);
}

// private static object Warn(Fuse.Scripting.Context context, object[] args) :50
void Console__Warn_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Console::Warn(context, args);
}

uSStrong< ::g::Fuse::Scripting::Function*> Console::_toStringFunction_;

// private static object Dir(Fuse.Scripting.Context context, object[] args) [static] :96
uObject* Console::Dir(::g::Fuse::Scripting::Context* context, uArray* args)
{
    int32_t maxDepth = 1;
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();

    for (int32_t i = 0; i < uPtr(args)->Length(); i++)
        Console::Dir1(builder, uPtr(args)->Strong<uObject*>(i), 1, 0);

    ::g::Uno::Diagnostics::Debug::Log3(builder->ToString(), 0, ::STRINGS[3/*"/usr/local/...*/], 104);
    return NULL;
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) [static] :108
void Console::Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int32_t maxDepth, int32_t indent)
{
    uArray* array1;
    int32_t index2;
    int32_t length3;
    indent++;

    if (obj == NULL)
    {
        uPtr(builder)->AppendLine(::STRINGS[4/*"null"*/]);
        return;
    }

    if ((uIs(obj, ::TYPES[1/*int*/]) || uIs(obj, ::TYPES[2/*float*/])) || uIs(obj, ::TYPES[3/*double*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
        return;
    }

    if (uIs(obj, ::TYPES[4/*bool*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::ToLower(uPtr(::g::Uno::Object::ToString(uPtr(obj)))));
        return;
    }

    if (uIs(obj, ::TYPES[5/*string*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[5/*"\""*/], ::g::Uno::Object::ToString(uPtr(obj))), ::STRINGS[5/*"\""*/]));
        return;
    }

    if (uIs(obj, ::TYPES[6/*Fuse.Scripting.Function*/]))
    {
        uPtr(builder)->AppendLine(::STRINGS[6/*"function"*/]);
        return;
    }

    if (uIs(obj, ::TYPES[7/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* o = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[7/*Fuse.Scripting.Object*/]);
        uPtr(builder)->AppendLine(::STRINGS[7/*"Object"*/]);

        if (indent <= maxDepth)

            for (array1 = uPtr(o)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[8/*""*/], k), ::STRINGS[9/*": "*/]));
                Console::Dir1(builder, uPtr(o)->Item(k), maxDepth, indent);
            }

        return;
    }

    if (uIs(obj, ::TYPES[8/*Fuse.Scripting.Array*/]))
    {
        ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[8/*Fuse.Scripting.Array*/]);
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[10/*"Array["*/], uBox<int32_t>(::TYPES[1/*int*/], uPtr(a)->Length())), ::STRINGS[11/*"]"*/]));

        if (indent <= maxDepth)

            for (int32_t i = 0; i < uPtr(a)->Length(); i++)
            {
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[8/*""*/], uBox<int32_t>(::TYPES[1/*int*/], i)), ::STRINGS[9/*": "*/]));
                Console::Dir1(builder, uPtr(a)->Item(i), maxDepth, indent);
            }

        return;
    }

    uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
}

// private static object Error(Fuse.Scripting.Context context, object[] args) [static] :60
uObject* Console::Error(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return Console::LogInternal(context, args, 3);
}

// private static string Format(Fuse.Scripting.Context context, object[] args) [static] :65
uString* Console::Format(::g::Fuse::Scripting::Context* context, uArray* args)
{
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();

    for (int32_t i = 0; i < uPtr(args)->Length(); ++i)
    {
        if (i != 0)
            uPtr(sb)->Append2(::STRINGS[12/*" "*/]);

        uPtr(sb)->Append2(Console::ToString(context, uPtr(args)->Strong<uObject*>(i)));
    }

    return sb->ToString();
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) [static] :177
void Console::Indent(::g::Uno::Text::StringBuilder* builder, int32_t indent)
{
    for (int32_t i = 0; i < indent; i++)
        uPtr(builder)->Append2(::STRINGS[13/*"  "*/]);
}

// private static object Info(Fuse.Scripting.Context context, object[] args) [static] :55
uObject* Console::Info(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return Console::LogInternal(context, args, 1);
}

// public static void Init(Fuse.Scripting.Context c) [static] :26
void Console::Init(::g::Fuse::Scripting::Context* c)
{
    ::g::Fuse::Scripting::Object* console = uPtr(c)->NewObject();
    uPtr(console)->Item(::STRINGS[14/*"log"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.Callback*/], (void*)Console__Log_fn));
    console->Item(::STRINGS[15/*"warn"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.Callback*/], (void*)Console__Warn_fn));
    console->Item(::STRINGS[16/*"info"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.Callback*/], (void*)Console__Info_fn));
    console->Item(::STRINGS[17/*"error"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.Callback*/], (void*)Console__Error_fn));
    console->Item(::STRINGS[18/*"dir"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.Callback*/], (void*)Console__Dir_fn));
    uPtr(c->GlobalObject())->Item(::STRINGS[19/*"console"*/], console);
}

// private static object Log(Fuse.Scripting.Context context, object[] args) [static] :45
uObject* Console::Log(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return Console::LogInternal(context, args, 0);
}

// private static object LogInternal(Fuse.Scripting.Context context, object[] args, Uno.Diagnostics.DebugMessageType debugMessageType) [static] :38
uObject* Console::LogInternal(::g::Fuse::Scripting::Context* context, uArray* args, int32_t debugMessageType)
{
    uString* formatted = Console::Format(context, args);
    ::g::Uno::Diagnostics::Debug::Log2(formatted, debugMessageType);
    return NULL;
}

// private static string ToString(Fuse.Scripting.Context context, object obj) [static] :81
uString* Console::ToString(::g::Fuse::Scripting::Context* context, uObject* obj)
{
    if (Console::_toStringFunction_ == NULL)
        Console::_toStringFunction_ = uCast< ::g::Fuse::Scripting::Function*>(uPtr(context)->Evaluate(::STRINGS[20/*"fuse-builtins"*/], ::STRINGS[21/*"(function(o...*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);

    return ::g::Uno::Object::ToString(uPtr(uPtr(Console::_toStringFunction_)->Call(context, uArray::Init<uObject*>(::TYPES[10/*object[]*/], 1, obj))));
}

// private static object Warn(Fuse.Scripting.Context context, object[] args) [static] :50
uObject* Console::Warn(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return Console::LogInternal(context, args, 2);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Expression.uno
// ---------------------------------------------------------------------------------

// public sealed class Constant :61
// {
static void Constant_build(uType* type)
{
    ::STRINGS[22] = uString::Const("'");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ConstantExpression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::ConstantExpression_type, interface1));
    type->SetFields(2,
        uObject_typeof(), offsetof(Constant, _Value), 0);
}

::g::Fuse::Reactive::ConstantExpression_type* Constant_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ConstantExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ConstantExpression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Constant);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ConstantExpression_type);
    type = (::g::Fuse::Reactive::ConstantExpression_type*)uClassType::New("Fuse.Reactive.Constant", options);
    type->fp_build_ = Constant_build;
    type->fp_GetValue = (void(*)(::g::Fuse::Reactive::ConstantExpression*, uObject*, uObject**))Constant__GetValue_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Constant__ToString_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ConstantExpression__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public Constant(object value) :65
void Constant__ctor_2_fn(Constant* __this, uObject* value)
{
    __this->ctor_2(value);
}

// public override sealed object GetValue(Fuse.Reactive.IContext context) :66
void Constant__GetValue_fn(Constant* __this, uObject* context, uObject** __retval)
{
    return *__retval = __this->Value(), void();
}

// public Constant New(object value) :65
void Constant__New1_fn(uObject* value, Constant** __retval)
{
    *__retval = Constant::New1(value);
}

// public override sealed string ToString() :68
void Constant__ToString_fn(Constant* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[22/*"'"*/], ::g::Uno::Object::ToString(uPtr(__this->Value()))), ::STRINGS[22/*"'"*/]), void();
}

// public generated object get_Value() :63
void Constant__get_Value_fn(Constant* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(object value) :63
void Constant__set_Value_fn(Constant* __this, uObject* value)
{
    __this->Value(value);
}

// public Constant(object value) [instance] :65
void Constant::ctor_2(uObject* value)
{
    ctor_1();
    Value(value);
}

// public generated object get_Value() [instance] :63
uObject* Constant::Value()
{
    return _Value;
}

// private generated void set_Value(object value) [instance] :63
void Constant::Value(uObject* value)
{
    _Value = value;
}

// public Constant New(object value) [static] :65
Constant* Constant::New1(uObject* value)
{
    Constant* obj1 = (Constant*)uNew(Constant_typeof());
    obj1->ctor_2(value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Expression.uno
// ---------------------------------------------------------------------------------

// public abstract class ConstantExpression :50
// {
static void ConstantExpression_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(ConstantExpression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(ConstantExpression_type, interface1));
    type->SetFields(2);
}

ConstantExpression_type* ConstantExpression_typeof()
{
    static uSStrong<ConstantExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ConstantExpression);
    options.TypeSize = sizeof(ConstantExpression_type);
    type = (ConstantExpression_type*)uClassType::New("Fuse.Reactive.ConstantExpression", options);
    type->fp_build_ = ConstantExpression_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))ConstantExpression__Subscribe_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))ConstantExpression__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected generated ConstantExpression() :50
void ConstantExpression__ctor_1_fn(ConstantExpression* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :54
void ConstantExpression__Subscribe_fn(ConstantExpression* __this, uObject* context, uObject* listener, uObject** __retval)
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)__this, __this->GetValue(context));
    return *__retval = NULL, void();
}

// protected generated ConstantExpression() [instance] :50
void ConstantExpression::ctor_1()
{
    ctor_();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Expression.uno
// ---------------------------------------------------------------------------------

// public sealed class Data :74
// {
static void Data_build(uType* type)
{
    ::STRINGS[23] = uString::Const("{");
    ::STRINGS[24] = uString::Const("}");
    ::TYPES[12] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(Data, _Key), 0);
}

::g::Fuse::Reactive::Expression_type* Data_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Data);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Data", options);
    type->fp_build_ = Data_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Data__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Data__ToString_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Data__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public Data(string key) :78
void Data__ctor_1_fn(Data* __this, uString* key)
{
    __this->ctor_1(key);
}

// public generated string get_Key() :76
void Data__get_Key_fn(Data* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :76
void Data__set_Key_fn(Data* __this, uString* value)
{
    __this->Key(value);
}

// public Data New(string key) :78
void Data__New1_fn(uString* key, Data** __retval)
{
    *__retval = Data::New1(key);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :80
void Data__Subscribe_fn(Data* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = ::g::Fuse::Reactive::IContext::Subscribe(uInterface(uPtr(context), ::TYPES[12/*Fuse.Reactive.IContext*/]), (uObject*)__this, __this->Key(), listener), void();
}

// public override sealed string ToString() :85
void Data__ToString_fn(Data* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[23/*"{"*/], __this->Key()), ::STRINGS[24/*"}"*/]), void();
}

// public Data(string key) [instance] :78
void Data::ctor_1(uString* key)
{
    ctor_();
    Key(key);
}

// public generated string get_Key() [instance] :76
uString* Data::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :76
void Data::Key(uString* value)
{
    _Key = value;
}

// public Data New(string key) [static] :78
Data* Data::New1(uString* key)
{
    Data* obj1 = (Data*)uNew(Data_typeof());
    obj1->ctor_1(key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/DataBinding.uno
// -------------------------------------------------------------------------------

// public sealed class DataBinding :45
// {
static void DataBinding_build(uType* type)
{
    ::STRINGS[8] = uString::Const("");
    ::STRINGS[25] = uString::Const("Cannot bind '");
    ::STRINGS[26] = uString::Const("' to property '");
    ::STRINGS[27] = uString::Const("'. The observable must contain exactly one ");
    ::STRINGS[28] = uString::Const(".");
    ::STRINGS[29] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/DataBinding.uno");
    ::STRINGS[30] = uString::Const("InvalidListOperation");
    ::STRINGS[31] = uString::Const("TryPushAsMarshalledValue");
    ::STRINGS[32] = uString::Const("number");
    ::STRINGS[33] = uString::Const("string");
    ::STRINGS[34] = uString::Const("value that can be converted to type ");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[13] = ::g::Fuse::IArray_typeof();
    ::TYPES[14] = ::g::Uno::Type_typeof();
    ::TYPES[15] = ::g::Fuse::Reactive::IObservableArray_typeof();
    ::TYPES[16] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[5] = ::g::Uno::String_typeof();
    ::TYPES[17] = ::g::Uno::Exception_typeof();
    ::TYPES[18] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[19] = ::g::Fuse::Reactive::ISubscription_typeof();
    type->SetDependencies(
        ::g::Fuse::Triggers::BusyTask_typeof(),
        ::g::Fuse::Marshal_typeof(),
        ::g::Fuse::NameRegistry_typeof(),
        ::g::Uno::Type_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(DataBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(DataBinding_type, interface1),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(DataBinding_type, interface2),
        ::g::Fuse::INameListener_typeof(), offsetof(DataBinding_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(DataBinding_type, interface4));
    type->SetFields(3,
        ::g::Fuse::Reactive::BindingMode_typeof(), offsetof(DataBinding, _mode), 0,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(DataBinding, _busyTask), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(DataBinding, _subscription), 0,
        uObject_typeof(), offsetof(DataBinding, _currentValue), 0,
        ::TYPES[5/*string*/], offsetof(DataBinding, _registryName), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(DataBinding, _Target), 0);
}

DataBinding_type* DataBinding_typeof()
{
    static uSStrong<DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionBinding_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 5;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(DataBinding);
    options.TypeSize = sizeof(DataBinding_type);
    type = (DataBinding_type*)uClassType::New("Fuse.Reactive.DataBinding", options);
    type->fp_build_ = DataBinding_build;
    type->fp_LostValue = (void(*)(::g::Fuse::Reactive::ExpressionBinding*))DataBinding__LostValue_fn;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*))DataBinding__NewValue_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnUnrooted_fn;
    type->fp_SubscribeResource = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*, uString*, uObject*, uObject**))DataBinding__SubscribeResource_fn;
    type->interface2.fp_OnClear = (void(*)(uObject*))DataBinding__FuseReactiveIObserverOnClear_fn;
    type->interface2.fp_OnSet = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface2.fp_OnAdd = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface2.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface2.fp_OnFailed = (void(*)(uObject*, uString*))DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface2.fp_OnNewAll = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface2.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))DataBinding__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface2.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface3.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))DataBinding__SubscribeResource_fn;
    return type;
}

// public DataBinding(Uno.UX.Property target, Fuse.Reactive.IExpression key, Fuse.Reactive.BindingMode mode) :53
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property* target, uObject* key, int32_t* mode)
{
    __this->ctor_2(target, key, *mode);
}

// private bool Acceptor(object obj) :309
void DataBinding__Acceptor_fn(DataBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// private void CleanSubscription() :197
void DataBinding__CleanSubscription_fn(DataBinding* __this)
{
    __this->CleanSubscription();
}

// private bool get_Clear() :69
void DataBinding__get_Clear_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Clear();
}

// private void ClearFailed() :138
void DataBinding__ClearFailed_fn(DataBinding* __this)
{
    __this->ClearFailed();
}

// private void ClearValue() :167
void DataBinding__ClearValue_fn(DataBinding* __this)
{
    __this->ClearValue();
}

// private void Fuse.INameListener.OnNameChanged(Fuse.Node obj, Uno.UX.Selector name) :172
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    __this->PushValue(__this->_currentValue);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :93
void DataBinding__FuseReactiveIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue)
{
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnClear() :71
void DataBinding__FuseReactiveIObserverOnClear_fn(DataBinding* __this)
{
    __this->ClearValue();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :103
void DataBinding__FuseReactiveIObserverOnFailed_fn(DataBinding* __this, uString* message)
{
    __this->ClearValue();
    __this->MarkFailed(message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :120
void DataBinding__FuseReactiveIObserverOnInsertAt_fn(DataBinding* __this, int32_t* index, uObject* value)
{
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :109
void DataBinding__FuseReactiveIObserverOnNewAll_fn(DataBinding* __this, uObject* values)
{
    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[13/*Fuse.IArray*/])) > 0)
        __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :98
void DataBinding__FuseReactiveIObserverOnNewAt_fn(DataBinding* __this, int32_t* index, uObject* value)
{
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :115
void DataBinding__FuseReactiveIObserverOnRemoveAt_fn(DataBinding* __this, int32_t* index)
{
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :76
void DataBinding__FuseReactiveIObserverOnSet_fn(DataBinding* __this, uObject* newValue)
{
    __this->PushValue(newValue);
}

// private void InvalidListOperation() :88
void DataBinding__InvalidListOperation_fn(DataBinding* __this)
{
    __this->InvalidListOperation();
}

// internal override sealed void LostValue() :231
void DataBinding__LostValue_fn(DataBinding* __this)
{
    __this->CleanSubscription();
    __this->ClearValue();
}

// private void MarkFailed(string message) :133
void DataBinding__MarkFailed_fn(DataBinding* __this, uString* message)
{
    __this->MarkFailed(message);
}

// public DataBinding New(Uno.UX.Property target, Fuse.Reactive.IExpression key, Fuse.Reactive.BindingMode mode) :53
void DataBinding__New1_fn(::g::Uno::UX::Property* target, uObject* key, int32_t* mode, DataBinding** __retval)
{
    *__retval = DataBinding::New1(target, key, *mode);
}

// internal override sealed void NewValue(object value) :206
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value)
{
    __this->CleanSubscription();

    if (::g::Fuse::Marshal::Is(value, uPtr(__this->Target())->PropertyType()))
        __this->PushValue(value);
    else if (::g::Fuse::Marshal::Is(value, ::TYPES[32/*Fuse.Reactive.IObservable*/]))
    {
        uObject* obs = (uObject*)value;

        if (::g::Fuse::IArray::Length(uInterface(uPtr(obs), ::TYPES[13/*Fuse.IArray*/])) > 0)
            __this->PushValue(::g::Fuse::IArray::Item(uInterface(uPtr(obs), ::TYPES[13/*Fuse.IArray*/]), 0));

        __this->_subscription = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(obs), ::TYPES[15/*Fuse.Reactive.IObservableArray*/]), (uObject*)__this);
    }
    else
        __this->PushValue(value);
}

// protected override sealed void OnRooted() :125
void DataBinding__OnRooted_fn(DataBinding* __this)
{
    ::g::Fuse::Reactive::ExpressionBinding__OnRooted_fn(__this);

    if (__this->Write() && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :144
void DataBinding__OnUnrooted_fn(DataBinding* __this)
{
    __this->ClearFailed();
    __this->UnlistenNameRegistry();

    if (__this->Write() && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->RemoveListener((uObject*)__this);

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->ClearValue();
    ::g::Fuse::Reactive::ExpressionBinding__OnUnrooted_fn(__this);
}

// protected void PushValue(object newValue) :239
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->PushValue(newValue);
}

// private bool get_Read() :67
void DataBinding__get_Read_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Read();
}

// internal void SetTarget(object value) :161
void DataBinding__SetTarget_fn(DataBinding* __this, uObject* value)
{
    __this->SetTarget(value);
}

// public override sealed Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :62
void DataBinding__SubscribeResource_fn(DataBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::ResourceSubscription::New1(source, __this->Parent(), key, listener, uPtr(__this->Target())->PropertyType()), void();
}

// public generated Uno.UX.Property get_Target() :48
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property value) :48
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// private static Uno.UX.Selector ToSelector(object newValue) :302
void DataBinding__ToSelector_fn(uObject* newValue, ::g::Uno::UX::Selector* __retval)
{
    *__retval = DataBinding::ToSelector(newValue);
}

// private void TryPushAsMarshalledValue(object newValue) :314
void DataBinding__TryPushAsMarshalledValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->TryPushAsMarshalledValue(newValue);
}

// private bool TryPushAsName(object newValue) :273
void DataBinding__TryPushAsName_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsName(newValue);
}

// private bool TryPushAsValue(object newValue) :251
void DataBinding__TryPushAsValue_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsValue(newValue);
}

// private static string TypeToJSName(Uno.Type t) :81
void DataBinding__TypeToJSName_fn(uType* t, uString** __retval)
{
    *__retval = DataBinding::TypeToJSName(t);
}

// private void UnlistenNameRegistry() :264
void DataBinding__UnlistenNameRegistry_fn(DataBinding* __this)
{
    __this->UnlistenNameRegistry();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :177
void DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(DataBinding* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Target())->Name()))
    {
        if (__this->_subscription != NULL)
        {
            if (__this->Write())
            {
                uObject* sub = uAs<uObject*>(__this->_subscription, ::TYPES[19/*Fuse.Reactive.ISubscription*/]);

                if (sub != NULL)
                    ::g::Fuse::Reactive::ISubscription::SetExclusive(uInterface(uPtr(sub), ::TYPES[19/*Fuse.Reactive.ISubscription*/]), uPtr(__this->Target())->GetAsObject1());
            }
        }
        else if (__this->CanWriteBack())
            __this->WriteBack(uPtr(__this->Target())->GetAsObject1());
    }
}

// private bool get_Write() :68
void DataBinding__get_Write_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Write();
}

// public DataBinding(Uno.UX.Property target, Fuse.Reactive.IExpression key, Fuse.Reactive.BindingMode mode) [instance] :53
void DataBinding::ctor_2(::g::Uno::UX::Property* target, uObject* key, int32_t mode)
{
    ctor_1(key);
    _mode = mode;
    Target(target);
}

// private bool Acceptor(object obj) [instance] :309
bool DataBinding::Acceptor(uObject* obj)
{
    return ::g::Fuse::Marshal::Is(obj, uPtr(Target())->PropertyType());
}

// private void CleanSubscription() [instance] :197
void DataBinding::CleanSubscription()
{
    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[0/*Uno.IDisposable*/]));
        _subscription = NULL;
    }
}

// private bool get_Clear() [instance] :69
bool DataBinding::Clear()
{
    return (_mode & 4) == 4;
}

// private void ClearFailed() [instance] :138
void DataBinding::ClearFailed()
{
    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 0, ::STRINGS[8/*""*/]);
}

// private void ClearValue() [instance] :167
void DataBinding::ClearValue()
{
    if (Clear())
        SetTarget(NULL);
}

// private void InvalidListOperation() [instance] :88
void DataBinding::InvalidListOperation()
{
    ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[25/*"Cannot bind '"*/], Key()), ::STRINGS[26/*"' to proper...*/]), ::g::Uno::UX::Selector__op_Implicit1(uPtr(Target())->Name())), ::STRINGS[27/*"'. The obse...*/]), DataBinding::TypeToJSName(uPtr(Target())->PropertyType())), ::STRINGS[28/*"."*/]), this, ::STRINGS[29/*"/usr/local/...*/], 90, ::STRINGS[30/*"InvalidList...*/], NULL);
}

// private void MarkFailed(string message) [instance] :133
void DataBinding::MarkFailed(uString* message)
{
    ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 16, message);
}

// protected void PushValue(object newValue) [instance] :239
void DataBinding::PushValue(uObject* newValue)
{
    if (!Read())
        return;

    if (Parent() == NULL)
        return;

    _currentValue = newValue;

    if (TryPushAsValue(newValue))
        return;
    else if (TryPushAsName(newValue))
        return;
    else
        TryPushAsMarshalledValue(newValue);
}

// private bool get_Read() [instance] :67
bool DataBinding::Read()
{
    return (_mode & 1) == 1;
}

// internal void SetTarget(object value) [instance] :161
void DataBinding::SetTarget(uObject* value)
{
    ClearFailed();
    uPtr(Target())->SetAsObject1(value, (uObject*)this);
}

// public generated Uno.UX.Property get_Target() [instance] :48
::g::Uno::UX::Property* DataBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property value) [instance] :48
void DataBinding::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// private void TryPushAsMarshalledValue(object newValue) [instance] :314
void DataBinding::TryPushAsMarshalledValue(uObject* newValue)
{
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(Target())->PropertyType(), newValue, &res, this))
    {
        try
        {
            {
                SetTarget(res);
            }
        }

        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            MarkFailed(uPtr(e)->ToString());
            ::g::Fuse::Diagnostics::UserError(e->ToString(), Target(), ::STRINGS[29/*"/usr/local/...*/], 327, ::STRINGS[31/*"TryPushAsMa...*/], NULL);
        }
    }
}

// private bool TryPushAsName(object newValue) [instance] :273
bool DataBinding::TryPushAsName(uObject* newValue)
{
    ::g::Uno::UX::Selector name = DataBinding::ToSelector(newValue);

    if (!name.IsNull())
    {
        UnlistenNameRegistry();
        _registryName = ::g::Uno::UX::Selector__op_Implicit1(name);
        ::g::Fuse::NameRegistry::AddListener(::g::Uno::UX::Selector__op_Implicit(_registryName), (uObject*)this);
        ::g::Fuse::Node* k = uPtr(Parent())->FindNodeByName(name, uDelegate::New(::TYPES[18/*Uno.Predicate<Fuse.Node>*/], (void*)DataBinding__Acceptor_fn, this));

        if (k != NULL)
        {
            SetTarget(k);
            return true;
        }

        if (::g::Uno::Type::IsClass(uPtr(uPtr(Target())->PropertyType())) && !::g::Fuse::Marshal::CanConvertClass(uPtr(Target())->PropertyType()))
            return true;
    }

    return false;
}

// private bool TryPushAsValue(object newValue) [instance] :251
bool DataBinding::TryPushAsValue(uObject* newValue)
{
    if (::g::Fuse::Marshal::Is(newValue, uPtr(Target())->PropertyType()))
    {
        UnlistenNameRegistry();
        SetTarget(newValue);
        return true;
    }

    return false;
}

// private void UnlistenNameRegistry() [instance] :264
void DataBinding::UnlistenNameRegistry()
{
    if (::g::Uno::String::op_Inequality(_registryName, NULL))
    {
        ::g::Fuse::NameRegistry::RemoveListener1(::g::Uno::UX::Selector__op_Implicit(_registryName), (uObject*)this);
        _registryName = NULL;
    }
}

// private bool get_Write() [instance] :68
bool DataBinding::Write()
{
    return (_mode & 2) == 2;
}

// public DataBinding New(Uno.UX.Property target, Fuse.Reactive.IExpression key, Fuse.Reactive.BindingMode mode) [static] :53
DataBinding* DataBinding::New1(::g::Uno::UX::Property* target, uObject* key, int32_t mode)
{
    DataBinding* obj1 = (DataBinding*)uNew(DataBinding_typeof());
    obj1->ctor_2(target, key, mode);
    return obj1;
}

// private static Uno.UX.Selector ToSelector(object newValue) [static] :302
::g::Uno::UX::Selector DataBinding::ToSelector(uObject* newValue)
{
    return uIs(newValue, ::TYPES[16/*Uno.UX.Selector*/]) ? uUnbox< ::g::Uno::UX::Selector>(::TYPES[16/*Uno.UX.Selector*/], newValue) : uIs(newValue, ::TYPES[5/*string*/]) ? ::g::Uno::UX::Selector__New1(uCast<uString*>(newValue, ::TYPES[5/*string*/])) : uDefault< ::g::Uno::UX::Selector>();
}

// private static string TypeToJSName(Uno.Type t) [static] :81
uString* DataBinding::TypeToJSName(uType* t)
{
    if ((::g::Uno::Type::op_Equality(t, ::TYPES[1/*int*/]) || ::g::Uno::Type::op_Equality(t, ::TYPES[2/*float*/])) || ::g::Uno::Type::op_Equality(t, ::TYPES[3/*double*/]))
        return ::STRINGS[32/*"number"*/];

    if (::g::Uno::Type::op_Equality(t, ::TYPES[5/*string*/]))
        return ::STRINGS[33/*"string"*/];

    return ::g::Uno::String::op_Addition2(::STRINGS[34/*"value that ...*/], ::g::Uno::Type::FullName(uPtr(t)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/DataFunction.uno
// --------------------------------------------------------------------------------

// public sealed class DataFunction :21
// {
static void DataFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2);
}

::g::Fuse::Reactive::Expression_type* DataFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(DataFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.DataFunction", options);
    type->fp_build_ = DataFunction_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))DataFunction__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))DataFunction__ToString_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))DataFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :33
void DataFunction__Subscribe_fn(DataFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    DataFunction__Subscription* sub = DataFunction__Subscription::New1(__this, listener, ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(context), ::TYPES[12/*Fuse.Reactive.IContext*/])));
    sub->Init();
    return *__retval = (uObject*)sub, void();
}

// public override sealed string ToString() :28
void DataFunction__ToString_fn(DataFunction* __this, uString** __retval)
{
    return *__retval = uString::Const("data()"), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Subscription/DataSubscription.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class DataSubscription :6
// {
static void DataSubscription_build(uType* type)
{
    ::STRINGS[23] = uString::Const("{");
    ::STRINGS[35] = uString::Const("} not found in data context");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[20] = ::g::Fuse::Reactive::IObservableObject_typeof();
    ::TYPES[11] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[21] = ::g::Fuse::Reactive::IPropertySubscription_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(DataSubscription_type, interface0),
        ::g::Fuse::Node__IDataListener_typeof(), offsetof(DataSubscription_type, interface1),
        ::g::Fuse::Reactive::IPropertyObserver_typeof(), offsetof(DataSubscription_type, interface2),
        ::g::Fuse::Reactive::IWriteable_typeof(), offsetof(DataSubscription_type, interface3));
    type->SetFields(0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(DataSubscription, _source), 0,
        ::g::Fuse::Node_typeof(), offsetof(DataSubscription, _origin), 0,
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(DataSubscription, _listener), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(DataSubscription, _diag), 0,
        ::g::Uno::String_typeof(), offsetof(DataSubscription, _key), 0,
        ::g::Fuse::Node__NodeDataSubscription_typeof(), offsetof(DataSubscription, _dataSub), 0,
        ::g::Uno::Bool_typeof(), offsetof(DataSubscription, _isResolved), 0,
        ::g::Uno::Bool_typeof(), offsetof(DataSubscription, _hasData), 0,
        uObject_typeof(), offsetof(DataSubscription, _currentData), 0,
        ::TYPES[21/*Fuse.Reactive.IPropertySubscription*/], offsetof(DataSubscription, _sub), 0);
}

DataSubscription_type* DataSubscription_typeof()
{
    static uSStrong<DataSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(DataSubscription);
    options.TypeSize = sizeof(DataSubscription_type);
    type = (DataSubscription_type*)uClassType::New("Fuse.Reactive.DataSubscription", options);
    type->fp_build_ = DataSubscription_build;
    type->interface3.fp_TrySetExclusive = (void(*)(uObject*, uObject*, bool*))DataSubscription__FuseReactiveIWriteableTrySetExclusive_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, uObject*, uString*, uObject*))DataSubscription__FuseReactiveIPropertyObserverOnPropertyChanged_fn;
    type->interface1.fp_OnDataChanged = (void(*)(uObject*))DataSubscription__FuseNodeIDataListenerOnDataChanged_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))DataSubscription__Dispose_fn;
    return type;
}

// public DataSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) :15
void DataSubscription__ctor__fn(DataSubscription* __this, uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener)
{
    __this->ctor_(source, origin, key, listener);
}

// private void ClearDiagnostic() :120
void DataSubscription__ClearDiagnostic_fn(DataSubscription* __this)
{
    __this->ClearDiagnostic();
}

// public void Dispose() :101
void DataSubscription__Dispose_fn(DataSubscription* __this)
{
    __this->Dispose();
}

// private void DisposeSubscription() :59
void DataSubscription__DisposeSubscription_fn(DataSubscription* __this)
{
    __this->DisposeSubscription();
}

// private void FindData() :29
void DataSubscription__FindData_fn(DataSubscription* __this)
{
    __this->FindData();
}

// private void Fuse.Node.IDataListener.OnDataChanged() :115
void DataSubscription__FuseNodeIDataListenerOnDataChanged_fn(DataSubscription* __this)
{
    __this->FindData();
}

// private void Fuse.Reactive.IPropertyObserver.OnPropertyChanged(Uno.IDisposable sub, string propertyName, object newValue) :83
void DataSubscription__FuseReactiveIPropertyObserverOnPropertyChanged_fn(DataSubscription* __this, uObject* sub, uString* propertyName, uObject* newValue)
{
    if (sub != __this->_sub)
        return;

    if (::g::Uno::String::op_Inequality(propertyName, __this->_key))
        return;

    __this->ResolveInner(newValue);
}

// private bool Fuse.Reactive.IWriteable.TrySetExclusive(object newValue) :68
void DataSubscription__FuseReactiveIWriteableTrySetExclusive_fn(DataSubscription* __this, uObject* newValue, bool* __retval)
{
    uObject* w = uAs<uObject*>(__this->_sub, ::TYPES[21/*Fuse.Reactive.IPropertySubscription*/]);

    if (w != NULL)
    {
        if (::g::Fuse::Reactive::IPropertySubscription::TrySetExclusive(uInterface(uPtr(w), ::TYPES[21/*Fuse.Reactive.IPropertySubscription*/]), __this->_key, newValue))
        {
            __this->_currentData = newValue;
            return *__retval = true, void();
        }
    }

    return *__retval = false, void();
}

// public DataSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) :15
void DataSubscription__New1_fn(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, DataSubscription** __retval)
{
    *__retval = DataSubscription::New1(source, origin, key, listener);
}

// private void ResolveInner(object data) :90
void DataSubscription__ResolveInner_fn(DataSubscription* __this, uObject* data)
{
    __this->ResolveInner(data);
}

// public DataSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) [instance] :15
void DataSubscription::ctor_(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener)
{
    _key = key;
    _source = source;
    _origin = origin;
    _listener = listener;
    _dataSub = uPtr(_origin)->SubscribeData(key, (uObject*)this);
    FindData();
}

// private void ClearDiagnostic() [instance] :120
void DataSubscription::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[0/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :101
void DataSubscription::Dispose()
{
    DisposeSubscription();
    ClearDiagnostic();
    _origin = NULL;
    _source = NULL;
    _listener = NULL;

    if (_dataSub != NULL)
    {
        uPtr(_dataSub)->Dispose();
        _dataSub = NULL;
    }
}

// private void DisposeSubscription() [instance] :59
void DataSubscription::DisposeSubscription()
{
    if (_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[0/*Uno.IDisposable*/]));
        _sub = NULL;
    }
}

// private void FindData() [instance] :29
void DataSubscription::FindData()
{
    if (_dataSub == NULL)
        return;

    ClearDiagnostic();
    DisposeSubscription();
    _isResolved = false;

    if (uPtr(_dataSub)->HasData())
    {
        uObject* obs = uAs<uObject*>(uPtr(_dataSub)->Provider(), ::TYPES[20/*Fuse.Reactive.IObservableObject*/]);

        if (obs != NULL)
            _sub = ::g::Fuse::Reactive::IObservableObject::Subscribe(uInterface(uPtr(obs), ::TYPES[20/*Fuse.Reactive.IObservableObject*/]), (uObject*)this);

        ResolveInner(uPtr(_dataSub)->Data());
    }
    else
    {
        _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[23/*"{"*/], _key), ::STRINGS[35/*"} not found...*/]), _origin);

        if (_hasData)
        {
            ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), _source);
            _hasData = false;
        }
    }
}

// private void ResolveInner(object data) [instance] :90
void DataSubscription::ResolveInner(uObject* data)
{
    _isResolved = true;

    if ((data != _currentData) || !_hasData)
    {
        _hasData = true;
        _currentData = data;
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), _source, data);
    }
}

// public DataSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) [static] :15
DataSubscription* DataSubscription::New1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener)
{
    DataSubscription* obj1 = (DataSubscription*)uNew(DataSubscription_typeof());
    obj1->ctor_(source, origin, key, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/DataToResource.uno
// -------------------------------------------------------------------------------------

// public sealed class DataToResource :33
// {
static void DataToResource_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(DataToResource, _data), 0);
}

::g::Fuse::Reactive::Expression_type* DataToResource_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(DataToResource);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.DataToResource", options);
    type->fp_build_ = DataToResource_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))DataToResource__Subscribe_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))DataToResource__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :42
void DataToResource__Subscribe_fn(DataToResource* __this, uObject* context, uObject* listener, uObject** __retval)
{
    DataToResource__DataToResourceSubscription* dtr = DataToResource__DataToResourceSubscription::New1(__this, context, listener);
    dtr->Init(context);
    return *__retval = (uObject*)dtr, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/DataToResource.uno
// -------------------------------------------------------------------------------------

// private sealed class DataToResource.DataToResourceSubscription :49
// {
static void DataToResource__DataToResourceSubscription_build(uType* type)
{
    ::TYPES[22] = ::g::Fuse::Reactive::Expression_typeof()->Array();
    ::TYPES[12] = ::g::Fuse::Reactive::IContext_typeof();
    ::TYPES[5] = ::g::Uno::String_typeof();
    ::TYPES[23] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Resources::ResourceRegistry_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ExpressionListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::ExpressionListener_type, interface1));
    type->SetFields(9,
        ::g::Fuse::Node_typeof(), offsetof(DataToResource__DataToResourceSubscription, _node), 0,
        ::TYPES[5/*string*/], offsetof(DataToResource__DataToResourceSubscription, _key), 0);
}

::g::Fuse::Reactive::ExpressionListener_type* DataToResource__DataToResourceSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ExpressionListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionListener_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DataToResource__DataToResourceSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ExpressionListener_type);
    type = (::g::Fuse::Reactive::ExpressionListener_type*)uClassType::New("Fuse.Reactive.DataToResource.DataToResourceSubscription", options);
    type->fp_build_ = DataToResource__DataToResourceSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))DataToResource__DataToResourceSubscription__Dispose_fn;
    type->fp_OnArguments = (void(*)(::g::Fuse::Reactive::ExpressionSubscriber*, uArray*))DataToResource__DataToResourceSubscription__OnArguments_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))DataToResource__DataToResourceSubscription__Dispose_fn;
    return type;
}

// public DataToResourceSubscription(Fuse.Reactive.DataToResource dtr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :52
void DataToResource__DataToResourceSubscription__ctor_3_fn(DataToResource__DataToResourceSubscription* __this, ::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener)
{
    __this->ctor_3(dtr, context, listener);
}

// public override sealed void Dispose() :58
void DataToResource__DataToResourceSubscription__Dispose_fn(DataToResource__DataToResourceSubscription* __this)
{
    ::g::Fuse::Reactive::ExpressionListener__Dispose_fn(__this);
    __this->_node = NULL;
    __this->Unsubscribe();
}

// public DataToResourceSubscription New(Fuse.Reactive.DataToResource dtr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :52
void DataToResource__DataToResourceSubscription__New1_fn(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener, DataToResource__DataToResourceSubscription** __retval)
{
    *__retval = DataToResource__DataToResourceSubscription::New1(dtr, context, listener);
}

// protected override sealed void OnArguments(Fuse.Reactive.Expression.Argument[] args) :67
void DataToResource__DataToResourceSubscription__OnArguments_fn(DataToResource__DataToResourceSubscription* __this, uArray* args)
{
    __this->Unsubscribe();
    __this->_key = uAs<uString*>(uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->Value(), ::TYPES[5/*string*/]);
    __this->Subscribe();
    __this->OnChanged();
}

// private void OnChanged() :87
void DataToResource__DataToResourceSubscription__OnChanged_fn(DataToResource__DataToResourceSubscription* __this)
{
    __this->OnChanged();
}

// private void Subscribe() :75
void DataToResource__DataToResourceSubscription__Subscribe_fn(DataToResource__DataToResourceSubscription* __this)
{
    __this->Subscribe();
}

// private void Unsubscribe() :81
void DataToResource__DataToResourceSubscription__Unsubscribe_fn(DataToResource__DataToResourceSubscription* __this)
{
    __this->Unsubscribe();
}

// public DataToResourceSubscription(Fuse.Reactive.DataToResource dtr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :52
void DataToResource__DataToResourceSubscription::ctor_3(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener)
{
    ctor_2(dtr, listener, uArray::Init< ::g::Fuse::Reactive::Expression*>(::TYPES[22/*Fuse.Reactive.Expression[]*/], 1, (::g::Fuse::Reactive::Expression*)uPtr(dtr)->_data), 0);
    _node = ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(context), ::TYPES[12/*Fuse.Reactive.IContext*/]));
}

// private void OnChanged() [instance] :87
void DataToResource__DataToResourceSubscription::OnChanged()
{
    uObject* v = NULL;

    if ((::g::Uno::String::op_Inequality(_key, NULL) && (_node != NULL)) && uPtr(_node)->TryGetResource(_key, NULL, &v))
        SetData(v);
    else
        ClearData();
}

// private void Subscribe() [instance] :75
void DataToResource__DataToResourceSubscription::Subscribe()
{
    if (::g::Uno::String::op_Inequality(_key, NULL))
        ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(_key, uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)DataToResource__DataToResourceSubscription__OnChanged_fn, this));
}

// private void Unsubscribe() [instance] :81
void DataToResource__DataToResourceSubscription::Unsubscribe()
{
    if (::g::Uno::String::op_Inequality(_key, NULL))
        ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(_key, uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)DataToResource__DataToResourceSubscription__OnChanged_fn, this));
}

// public DataToResourceSubscription New(Fuse.Reactive.DataToResource dtr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :52
DataToResource__DataToResourceSubscription* DataToResource__DataToResourceSubscription::New1(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener)
{
    DataToResource__DataToResourceSubscription* obj1 = (DataToResource__DataToResourceSubscription*)uNew(DataToResource__DataToResourceSubscription_typeof());
    obj1->ctor_3(dtr, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/FuseJS/DebugLog.uno
// --------------------------------------------------------------------------------------

// internal static class DebugLog :6
// {
static void DebugLog_build(uType* type)
{
    ::STRINGS[36] = uString::Const("debug_log");
    ::STRINGS[4] = uString::Const("null");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/FuseJS/DebugLog.uno");
    ::TYPES[9] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
}

uClassType* DebugLog_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.DebugLog", options);
    type->fp_build_ = DebugLog_build;
    return type;
}

// public static void Init(Fuse.Scripting.Context c) :8
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c)
{
    DebugLog::Init(c);
}

// private static object Log(Fuse.Scripting.Context context, object[] args) :13
void DebugLog__Log_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = DebugLog::Log(context, args);
}

// public static void Init(Fuse.Scripting.Context c) [static] :8
void DebugLog::Init(::g::Fuse::Scripting::Context* c)
{
    uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[36/*"debug_log"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.Callback*/], (void*)DebugLog__Log_fn));
}

// private static object Log(Fuse.Scripting.Context context, object[] args) [static] :13
uObject* DebugLog::Log(::g::Fuse::Scripting::Context* context, uArray* args)
{
    for (int32_t i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log3((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[4/*"null"*/], 0, ::STRINGS[3/*"/usr/local/...*/], 17);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScript.Dependencies.uno
// ----------------------------------------------------------------------------------------------

// public sealed class JavaScript.Dependency :12
// {
static void JavaScript__Dependency_build(uType* type)
{
    ::TYPES[24] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(JavaScript__Dependency_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::JavaScript_typeof(), offsetof(JavaScript__Dependency, _script), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(JavaScript__Dependency, _expSubscription), 0,
        ::g::Uno::Bool_typeof(), offsetof(JavaScript__Dependency, HasValue), 0,
        uObject_typeof(), offsetof(JavaScript__Dependency, Value), 0,
        ::TYPES[24/*Fuse.Reactive.IExpression*/], offsetof(JavaScript__Dependency, _Expression), 0,
        ::g::Uno::String_typeof(), offsetof(JavaScript__Dependency, _Name), 0);
}

JavaScript__Dependency_type* JavaScript__Dependency_typeof()
{
    static uSStrong<JavaScript__Dependency_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JavaScript__Dependency);
    options.TypeSize = sizeof(JavaScript__Dependency_type);
    type = (JavaScript__Dependency_type*)uClassType::New("Fuse.Reactive.JavaScript.Dependency", options);
    type->fp_build_ = JavaScript__Dependency_build;
    type->interface0.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))JavaScript__Dependency__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_OnLostData = (void(*)(uObject*, uObject*))JavaScript__Dependency__FuseReactiveIListenerOnLostData_fn;
    return type;
}

// internal generated Fuse.Reactive.IExpression get_Expression() :15
void JavaScript__Dependency__get_Expression_fn(JavaScript__Dependency* __this, uObject** __retval)
{
    *__retval = __this->Expression();
}

// private generated void set_Expression(Fuse.Reactive.IExpression value) :15
void JavaScript__Dependency__set_Expression_fn(JavaScript__Dependency* __this, uObject* value)
{
    __this->Expression(value);
}

// private void Fuse.Reactive.IListener.OnLostData(Fuse.Reactive.IExpression source) :59
void JavaScript__Dependency__FuseReactiveIListenerOnLostData_fn(JavaScript__Dependency* __this, uObject* source)
{
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object data) :49
void JavaScript__Dependency__FuseReactiveIListenerOnNewData_fn(JavaScript__Dependency* __this, uObject* source, uObject* data)
{
    if (__this->_script == NULL)
        return;

    __this->Value = data;
    __this->HasValue = true;
    uPtr(__this->_script)->DispatchEvaluateIfDependenciesReady();
}

// internal generated string get_Name() :14
void JavaScript__Dependency__get_Name_fn(JavaScript__Dependency* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :14
void JavaScript__Dependency__set_Name_fn(JavaScript__Dependency* __this, uString* value)
{
    __this->Name(value);
}

// internal void Subscribe(Fuse.Reactive.JavaScript script) :27
void JavaScript__Dependency__Subscribe_fn(JavaScript__Dependency* __this, ::g::Fuse::Reactive::JavaScript* script)
{
    __this->Subscribe(script);
}

// internal void Unsubscribe() :34
void JavaScript__Dependency__Unsubscribe_fn(JavaScript__Dependency* __this)
{
    __this->Unsubscribe();
}

// internal generated Fuse.Reactive.IExpression get_Expression() [instance] :15
uObject* JavaScript__Dependency::Expression()
{
    return _Expression;
}

// private generated void set_Expression(Fuse.Reactive.IExpression value) [instance] :15
void JavaScript__Dependency::Expression(uObject* value)
{
    _Expression = value;
}

// internal generated string get_Name() [instance] :14
uString* JavaScript__Dependency::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :14
void JavaScript__Dependency::Name(uString* value)
{
    _Name = value;
}

// internal void Subscribe(Fuse.Reactive.JavaScript script) [instance] :27
void JavaScript__Dependency::Subscribe(::g::Fuse::Reactive::JavaScript* script)
{
    Unsubscribe();
    _script = script;
    _expSubscription = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(Expression()), ::TYPES[24/*Fuse.Reactive.IExpression*/]), (uObject*)script, (uObject*)this);
}

// internal void Unsubscribe() [instance] :34
void JavaScript__Dependency::Unsubscribe()
{
    if (_expSubscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_expSubscription), ::TYPES[0/*Uno.IDisposable*/]));
        _expSubscription = NULL;
    }

    Value = NULL;
    HasValue = false;
    _script = NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Device.uno
// -----------------------------------------------------------------------------

// public sealed class DeviceCaps :114
// {
// static generated DeviceCaps() :114
static void DeviceCaps__cctor__fn(uType* __type)
{
    DeviceCaps::NameIsAndroid_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[37/*"isAndroid"*/]);
    DeviceCaps::NameIsIOS_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[38/*"isIOS"*/]);
    DeviceCaps::NameIsMac_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[39/*"isMac"*/]);
    DeviceCaps::NameIsWindows_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[40/*"isWindows"*/]);
    DeviceCaps::NameIsPreview_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[41/*"isPreview"*/]);
    DeviceCaps::NameOSVersion_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[42/*"osVersion"*/]);
    DeviceCaps::NameAPILevel_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[43/*"apiLevel"*/]);
    DeviceCaps::Device_ = DeviceCaps::New3();
}

static void DeviceCaps_build(uType* type)
{
    ::STRINGS[37] = uString::Const("isAndroid");
    ::STRINGS[38] = uString::Const("isIOS");
    ::STRINGS[39] = uString::Const("isMac");
    ::STRINGS[40] = uString::Const("isWindows");
    ::STRINGS[41] = uString::Const("isPreview");
    ::STRINGS[42] = uString::Const("osVersion");
    ::STRINGS[43] = uString::Const("apiLevel");
    type->SetDependencies(
        ::g::Fuse::Platform::SystemUI_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObservableObject_typeof(), offsetof(::g::Fuse::Reactive::CapsObject_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::CapsObject_type, interface1),
        ::g::Fuse::IObject_typeof(), offsetof(::g::Fuse::Reactive::CapsObject_type, interface2));
    type->SetFields(2,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DeviceCaps::NameIsAndroid_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DeviceCaps::NameIsIOS_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DeviceCaps::NameIsMac_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DeviceCaps::NameIsWindows_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DeviceCaps::NameIsPreview_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DeviceCaps::NameOSVersion_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DeviceCaps::NameAPILevel_, uFieldFlagsStatic,
        type, (uintptr_t)&DeviceCaps::Device_, uFieldFlagsStatic);
}

::g::Fuse::Reactive::CapsObject_type* DeviceCaps_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::CapsObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::CapsObject_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DeviceCaps);
    options.TypeSize = sizeof(::g::Fuse::Reactive::CapsObject_type);
    type = (::g::Fuse::Reactive::CapsObject_type*)uClassType::New("Fuse.Reactive.DeviceCaps", options);
    type->fp_build_ = DeviceCaps_build;
    type->fp_ctor_ = (void*)DeviceCaps__New3_fn;
    type->fp_cctor_ = DeviceCaps__cctor__fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::Reactive::CapsObject__FuseReactiveIObservableObjectSubscribe_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::CapsObject__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface2.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))::g::Fuse::Reactive::CapsObject__ContainsKey_fn;
    type->interface2.fp_get_Item = (void(*)(uObject*, uString*, uObject**))::g::Fuse::Reactive::CapsObject__get_Item_fn;
    type->interface2.fp_get_Keys = (void(*)(uObject*, uArray**))::g::Fuse::Reactive::CapsObject__get_Keys_fn;
    return type;
}

// private DeviceCaps() :127
void DeviceCaps__ctor_2_fn(DeviceCaps* __this)
{
    __this->ctor_2();
}

// private DeviceCaps New() :127
void DeviceCaps__New3_fn(DeviceCaps** __retval)
{
    *__retval = DeviceCaps::New3();
}

::g::Uno::UX::Selector DeviceCaps::NameIsAndroid_;
::g::Uno::UX::Selector DeviceCaps::NameIsIOS_;
::g::Uno::UX::Selector DeviceCaps::NameIsMac_;
::g::Uno::UX::Selector DeviceCaps::NameIsWindows_;
::g::Uno::UX::Selector DeviceCaps::NameIsPreview_;
::g::Uno::UX::Selector DeviceCaps::NameOSVersion_;
::g::Uno::UX::Selector DeviceCaps::NameAPILevel_;
uSStrong<DeviceCaps*> DeviceCaps::Device_;

// private DeviceCaps() [instance] :127
void DeviceCaps::ctor_2()
{
    ctor_1();
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(Props()), ::g::Uno::UX::Selector__op_Implicit1(DeviceCaps::NameIsAndroid_), uBox(::TYPES[4/*bool*/], false));
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(Props()), ::g::Uno::UX::Selector__op_Implicit1(DeviceCaps::NameIsIOS_), uBox(::TYPES[4/*bool*/], true));
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(Props()), ::g::Uno::UX::Selector__op_Implicit1(DeviceCaps::NameIsMac_), uBox(::TYPES[4/*bool*/], false));
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(Props()), ::g::Uno::UX::Selector__op_Implicit1(DeviceCaps::NameIsWindows_), uBox(::TYPES[4/*bool*/], false));
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(Props()), ::g::Uno::UX::Selector__op_Implicit1(DeviceCaps::NameIsPreview_), uBox(::TYPES[4/*bool*/], false));
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(Props()), ::g::Uno::UX::Selector__op_Implicit1(DeviceCaps::NameOSVersion_), uBox(::g::Uno::Int3_typeof(), ::g::Fuse::Platform::SystemUI::OSVersion()));
}

// private DeviceCaps New() [static] :127
DeviceCaps* DeviceCaps::New3()
{
    DeviceCaps* obj1 = (DeviceCaps*)uNew(DeviceCaps_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Each.uno
// ------------------------------------------------------------------------

// public sealed class Each :94
// {
// static generated Each() :94
static void Each__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    Each::_eachHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Each_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface6),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface7),
        ::g::Fuse::IDeferred_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface8),
        ::g::Fuse::Reactive::ItemsWindowList__IListener_typeof()->MakeType(::g::Fuse::Reactive::WindowItem_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface9));
    type->SetFields(38,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Each::_eachHandle_, uFieldFlagsStatic);
}

::g::Fuse::Reactive::Instantiator_type* Each_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Instantiator_typeof();
    options.FieldCount = 39;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(Each);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Instantiator_type);
    type = (::g::Fuse::Reactive::Instantiator_type*)uClassType::New("Fuse.Reactive.Each", options);
    type->fp_build_ = Each_build;
    type->fp_ctor_ = (void*)Each__New4_fn;
    type->fp_cctor_ = Each__cctor_1_fn;
    type->interface9.fp_SetValid = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerSetValid_fn;
    type->interface9.fp_SetFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerSetFailed_fn;
    type->interface7.fp_TryGetDataProvider = (void(*)(uObject*, ::g::Fuse::Node*, int32_t*, uObject**, int32_t*))::g::Fuse::Reactive::Instantiator__FuseNodeISubtreeDataProviderTryGetDataProvider_fn;
    type->interface9.fp_AddedWindowItem = (void(*)(uObject*, int32_t*, ::g::Fuse::Reactive::WindowListItem*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerAddedWindowItem_fn;
    type->interface8.fp_Perform = (void(*)(uObject*, bool*))::g::Fuse::Reactive::Instantiator__FuseIDeferredPerform_fn;
    type->interface9.fp_RemovedWindowItem = (void(*)(uObject*, ::g::Fuse::Reactive::WindowListItem*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerRemovedWindowItem_fn;
    type->interface9.fp_OnCurrentDataChanged = (void(*)(uObject*, ::g::Fuse::Reactive::WindowListItem*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerOnCurrentDataChanged_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Each() :145
void Each__ctor_5_fn(Each* __this)
{
    __this->ctor_5();
}

// public object get_Items() :161
void Each__get_Items_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :162
void Each__set_Items_fn(Each* __this, uObject* value)
{
    __this->Items(value);
}

// public new int get_Limit() :212
void Each__get_Limit1_fn(Each* __this, int32_t* __retval)
{
    *__retval = __this->Limit1();
}

// public new void set_Limit(int value) :213
void Each__set_Limit1_fn(Each* __this, int32_t* value)
{
    __this->Limit1(*value);
}

// public Each New() :145
void Each__New4_fn(Each** __retval)
{
    *__retval = Each::New4();
}

// public new int get_Offset() :199
void Each__get_Offset1_fn(Each* __this, int32_t* __retval)
{
    *__retval = __this->Offset1();
}

// public new void set_Offset(int value) :200
void Each__set_Offset1_fn(Each* __this, int32_t* value)
{
    __this->Offset1(*value);
}

uSStrong< ::g::Fuse::PropertyHandle*> Each::_eachHandle_;

// public Each() [instance] :145
void Each::ctor_5()
{
    ctor_3();
}

// public object get_Items() [instance] :161
uObject* Each::Items()
{
    return GetItems();
}

// public void set_Items(object value) [instance] :162
void Each::Items(uObject* value)
{
    if (GetItems() != value)
        SetItems(value);
}

// public new int get_Limit() [instance] :212
int32_t Each::Limit1()
{
    return Limit();
}

// public new void set_Limit(int value) [instance] :213
void Each::Limit1(int32_t value)
{
    Limit(value);
}

// public new int get_Offset() [instance] :199
int32_t Each::Offset1()
{
    return Offset();
}

// public new void set_Offset(int value) [instance] :200
void Each::Offset1(int32_t value)
{
    Offset(value);
}

// public Each New() [static] :145
Each* Each::New4()
{
    Each* obj2 = (Each*)uNew(Each_typeof());
    obj2->ctor_5();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/EventBinding.uno
// --------------------------------------------------------------------------------

// public sealed class EventBinding :26
// {
static void EventBinding_build(uType* type)
{
    ::TYPES[25] = ::g::Fuse::Reactive::IEventHandler_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[27] = ::g::Fuse::Node_typeof();
    ::TYPES[28] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::EventRecord_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding_type, interface1));
    type->SetFields(3,
        ::TYPES[25/*Fuse.Reactive.IEventHandler*/], offsetof(EventBinding, _eventHandler), 0,
        ::TYPES[28/*Uno.Collections.List<Fuse.Reactive.EventRecord>*/], offsetof(EventBinding, _queuedEvents), 0);
}

::g::Fuse::Reactive::ExpressionBinding_type* EventBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ExpressionBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionBinding_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EventBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ExpressionBinding_type);
    type = (::g::Fuse::Reactive::ExpressionBinding_type*)uClassType::New("Fuse.Reactive.EventBinding", options);
    type->fp_build_ = EventBinding_build;
    type->fp_LostValue = (void(*)(::g::Fuse::Reactive::ExpressionBinding*))EventBinding__LostValue_fn;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*))EventBinding__NewValue_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))EventBinding__OnUnrooted_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__SubscribeResource_fn;
    return type;
}

// public EventBinding(Fuse.Reactive.IExpression key) :29
void EventBinding__ctor_2_fn(EventBinding* __this, uObject* key)
{
    __this->ctor_2(key);
}

// internal override sealed void LostValue() :55
void EventBinding__LostValue_fn(EventBinding* __this)
{
    __this->_eventHandler = NULL;
}

// public EventBinding New(Fuse.Reactive.IExpression key) :29
void EventBinding__New1_fn(uObject* key, EventBinding** __retval)
{
    *__retval = EventBinding::New1(key);
}

// internal override sealed void NewValue(object obj) :49
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj)
{
    __this->_eventHandler = uAs<uObject*>(obj, ::TYPES[25/*Fuse.Reactive.IEventHandler*/]);
    __this->ProcessQueuedEvents();
}

// public void OnEvent(object sender, Uno.EventArgs args) :67
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnEvent(sender, args);
}

// protected override sealed void OnUnrooted() :60
void EventBinding__OnUnrooted_fn(EventBinding* __this)
{
    ::g::Fuse::Reactive::ExpressionBinding__OnUnrooted_fn(__this);
    __this->_eventHandler = NULL;
    __this->_queuedEvents = NULL;
}

// private void ProcessQueuedEvents() :37
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this)
{
    __this->ProcessQueuedEvents();
}

// public EventBinding(Fuse.Reactive.IExpression key) [instance] :29
void EventBinding::ctor_2(uObject* key)
{
    ctor_1(key);
}

// public void OnEvent(object sender, Uno.EventArgs args) [instance] :67
void EventBinding::OnEvent(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (Parent() == NULL)
        return;

    ::g::Fuse::Reactive::EventRecord* e = ::g::Fuse::Reactive::EventRecord::New1(uAs<uObject*>(args, ::TYPES[26/*Fuse.Scripting.IScriptEvent*/]), uAs< ::g::Fuse::Node*>(sender, ::TYPES[27/*Fuse.Node*/]));

    if (_eventHandler != NULL)
        ::g::Fuse::Reactive::IEventHandler::Dispatch(uInterface(uPtr(_eventHandler), ::TYPES[25/*Fuse.Reactive.IEventHandler*/]), (uObject*)e);
    else
    {
        if (_queuedEvents == NULL)
            _queuedEvents = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[28/*Uno.Collections.List<Fuse.Reactive.EventRecord>*/]));

        ::g::Uno::Collections::List__Add_fn(uPtr(_queuedEvents), e);
    }
}

// private void ProcessQueuedEvents() [instance] :37
void EventBinding::ProcessQueuedEvents()
{
    ::g::Fuse::Reactive::EventRecord* ret2;

    if ((_eventHandler != NULL) && (_queuedEvents != NULL))
    {
        ::g::Uno::Collections::List* events = _queuedEvents;
        _queuedEvents = NULL;

        for (int32_t i = 0; i < uPtr(events)->Count(); i++)
            ::g::Fuse::Reactive::IEventHandler::Dispatch(uInterface(uPtr(_eventHandler), ::TYPES[25/*Fuse.Reactive.IEventHandler*/]), (uObject*)(::g::Uno::Collections::List__get_Item_fn(uPtr(events), uCRef<int32_t>(i), &ret2), ret2));
    }
}

// public EventBinding New(Fuse.Reactive.IExpression key) [static] :29
EventBinding* EventBinding::New1(uObject* key)
{
    EventBinding* obj1 = (EventBinding*)uNew(EventBinding_typeof());
    obj1->ctor_2(key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/EventRecord.uno
// -------------------------------------------------------------------------------

// internal sealed class EventRecord :9
// {
static void EventRecord_build(uType* type)
{
    ::TYPES[27] = ::g::Fuse::Node_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[29] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IEventRecord_typeof(), offsetof(EventRecord_type, interface0),
        ::g::Fuse::Scripting::IEventSerializer_typeof(), offsetof(EventRecord_type, interface1));
    type->SetFields(0,
        ::TYPES[27/*Fuse.Node*/], offsetof(EventRecord, _node), 0,
        uObject_typeof(), offsetof(EventRecord, _data), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(EventRecord, _sender), 0,
        ::TYPES[29/*Uno.Collections.Dictionary<string, object>*/], offsetof(EventRecord, _args), 0);
}

EventRecord_type* EventRecord_typeof()
{
    static uSStrong<EventRecord_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EventRecord);
    options.TypeSize = sizeof(EventRecord_type);
    type = (EventRecord_type*)uClassType::New("Fuse.Reactive.EventRecord", options);
    type->fp_build_ = EventRecord_build;
    type->interface1.fp_AddObject = (void(*)(uObject*, uString*, uObject*))EventRecord__FuseScriptingIEventSerializerAddObject_fn;
    type->interface1.fp_AddString = (void(*)(uObject*, uString*, uString*))EventRecord__FuseScriptingIEventSerializerAddString_fn;
    type->interface1.fp_AddInt = (void(*)(uObject*, uString*, int32_t*))EventRecord__FuseScriptingIEventSerializerAddInt_fn;
    type->interface1.fp_AddDouble = (void(*)(uObject*, uString*, double*))EventRecord__FuseScriptingIEventSerializerAddDouble_fn;
    type->interface1.fp_AddBool = (void(*)(uObject*, uString*, bool*))EventRecord__FuseScriptingIEventSerializerAddBool_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))EventRecord__get_Node_fn;
    type->interface0.fp_get_Data = (void(*)(uObject*, uObject**))EventRecord__get_Data_fn;
    type->interface0.fp_get_Sender = (void(*)(uObject*, ::g::Uno::UX::Selector*))EventRecord__get_Sender_fn;
    type->interface0.fp_get_Args = (void(*)(uObject*, uObject**))EventRecord__get_Args_fn;
    return type;
}

// internal EventRecord(Fuse.Scripting.IScriptEvent args, object sender) :16
void EventRecord__ctor__fn(EventRecord* __this, uObject* args, uObject* sender)
{
    __this->ctor_(args, sender);
}

// private void AddObject(string key, object value) :36
void EventRecord__AddObject_fn(EventRecord* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, object>> get_Args() :34
void EventRecord__get_Args_fn(EventRecord* __this, uObject** __retval)
{
    *__retval = __this->Args();
}

// public object get_Data() :32
void EventRecord__get_Data_fn(EventRecord* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// private void Fuse.Scripting.IEventSerializer.AddBool(string key, bool value) :62
void EventRecord__FuseScriptingIEventSerializerAddBool_fn(EventRecord* __this, uString* key, bool* value)
{
    bool value_ = *value;
    __this->AddObject(key, uBox(::TYPES[4/*bool*/], value_));
}

// private void Fuse.Scripting.IEventSerializer.AddDouble(string key, double value) :57
void EventRecord__FuseScriptingIEventSerializerAddDouble_fn(EventRecord* __this, uString* key, double* value)
{
    double value_ = *value;
    __this->AddObject(key, uBox(::TYPES[3/*double*/], value_));
}

// private void Fuse.Scripting.IEventSerializer.AddInt(string key, int value) :52
void EventRecord__FuseScriptingIEventSerializerAddInt_fn(EventRecord* __this, uString* key, int32_t* value)
{
    int32_t value_ = *value;
    __this->AddObject(key, uBox(::TYPES[3/*double*/], (double)value_));
}

// private void Fuse.Scripting.IEventSerializer.AddObject(string key, object value) :42
void EventRecord__FuseScriptingIEventSerializerAddObject_fn(EventRecord* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// private void Fuse.Scripting.IEventSerializer.AddString(string key, string value) :47
void EventRecord__FuseScriptingIEventSerializerAddString_fn(EventRecord* __this, uString* key, uString* value)
{
    __this->AddObject(key, value);
}

// internal EventRecord New(Fuse.Scripting.IScriptEvent args, object sender) :16
void EventRecord__New1_fn(uObject* args, uObject* sender, EventRecord** __retval)
{
    *__retval = EventRecord::New1(args, sender);
}

// public Fuse.Node get_Node() :31
void EventRecord__get_Node_fn(EventRecord* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// public Uno.UX.Selector get_Sender() :33
void EventRecord__get_Sender_fn(EventRecord* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Sender();
}

// internal EventRecord(Fuse.Scripting.IScriptEvent args, object sender) [instance] :16
void EventRecord::ctor_(uObject* args, uObject* sender)
{
    _node = uAs< ::g::Fuse::Node*>(sender, ::TYPES[27/*Fuse.Node*/]);

    if (_node != NULL)
    {
        uPtr(_node)->TryGetPrimeDataContext(&_data);

        if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(uPtr(_node)->Name()), NULL))
            _sender = uPtr(_node)->Name();
    }

    if (args != NULL)
        ::g::Fuse::Scripting::IScriptEvent::Serialize(uInterface(uPtr(args), ::TYPES[26/*Fuse.Scripting.IScriptEvent*/]), (uObject*)this);
}

// private void AddObject(string key, object value) [instance] :36
void EventRecord::AddObject(uString* key, uObject* value)
{
    if (_args == NULL)
        _args = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[29/*Uno.Collections.Dictionary<string, object>*/]));

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_args), key, value);
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, object>> get_Args() [instance] :34
uObject* EventRecord::Args()
{
    return (uObject*)_args;
}

// public object get_Data() [instance] :32
uObject* EventRecord::Data()
{
    return _data;
}

// public Fuse.Node get_Node() [instance] :31
::g::Fuse::Node* EventRecord::Node()
{
    return _node;
}

// public Uno.UX.Selector get_Sender() [instance] :33
::g::Uno::UX::Selector EventRecord::Sender()
{
    return _sender;
}

// internal EventRecord New(Fuse.Scripting.IScriptEvent args, object sender) [static] :16
EventRecord* EventRecord::New1(uObject* args, uObject* sender)
{
    EventRecord* obj1 = (EventRecord*)uNew(EventRecord_typeof());
    obj1->ctor_(args, sender);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Expression.uno
// ---------------------------------------------------------------------------------

// public abstract class Expression :7
// {
static void Expression_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Expression_type, interface1));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Expression, _SourceFileName), 0,
        ::g::Uno::Int_typeof(), offsetof(Expression, _SourceLineNumber), 0);
}

Expression_type* Expression_typeof()
{
    static uSStrong<Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Expression);
    options.TypeSize = sizeof(Expression_type);
    type = (Expression_type*)uClassType::New("Fuse.Reactive.Expression", options);
    type->fp_build_ = Expression_build;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))Expression__get_SourceFileName_fn;
    return type;
}

// protected generated Expression() :7
void Expression__ctor__fn(Expression* __this)
{
    __this->ctor_();
}

// private Fuse.ISourceLocation Fuse.ISourceLocation.get_SourceNearest() :47
void Expression__FuseISourceLocationget_SourceNearest_fn(Expression* __this, uObject** __retval)
{
    return *__retval = (uObject*)__this, void();
}

// public generated string get_SourceFileName() :45
void Expression__get_SourceFileName_fn(Expression* __this, uString** __retval)
{
    *__retval = __this->SourceFileName();
}

// public generated void set_SourceFileName(string value) :45
void Expression__set_SourceFileName_fn(Expression* __this, uString* value)
{
    __this->SourceFileName(value);
}

// public generated int get_SourceLineNumber() :42
void Expression__get_SourceLineNumber_fn(Expression* __this, int32_t* __retval)
{
    *__retval = __this->SourceLineNumber();
}

// public generated void set_SourceLineNumber(int value) :42
void Expression__set_SourceLineNumber_fn(Expression* __this, int32_t* value)
{
    __this->SourceLineNumber(*value);
}

// protected generated Expression() [instance] :7
void Expression::ctor_()
{
}

// public generated string get_SourceFileName() [instance] :45
uString* Expression::SourceFileName()
{
    return _SourceFileName;
}

// public generated void set_SourceFileName(string value) [instance] :45
void Expression::SourceFileName(uString* value)
{
    _SourceFileName = value;
}

// public generated int get_SourceLineNumber() [instance] :42
int32_t Expression::SourceLineNumber()
{
    return _SourceLineNumber;
}

// public generated void set_SourceLineNumber(int value) [instance] :42
void Expression::SourceLineNumber(int32_t value)
{
    _SourceLineNumber = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/ExpressionBinding.uno
// -------------------------------------------------------------------------------------

// public abstract class ExpressionBinding :6
// {
static void ExpressionBinding_build(uType* type)
{
    ::STRINGS[44] = uString::Const("The binding type does not support resource subscriptions");
    ::TYPES[24] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[30] = ::g::Fuse::Reactive::IWriteable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(ExpressionBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(ExpressionBinding_type, interface1));
    type->SetFields(1,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(ExpressionBinding, _expressionSub), 0,
        ::TYPES[24/*Fuse.Reactive.IExpression*/], offsetof(ExpressionBinding, _Key), 0);
}

ExpressionBinding_type* ExpressionBinding_typeof()
{
    static uSStrong<ExpressionBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Binding_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ExpressionBinding);
    options.TypeSize = sizeof(ExpressionBinding_type);
    type = (ExpressionBinding_type*)uClassType::New("Fuse.Reactive.ExpressionBinding", options);
    type->fp_build_ = ExpressionBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))ExpressionBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))ExpressionBinding__OnUnrooted_fn;
    type->fp_SubscribeResource = ExpressionBinding__SubscribeResource_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))ExpressionBinding__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))ExpressionBinding__SubscribeResource_fn;
    return type;
}

// protected ExpressionBinding(Fuse.Reactive.IExpression key) :10
void ExpressionBinding__ctor_1_fn(ExpressionBinding* __this, uObject* key)
{
    __this->ctor_1(key);
}

// protected internal bool get_CanWriteBack() :17
void ExpressionBinding__get_CanWriteBack_fn(ExpressionBinding* __this, bool* __retval)
{
    *__retval = __this->CanWriteBack();
}

// private Fuse.Node Fuse.Reactive.IContext.get_Node() :31
void ExpressionBinding__FuseReactiveIContextget_Node_fn(ExpressionBinding* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->Parent(), void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :26
void ExpressionBinding__FuseReactiveIContextSubscribe_fn(ExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::DataSubscription::New1(source, __this->Parent(), key, listener), void();
}

// private void Fuse.Reactive.IListener.OnLostData(Fuse.Reactive.IExpression source) :49
void ExpressionBinding__FuseReactiveIListenerOnLostData_fn(ExpressionBinding* __this, uObject* source)
{
    __this->LostValue();
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object obj) :48
void ExpressionBinding__FuseReactiveIListenerOnNewData_fn(ExpressionBinding* __this, uObject* source, uObject* obj)
{
    __this->NewValue(obj);
}

// public generated Fuse.Reactive.IExpression get_Key() :8
void ExpressionBinding__get_Key_fn(ExpressionBinding* __this, uObject** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(Fuse.Reactive.IExpression value) :8
void ExpressionBinding__set_Key_fn(ExpressionBinding* __this, uObject* value)
{
    __this->Key(value);
}

// protected override void OnRooted() :20
void ExpressionBinding__OnRooted_fn(ExpressionBinding* __this)
{
    ::g::Fuse::Binding__OnRooted_fn(__this);
    __this->_expressionSub = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(__this->Key()), ::TYPES[24/*Fuse.Reactive.IExpression*/]), (uObject*)__this, (uObject*)__this);
}

// protected override void OnUnrooted() :38
void ExpressionBinding__OnUnrooted_fn(ExpressionBinding* __this)
{
    if (__this->_expressionSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_expressionSub), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_expressionSub = NULL;
    }

    ::g::Fuse::Binding__OnUnrooted_fn(__this);
}

// public virtual Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :33
void ExpressionBinding__SubscribeResource_fn(ExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    U_THROW(::g::Uno::Exception::New2(::STRINGS[44/*"The binding...*/]));
}

// protected internal void WriteBack(object value) :18
void ExpressionBinding__WriteBack_fn(ExpressionBinding* __this, uObject* value)
{
    __this->WriteBack(value);
}

// protected ExpressionBinding(Fuse.Reactive.IExpression key) [instance] :10
void ExpressionBinding::ctor_1(uObject* key)
{
    ctor_();
    Key(key);
}

// protected internal bool get_CanWriteBack() [instance] :17
bool ExpressionBinding::CanWriteBack()
{
    return uIs((uObject*)_expressionSub, ::TYPES[30/*Fuse.Reactive.IWriteable*/]);
}

// public generated Fuse.Reactive.IExpression get_Key() [instance] :8
uObject* ExpressionBinding::Key()
{
    return _Key;
}

// private generated void set_Key(Fuse.Reactive.IExpression value) [instance] :8
void ExpressionBinding::Key(uObject* value)
{
    _Key = value;
}

// protected internal void WriteBack(object value) [instance] :18
void ExpressionBinding::WriteBack(uObject* value)
{
    ::g::Fuse::Reactive::IWriteable::TrySetExclusive(uInterface(uPtr(_expressionSub), ::TYPES[30/*Fuse.Reactive.IWriteable*/]), value);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/ExpressionListener.uno
// -----------------------------------------------------------------------------------------

// public abstract class ExpressionListener :152
// {
static void ExpressionListener_build(uType* type)
{
    ::STRINGS[45] = uString::Const("May not be null: listener");
    ::STRINGS[46] = uString::Const("May not be null: source");
    ::TYPES[11] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ExpressionListener_type, interface0),
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(ExpressionListener_type, interface1));
    type->SetFields(5,
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(ExpressionListener, _listener), 0,
        ::g::Uno::Bool_typeof(), offsetof(ExpressionListener, _hasData), 0,
        uObject_typeof(), offsetof(ExpressionListener, _curData), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(ExpressionListener, _source1), 0);
}

ExpressionListener_type* ExpressionListener_typeof()
{
    static uSStrong<ExpressionListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionSubscriber_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ExpressionListener);
    options.TypeSize = sizeof(ExpressionListener_type);
    type = (ExpressionListener_type*)uClassType::New("Fuse.Reactive.ExpressionListener", options);
    type->fp_build_ = ExpressionListener_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))ExpressionListener__Dispose_fn;
    type->fp_OnClearData = (void(*)(::g::Fuse::Reactive::ExpressionSubscriber*))ExpressionListener__OnClearData_fn;
    type->fp_OnDataCleared = ExpressionListener__OnDataCleared_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ExpressionListener__Dispose_fn;
    return type;
}

// protected ExpressionListener(Fuse.Reactive.Expression source, Fuse.Reactive.IListener listener, Fuse.Reactive.Expression[] args, [Fuse.Reactive.ExpressionSubscriber.Flags flags]) :162
void ExpressionListener__ctor_2_fn(ExpressionListener* __this, ::g::Fuse::Reactive::Expression* source, uObject* listener, uArray* args, int32_t* flags)
{
    __this->ctor_2(source, listener, args, *flags);
}

// protected void ClearData() :190
void ExpressionListener__ClearData_fn(ExpressionListener* __this)
{
    __this->ClearData();
}

// public override void Dispose() :174
void ExpressionListener__Dispose_fn(ExpressionListener* __this)
{
    __this->_listener = NULL;
    __this->_hasData = false;
    __this->_curData = NULL;
    ::g::Fuse::Reactive::ExpressionSubscriber__Dispose_fn(__this);
}

// internal Fuse.Reactive.IListener get_Listener() :160
void ExpressionListener__get_Listener_fn(ExpressionListener* __this, uObject** __retval)
{
    *__retval = __this->Listener();
}

// internal override void OnClearData() :185
void ExpressionListener__OnClearData_fn(ExpressionListener* __this)
{
    __this->ClearData();
}

// protected virtual void OnDataCleared() :202
void ExpressionListener__OnDataCleared_fn(ExpressionListener* __this)
{
}

// protected void SetData(object value) :205
void ExpressionListener__SetData_fn(ExpressionListener* __this, uObject* value)
{
    __this->SetData(value);
}

// protected ExpressionListener(Fuse.Reactive.Expression source, Fuse.Reactive.IListener listener, Fuse.Reactive.Expression[] args, [Fuse.Reactive.ExpressionSubscriber.Flags flags]) [instance] :162
void ExpressionListener::ctor_2(::g::Fuse::Reactive::Expression* source, uObject* listener, uArray* args, int32_t flags)
{
    ctor_1(args, flags, source);

    if (listener == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[45/*"May not be ...*/]));

    if (source == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[46/*"May not be ...*/]));

    _listener = listener;
    _source1 = source;
}

// protected void ClearData() [instance] :190
void ExpressionListener::ClearData()
{
    if (_hasData && (_listener != NULL))
    {
        _hasData = false;
        _curData = NULL;
        ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)_source1);
    }

    OnDataCleared();
}

// internal Fuse.Reactive.IListener get_Listener() [instance] :160
uObject* ExpressionListener::Listener()
{
    return _listener;
}

// protected void SetData(object value) [instance] :205
void ExpressionListener::SetData(uObject* value)
{
    if (!_hasData || (value != _curData))
    {
        _hasData = true;
        _curData = value;
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)_source1, value);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/ExpressionListener.uno
// -----------------------------------------------------------------------------------------

// public abstract class ExpressionSubscriber :14
// {
static void ExpressionSubscriber_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ExpressionSubscriber_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(ExpressionSubscriber_type, interface1));
    type->SetFields(2,
        uObject_typeof(), offsetof(ExpressionSubscriber, _source), 0,
        ExpressionSubscriber__Flags_typeof(), offsetof(ExpressionSubscriber, _flags), 0,
        ::g::Fuse::Reactive::Expression__Argument_typeof()->Array(), offsetof(ExpressionSubscriber, _args), 0);
}

ExpressionSubscriber_type* ExpressionSubscriber_typeof()
{
    static uSStrong<ExpressionSubscriber_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ExpressionSubscriber);
    options.TypeSize = sizeof(ExpressionSubscriber_type);
    type = (ExpressionSubscriber_type*)uClassType::New("Fuse.Reactive.ExpressionSubscriber", options);
    type->fp_build_ = ExpressionSubscriber_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))ExpressionSubscriber__Dispose_fn;
    type->fp_OnLostData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*))ExpressionSubscriber__OnLostData_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))ExpressionSubscriber__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ExpressionSubscriber__Dispose_fn;
    return type;
}

// internal ExpressionSubscriber(Fuse.Reactive.Expression[] args, Fuse.Reactive.ExpressionSubscriber.Flags flags, [object source]) :32
void ExpressionSubscriber__ctor_1_fn(ExpressionSubscriber* __this, uArray* args, int32_t* flags, uObject* source)
{
    __this->ctor_1(args, *flags, source);
}

// public override void Dispose() :125
void ExpressionSubscriber__Dispose_fn(ExpressionSubscriber* __this)
{
    for (int32_t i = 0; i < uPtr(__this->_args)->Length(); ++i)
        uPtr(uPtr(__this->_args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i))->Dispose();

    __this->_source = NULL;
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);
}

// public void Init(Fuse.Reactive.IContext context) :48
void ExpressionSubscriber__Init_fn(ExpressionSubscriber* __this, uObject* context)
{
    __this->Init(context);
}

// private bool IsOptional(int index) :82
void ExpressionSubscriber__IsOptional_fn(ExpressionSubscriber* __this, int32_t* index, bool* __retval)
{
    *__retval = __this->IsOptional(*index);
}

// protected override sealed void OnLostData(Fuse.Reactive.IExpression source) :68
void ExpressionSubscriber__OnLostData_fn(ExpressionSubscriber* __this, uObject* source)
{
    for (int32_t i = 0; i < uPtr(__this->_args)->Length(); ++i)
        if (uPtr(uPtr(__this->_args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i))->Source == source)
        {
            uPtr(uPtr(__this->_args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i))->Value(NULL);
            uPtr(uPtr(__this->_args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i))->HasValue(false);
        }

    __this->UpdateOperands();
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :55
void ExpressionSubscriber__OnNewData_fn(ExpressionSubscriber* __this, uObject* source, uObject* value)
{
    for (int32_t i = 0; i < uPtr(__this->_args)->Length(); ++i)
        if (uPtr(uPtr(__this->_args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i))->Source == source)
        {
            uPtr(uPtr(__this->_args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i))->Value(value);
            uPtr(uPtr(__this->_args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i))->HasValue(true);
        }

    __this->UpdateOperands();
}

// private void UpdateOperands() :97
void ExpressionSubscriber__UpdateOperands_fn(ExpressionSubscriber* __this)
{
    __this->UpdateOperands();
}

// internal ExpressionSubscriber(Fuse.Reactive.Expression[] args, Fuse.Reactive.ExpressionSubscriber.Flags flags, [object source]) [instance] :32
void ExpressionSubscriber::ctor_1(uArray* args, int32_t flags, uObject* source)
{
    ::g::Fuse::Reactive::Expression__Argument* collection1;
    ctor_();
    _flags = flags;
    _source = ((source != NULL) ? source : this);
    _args = uArray::New(::g::Fuse::Reactive::Expression__Argument_typeof()->Array(), uPtr(args)->Length());

    for (int32_t i = 0; i < args->Length(); ++i)
    {
        if (uPtr(args)->Strong< ::g::Fuse::Reactive::Expression*>(i) == NULL)
            U_THROW(::g::Uno::Exception::New2(uString::Const("May not contain null: args")));

        uPtr(_args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i) = (collection1 = ::g::Fuse::Reactive::Expression__Argument::New1(), uPtr(collection1)->Source = (uObject*)uPtr(args)->Strong< ::g::Fuse::Reactive::Expression*>(i), collection1);
    }
}

// public void Init(Fuse.Reactive.IContext context) [instance] :48
void ExpressionSubscriber::Init(uObject* context)
{
    for (int32_t i = 0; i < uPtr(_args)->Length(); ++i)
        uPtr(uPtr(_args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i))->Subscription = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(uPtr(uPtr(_args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i))->Source), ::TYPES[24/*Fuse.Reactive.IExpression*/]), context, (uObject*)this);

    UpdateOperands();
}

// private bool IsOptional(int index) [instance] :82
bool ExpressionSubscriber::IsOptional(int32_t index)
{
    if ((_flags & 1024) == 1024)
        return true;

    if (index == 0)
        return (_flags & 1) == 1;

    if (index == 1)
        return (_flags & 2) == 2;

    if (index == 2)
        return (_flags & 4) == 4;

    if (index == 3)
        return (_flags & 8) == 8;

    return false;
}

// private void UpdateOperands() [instance] :97
void ExpressionSubscriber::UpdateOperands()
{
    ClearDiagnostic();

    try
    {
        {
            bool okay = true;

            for (int32_t i = 0; i < uPtr(_args)->Length(); ++i)
                if (!uPtr(uPtr(_args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i))->HasValue() && !IsOptional(i))
                {
                    okay = false;
                    break;
                }

            if (okay)
                OnArguments(_args);
            else
                OnClearData();
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[33/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            OnClearData();
            SetDiagnostic(uPtr(me)->Message(), _source);
        }
        else         throw __t;
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/ExpressionListener.uno
// -----------------------------------------------------------------------------------------

// public enum ComputeExpression.Flags :226
uEnumType* ComputeExpression__Flags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.ComputeExpression.Flags", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "None", 0LL,
        "Optional0", 1LL,
        "Optional1", 2LL,
        "Optional2", 4LL,
        "Optional3", 8LL,
        "AllOptional", 16LL,
        "OmitComputeWarning", 32LL,
        "DeprecatedVirtualFlags", 1024LL,
        "DeprecatedVirtualUnary", 2048LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/ExpressionListener.uno
// -----------------------------------------------------------------------------------------

// public enum ExpressionSubscriber.Flags :17
uEnumType* ExpressionSubscriber__Flags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.ExpressionSubscriber.Flags", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "None", 0LL,
        "Optional0", 1LL,
        "Optional1", 2LL,
        "Optional2", 4LL,
        "Optional3", 8LL,
        "AllOptional", 1024LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/IExpression.uno
// ----------------------------------------------------------------------

// public abstract interface IContext :20
// {
uInterfaceType* IContext_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IContext", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/WindowList.uno
// ------------------------------------------------------------------------------

// public abstract interface WindowListItem.IDataWatcher :13
// {
uInterfaceType* WindowListItem__IDataWatcher_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.WindowListItem.IDataWatcher", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/IEventHandler.uno
// ------------------------------------------------------------------------

// public abstract interface IEventHandler :16
// {
uInterfaceType* IEventHandler_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IEventHandler", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/IEventHandler.uno
// ------------------------------------------------------------------------

// public abstract interface IEventRecord :8
// {
uInterfaceType* IEventRecord_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IEventRecord", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/IExpression.uno
// ----------------------------------------------------------------------

// public abstract interface IExpression :45
// {
uInterfaceType* IExpression_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IExpression", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/ItemsWindowList.uno
// -----------------------------------------------------------------------------------

// public abstract interface ItemsWindowList<T>.IListener :15
// {
uInterfaceType* ItemsWindowList__IListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.ItemsWindowList`1.IListener", 1, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/IExpression.uno
// ----------------------------------------------------------------------

// public abstract interface IListener :8
// {
uInterfaceType* IListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Subscription.uno
// -----------------------------------------------------------------------------------

// public abstract class InnerListener :19
// {
static void InnerListener_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(InnerListener_type, interface1));
    type->SetFields(0,
        ::g::Uno::IDisposable_typeof(), offsetof(InnerListener, _diag), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Reactive::IExpression_typeof(), InnerListener__ObservableSubscription_typeof(), NULL), offsetof(InnerListener, _obsSubs), 0);
}

InnerListener_type* InnerListener_typeof()
{
    static uSStrong<InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InnerListener);
    options.TypeSize = sizeof(InnerListener_type);
    type = (InnerListener_type*)uClassType::New("Fuse.Reactive.InnerListener", options);
    type->fp_build_ = InnerListener_build;
    type->fp_Dispose = InnerListener__Dispose_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))InnerListener__Dispose_fn;
    return type;
}

// protected generated InnerListener() :19
void InnerListener__ctor__fn(InnerListener* __this)
{
    __this->ctor_();
}

// public void ClearDiagnostic() :32
void InnerListener__ClearDiagnostic_fn(InnerListener* __this)
{
    __this->ClearDiagnostic();
}

// public virtual void Dispose() :41
void InnerListener__Dispose_fn(InnerListener* __this)
{
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong<InnerListener__ObservableSubscription*> > ret2;
    __this->ClearDiagnostic();

    if (__this->_obsSubs != NULL)
    {
        ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong<InnerListener__ObservableSubscription*> > enum1 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(__this->_obsSubs)->Values()), &ret2), ret2);

        {
            try
            {
                {
                    while (enum1.MoveNext(::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::TYPES[24/*Fuse.Reactive.IExpression*/], InnerListener__ObservableSubscription_typeof(), NULL)))
                    {
                        InnerListener__ObservableSubscription* k = enum1.Current(::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::TYPES[24/*Fuse.Reactive.IExpression*/], InnerListener__ObservableSubscription_typeof(), NULL));
                        uPtr(k)->Dispose();
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum1.Dispose(::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::TYPES[24/*Fuse.Reactive.IExpression*/], InnerListener__ObservableSubscription_typeof(), NULL));
                }
                                throw __t;
                goto __after_finally_0;
            }

            {
                enum1.Dispose(::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::TYPES[24/*Fuse.Reactive.IExpression*/], InnerListener__ObservableSubscription_typeof(), NULL));
            }
            __after_finally_0:;
        }

        uPtr(__this->_obsSubs)->Clear();
        __this->_obsSubs = NULL;
    }
}

// private void Fuse.Reactive.IListener.OnLostData(Fuse.Reactive.IExpression source) :77
void InnerListener__FuseReactiveIListenerOnLostData_fn(InnerListener* __this, uObject* source)
{
    __this->OnLostData(source);
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :55
void InnerListener__FuseReactiveIListenerOnNewData_fn(InnerListener* __this, uObject* source, uObject* value)
{
    bool ret3;
    bool ret4;
    InnerListener__ObservableSubscription* obsSub = NULL;

    if ((__this->_obsSubs != NULL) && (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_obsSubs), source, (void**)(&obsSub), &ret3), ret3))
    {
        uPtr(obsSub)->Dispose();
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_obsSubs), source, &ret4);
    }

    uObject* obs = uAs<uObject*>(value, ::TYPES[32/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        if (__this->_obsSubs == NULL)
            __this->_obsSubs = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[24/*Fuse.Reactive.IExpression*/], InnerListener__ObservableSubscription_typeof(), NULL)));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(__this->_obsSubs), source, InnerListener__ObservableSubscription::New1(source, obs, __this));
    }
    else
        __this->OnNewData(source, value);
}

// public void SetDiagnostic(string message, object source) :26
void InnerListener__SetDiagnostic_fn(InnerListener* __this, uString* message, uObject* source)
{
    __this->SetDiagnostic(message, source);
}

// protected generated InnerListener() [instance] :19
void InnerListener::ctor_()
{
}

// public void ClearDiagnostic() [instance] :32
void InnerListener::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[0/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void SetDiagnostic(string message, object source) [instance] :26
void InnerListener::SetDiagnostic(uString* message, uObject* source)
{
    ClearDiagnostic();
    _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(message, source);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Instantiator.uno
// --------------------------------------------------------------------------------

// public enum InstanceDefaults :58
uEnumType* InstanceDefaults_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.InstanceDefaults", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Standard", 0LL,
        "Default", 1LL,
        "None", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Instantiator.uno
// --------------------------------------------------------------------------------

// public enum InstanceDefer :15
uEnumType* InstanceDefer_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.InstanceDefer", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Immediate", 0LL,
        "Frame", 1LL,
        "Deferred", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Instantiator.uno
// --------------------------------------------------------------------------------

// public enum InstanceIdentity :43
uEnumType* InstanceIdentity_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.InstanceIdentity", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Key", 1LL,
        "Object", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Instantiator.uno
// --------------------------------------------------------------------------------

// public enum InstanceReuse :30
uEnumType* InstanceReuse_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.InstanceReuse", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Frame", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Instantiator.uno
// --------------------------------------------------------------------------------

// public partial class Instantiator :116
// {
static void Instantiator_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Triggers::BusyTask_typeof(),
        ::g::Fuse::DeferredManager_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Instantiator_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Instantiator_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Instantiator_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Instantiator_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface6),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(Instantiator_type, interface7),
        ::g::Fuse::IDeferred_typeof(), offsetof(Instantiator_type, interface8),
        ::g::Fuse::Reactive::ItemsWindowList__IListener_typeof()->MakeType(::g::Fuse::Reactive::WindowItem_typeof(), NULL), offsetof(Instantiator_type, interface9));
    type->SetFields(17,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(Instantiator, _busyTask), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Instantiator, _completedRemove), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), offsetof(Instantiator, _templates), 0,
        ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), offsetof(Instantiator, _rootTemplates), 0,
        ::g::Fuse::Reactive::InstanceDefer_typeof(), offsetof(Instantiator, _defer), 0,
        ::g::Fuse::Reactive::InstanceReuse_typeof(), offsetof(Instantiator, _reuse), 0,
        ::g::Uno::Float_typeof(), offsetof(Instantiator, _deferredPriority), 0,
        ::g::Fuse::ITemplateSource_typeof(), offsetof(Instantiator, _weakTemplateSource), uFieldFlagsWeak,
        ::g::Fuse::ITemplateSource_typeof(), offsetof(Instantiator, _templateSource), 0,
        ::g::Uno::String_typeof(), offsetof(Instantiator, _templateKey), 0,
        ::g::Uno::String_typeof(), offsetof(Instantiator, _matchKey), 0,
        ::g::Uno::String_typeof(), offsetof(Instantiator, _match), 0,
        ::g::Fuse::Reactive::InstanceDefaults_typeof(), offsetof(Instantiator, _defaults), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), ::g::Fuse::Reactive::WindowItem_typeof(), NULL), offsetof(Instantiator, _dataMap), 0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator, _pendingNew), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Reactive::WindowItem_typeof(), NULL), offsetof(Instantiator, _availableItemsById), 0,
        ::g::Fuse::Internal::ObjectList_typeof()->MakeType(::g::Fuse::Reactive::WindowItem_typeof(), NULL), offsetof(Instantiator, _availableItems), 0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator, _pendingAvailableItems), 0,
        ::g::Fuse::Reactive::ItemsWindowList_typeof()->MakeType(::g::Fuse::Reactive::WindowItem_typeof(), NULL), offsetof(Instantiator, _watcher), 0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator, _pendingUpdateWindowItems), 0,
        ::g::Uno::Action_typeof(), offsetof(Instantiator, UpdatedWindowItems1), 0);
}

Instantiator_type* Instantiator_typeof()
{
    static uSStrong<Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 38;
    options.InterfaceCount = 10;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(Instantiator);
    options.TypeSize = sizeof(Instantiator_type);
    type = (Instantiator_type*)uClassType::New("Fuse.Reactive.Instantiator", options);
    type->fp_build_ = Instantiator_build;
    type->fp_GetLastNodeInGroup = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node**))Instantiator__GetLastNodeInGroup_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Instantiator__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Instantiator__OnUnrooted_fn;
    type->interface9.fp_SetValid = (void(*)(uObject*))Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerSetValid_fn;
    type->interface9.fp_SetFailed = (void(*)(uObject*, uString*))Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerSetFailed_fn;
    type->interface7.fp_TryGetDataProvider = (void(*)(uObject*, ::g::Fuse::Node*, int32_t*, uObject**, int32_t*))Instantiator__FuseNodeISubtreeDataProviderTryGetDataProvider_fn;
    type->interface9.fp_AddedWindowItem = (void(*)(uObject*, int32_t*, ::g::Fuse::Reactive::WindowListItem*))Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerAddedWindowItem_fn;
    type->interface8.fp_Perform = (void(*)(uObject*, bool*))Instantiator__FuseIDeferredPerform_fn;
    type->interface9.fp_RemovedWindowItem = (void(*)(uObject*, ::g::Fuse::Reactive::WindowListItem*))Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerRemovedWindowItem_fn;
    type->interface9.fp_OnCurrentDataChanged = (void(*)(uObject*, ::g::Fuse::Reactive::WindowListItem*, uObject*))Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerOnCurrentDataChanged_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected internal Instantiator() :127
void Instantiator__ctor_3_fn(Instantiator* __this)
{
    __this->ctor_3();
}

// private bool AddMatchingTemplates(Fuse.Reactive.WindowItem item, Fuse.Reactive.TemplateMatch f) :690
void Instantiator__AddMatchingTemplates_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* item, ::g::Fuse::Reactive::TemplateMatch* f, bool* __retval)
{
    *__retval = __this->AddMatchingTemplates(item, *f);
}

// private void AddTemplate(Fuse.Reactive.WindowItem item, Uno.UX.Template f) :736
void Instantiator__AddTemplate_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* item, ::g::Uno::UX::Template* f)
{
    __this->AddTemplate(item, f);
}

// private void BroadcastDataChange(Fuse.Reactive.WindowItem wi, object oldData) :914
void Instantiator__BroadcastDataChange1_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* wi, uObject* oldData)
{
    __this->BroadcastDataChange1(wi, oldData);
}

// private void CleanupWindowItem(Fuse.Reactive.WindowItem wi) :843
void Instantiator__CleanupWindowItem_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* wi)
{
    __this->CleanupWindowItem(wi);
}

// private void CompletedRemove(Fuse.Node n) :184
void Instantiator__CompletedRemove_fn(Instantiator* __this, ::g::Fuse::Node* n)
{
    __this->CompletedRemove(n);
}

// private void CompleteWindowItem(Fuse.Reactive.WindowItem wi, int windowIndex) :664
void Instantiator__CompleteWindowItem_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* wi, int32_t* windowIndex)
{
    __this->CompleteWindowItem(wi, *windowIndex);
}

// private bool CompleteWindowItems(bool one) :592
void Instantiator__CompleteWindowItems_fn(Instantiator* __this, bool* one, bool* __retval)
{
    *__retval = __this->CompleteWindowItems(*one);
}

// private void CompleteWindowItemsAction() :586
void Instantiator__CompleteWindowItemsAction_fn(Instantiator* __this)
{
    __this->CompleteWindowItemsAction();
}

// internal int get_DataCount() :517
void Instantiator__get_DataCount_fn(Instantiator* __this, int32_t* __retval)
{
    *__retval = __this->DataCount();
}

// internal int DataIndexOfChild(Fuse.Node child) :499
void Instantiator__DataIndexOfChild_fn(Instantiator* __this, ::g::Fuse::Node* child, int32_t* __retval)
{
    *__retval = __this->DataIndexOfChild(child);
}

// public Fuse.Reactive.InstanceDefaults get_Defaults() :486
void Instantiator__get_Defaults_fn(Instantiator* __this, int32_t* __retval)
{
    *__retval = __this->Defaults();
}

// public void set_Defaults(Fuse.Reactive.InstanceDefaults value) :487
void Instantiator__set_Defaults_fn(Instantiator* __this, int32_t* value)
{
    __this->Defaults(*value);
}

// public Fuse.Reactive.InstanceDefer get_Defer() :231
void Instantiator__get_Defer_fn(Instantiator* __this, int32_t* __retval)
{
    *__retval = __this->Defer();
}

// public void set_Defer(Fuse.Reactive.InstanceDefer value) :232
void Instantiator__set_Defer_fn(Instantiator* __this, int32_t* value)
{
    __this->Defer(*value);
}

// public float get_DeferredPriority() :296
void Instantiator__get_DeferredPriority_fn(Instantiator* __this, float* __retval)
{
    *__retval = __this->DeferredPriority();
}

// public void set_DeferredPriority(float value) :297
void Instantiator__set_DeferredPriority_fn(Instantiator* __this, float* value)
{
    __this->DeferredPriority(*value);
}

// private void DisposeWindowItem(Fuse.Reactive.WindowItem wi) :837
void Instantiator__DisposeWindowItem_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* wi)
{
    __this->DisposeWindowItem(wi);
}

// private bool Fuse.IDeferred.Perform() :580
void Instantiator__FuseIDeferredPerform_fn(Instantiator* __this, bool* __retval)
{
    __this->_pendingNew = __this->CompleteWindowItems(true);
    return *__retval = !__this->_pendingNew, void();
}

// private Fuse.Node.ContextDataResult Fuse.Node.ISubtreeDataProvider.TryGetDataProvider(Fuse.Node n, Fuse.Node.DataType type, object& provider) :519
void Instantiator__FuseNodeISubtreeDataProviderTryGetDataProvider_fn(Instantiator* __this, ::g::Fuse::Node* n, int32_t* type, uObject** provider, int32_t* __retval)
{
    bool ret15;
    int32_t type_ = *type;
    *provider = NULL;
    ::g::Fuse::Reactive::WindowItem* v;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dataMap), n, (void**)(&v), &ret15), ret15))
    {
        if (uIs((uObject*)uPtr(v)->Data(), Instantiator__NoContextItem_typeof()))
            return *__retval = 0, void();

        *provider = uPtr(v)->CurrentData();
        return *__retval = (type_ == 1) ? 2 : 0, void();
    }

    return *__retval = 0, void();
}

// private void Fuse.Reactive.ItemsWindowList<Fuse.Reactive.WindowItem>.IListener.AddedWindowItem(int windowIndex, Fuse.Reactive.WindowItem wi) :558
void Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerAddedWindowItem_fn(Instantiator* __this, int32_t* windowIndex, ::g::Fuse::Reactive::WindowItem* wi)
{
    int32_t windowIndex_ = *windowIndex;
    __this->PrepareWindowItem(windowIndex_, wi);
    __this->OnUpdatedWindowItems();
}

// private void Fuse.Reactive.ItemsWindowList<Fuse.Reactive.WindowItem>.IListener.OnCurrentDataChanged(Fuse.Reactive.WindowItem wi, object oldData) :894
void Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerOnCurrentDataChanged_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* wi, uObject* oldData)
{
    ::g::Fuse::Reactive::TemplateMatch tpl = __this->GetDataTemplate(uPtr(wi)->CurrentData());

    if (!tpl.Matches(wi->Template))
    {
        int32_t index = uPtr(__this->_watcher)->GetWindowItemIndex(wi);

        if (index == -1)
        {
            ::g::Fuse::Diagnostics::InternalError(uString::Const("Invalid WindowItem updated"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Instantiator.uno"), 903, uString::Const("Fuse.Reactive.ItemsWindowList<Fuse.Reactive.WindowItem>.IListener.OnCurrentDataChanged"));
            return;
        }

        __this->CleanupWindowItem(wi);
        __this->PrepareWindowItem(index, wi);
        return;
    }

    __this->BroadcastDataChange1(wi, oldData);
}

// private void Fuse.Reactive.ItemsWindowList<Fuse.Reactive.WindowItem>.IListener.RemovedWindowItem(Fuse.Reactive.WindowItem wi) :854
void Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerRemovedWindowItem_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* wi)
{
    bool ret16;

    if ((uPtr(wi)->Nodes == NULL) || (uPtr(uPtr(wi)->Nodes)->Count() == 0))
        return;

    bool generic = uPtr(wi)->Id() == NULL;

    if (wi->Id() != NULL)
    {
        if (__this->_availableItemsById == NULL)
            __this->_availableItemsById = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Reactive::WindowItem_typeof(), NULL)));

        if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(__this->_availableItemsById), uPtr(wi)->Id(), &ret16), ret16))
            generic = true;
        else
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_availableItemsById), uPtr(wi)->Id(), wi);
    }

    if (generic)
    {
        if (__this->_availableItems == NULL)
            __this->_availableItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::TYPES[46/*Fuse.Internal.ObjectList`1*/]->MakeType(::g::Fuse::Reactive::WindowItem_typeof(), NULL), 0));

        uPtr(__this->_availableItems)->Add(wi);
    }

    __this->ScheduleRemoveAvailableItems();
    __this->OnUpdatedWindowItems();
}

// private void Fuse.Reactive.ItemsWindowList<Fuse.Reactive.WindowItem>.IListener.SetFailed(string message) :169
void Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerSetFailed_fn(Instantiator* __this, uString* message)
{
    if (__this->Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(__this->Parent(), &__this->_busyTask, 16, message);
}

// private void Fuse.Reactive.ItemsWindowList<Fuse.Reactive.WindowItem>.IListener.SetValid() :163
void Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerSetValid_fn(Instantiator* __this)
{
    if (__this->Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(__this->Parent(), &__this->_busyTask, 0, ::STRINGS[8/*""*/]);
}

// private Fuse.Reactive.WindowItem GetAvailableNodes(Fuse.Reactive.TemplateMatch f, object id) :755
void Instantiator__GetAvailableNodes_fn(Instantiator* __this, ::g::Fuse::Reactive::TemplateMatch* f, uObject* id, ::g::Fuse::Reactive::WindowItem** __retval)
{
    *__retval = __this->GetAvailableNodes(*f, id);
}

// private Fuse.Reactive.TemplateMatch GetDataTemplate(object data) :618
void Instantiator__GetDataTemplate_fn(Instantiator* __this, uObject* data, ::g::Fuse::Reactive::TemplateMatch* __retval)
{
    *__retval = __this->GetDataTemplate(data);
}

// protected object GetItems() :391
void Instantiator__GetItems_fn(Instantiator* __this, uObject** __retval)
{
    *__retval = __this->GetItems();
}

// private Fuse.Node GetLastNodeFromIndex(int windowIndex) :538
void Instantiator__GetLastNodeFromIndex_fn(Instantiator* __this, int32_t* windowIndex, ::g::Fuse::Node** __retval)
{
    *__retval = __this->GetLastNodeFromIndex(*windowIndex);
}

// internal override sealed Fuse.Node GetLastNodeInGroup() :190
void Instantiator__GetLastNodeInGroup_fn(Instantiator* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->GetLastNodeFromIndex(uPtr(__this->_watcher)->WindowItemCount() - 1), void();
}

// internal bool get_HasLimit() :388
void Instantiator__get_HasLimit_fn(Instantiator* __this, bool* __retval)
{
    *__retval = __this->HasLimit();
}

// internal int get_Limit() :384
void Instantiator__get_Limit_fn(Instantiator* __this, int32_t* __retval)
{
    *__retval = __this->Limit();
}

// internal void set_Limit(int value) :385
void Instantiator__set_Limit_fn(Instantiator* __this, int32_t* value)
{
    __this->Limit(*value);
}

// public string get_Match() :457
void Instantiator__get_Match_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->Match();
}

// public void set_Match(string value) :458
void Instantiator__set_Match_fn(Instantiator* __this, uString* value)
{
    __this->Match(value);
}

// public string get_MatchKey() :429
void Instantiator__get_MatchKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->MatchKey();
}

// public void set_MatchKey(string value) :430
void Instantiator__set_MatchKey_fn(Instantiator* __this, uString* value)
{
    __this->MatchKey(value);
}

// internal int get_Offset() :378
void Instantiator__get_Offset_fn(Instantiator* __this, int32_t* __retval)
{
    *__retval = __this->Offset();
}

// internal void set_Offset(int value) :379
void Instantiator__set_Offset_fn(Instantiator* __this, int32_t* value)
{
    __this->Offset(*value);
}

// protected override sealed void OnRooted() :138
void Instantiator__OnRooted_fn(Instantiator* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    uPtr(__this->_watcher)->Rooted();

    if (__this->_rootTemplates != NULL)
        uPtr(__this->_rootTemplates)->Subscribe(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), (void*)Instantiator__OnTemplatesChanged_fn, __this), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), (void*)Instantiator__OnTemplatesChanged_fn, __this));

    __this->_templateSource = __this->_weakTemplateSource;
}

// private void OnTemplatesChanged(Uno.UX.Template factory) :132
void Instantiator__OnTemplatesChanged_fn(Instantiator* __this, ::g::Uno::UX::Template* factory)
{
    __this->OnTemplatesChanged(factory);
}

// protected override sealed void OnUnrooted() :149
void Instantiator__OnUnrooted_fn(Instantiator* __this)
{
    uPtr(__this->_watcher)->Unrooted();
    __this->RemoveAvailableItems();

    if (__this->_rootTemplates != NULL)
        uPtr(__this->_rootTemplates)->Unsubscribe();

    __this->_templateSource = NULL;
    __this->_completedRemove = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void OnUpdatedWindowItems() :927
void Instantiator__OnUpdatedWindowItems_fn(Instantiator* __this)
{
    __this->OnUpdatedWindowItems();
}

// private void PostUpdatedWindowItems() :937
void Instantiator__PostUpdatedWindowItems_fn(Instantiator* __this)
{
    __this->PostUpdatedWindowItems();
}

// private void PrepareDataContext(Fuse.Reactive.WindowItem wi) :726
void Instantiator__PrepareDataContext_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* wi)
{
    __this->PrepareDataContext(wi);
}

// private void PrepareWindowItem(int windowIndex, Fuse.Reactive.WindowItem wi) :564
void Instantiator__PrepareWindowItem_fn(Instantiator* __this, int32_t* windowIndex, ::g::Fuse::Reactive::WindowItem* wi)
{
    __this->PrepareWindowItem(*windowIndex, wi);
}

// private void RecreateTemplates() :883
void Instantiator__RecreateTemplates_fn(Instantiator* __this)
{
    __this->RecreateTemplates();
}

// private void RemoveAvailableItems() :818
void Instantiator__RemoveAvailableItems_fn(Instantiator* __this)
{
    __this->RemoveAvailableItems();
}

// private void RemoveAvailableItemsAction() :810
void Instantiator__RemoveAvailableItemsAction_fn(Instantiator* __this)
{
    __this->RemoveAvailableItemsAction();
}

// private void RemoveFromParent(Fuse.Node n) :177
void Instantiator__RemoveFromParent_fn(Instantiator* __this, ::g::Fuse::Node* n)
{
    __this->RemoveFromParent(n);
}

// public Fuse.Reactive.InstanceReuse get_Reuse() :251
void Instantiator__get_Reuse_fn(Instantiator* __this, int32_t* __retval)
{
    *__retval = __this->Reuse();
}

// public void set_Reuse(Fuse.Reactive.InstanceReuse value) :252
void Instantiator__set_Reuse_fn(Instantiator* __this, int32_t* value)
{
    __this->Reuse(*value);
}

// private void ScheduleRemoveAvailableItems() :793
void Instantiator__ScheduleRemoveAvailableItems_fn(Instantiator* __this)
{
    __this->ScheduleRemoveAvailableItems();
}

// protected void SetItems(object value) :393
void Instantiator__SetItems_fn(Instantiator* __this, uObject* value)
{
    __this->SetItems(value);
}

// public string get_TemplateKey() :365
void Instantiator__get_TemplateKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->TemplateKey();
}

// public void set_TemplateKey(string value) :366
void Instantiator__set_TemplateKey_fn(Instantiator* __this, uString* value)
{
    __this->TemplateKey(value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() :211
void Instantiator__get_Templates_fn(Instantiator* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// internal generated void add_UpdatedWindowItems(Uno.Action value) :925
void Instantiator__add_UpdatedWindowItems_fn(Instantiator* __this, uDelegate* value)
{
    __this->add_UpdatedWindowItems(value);
}

// internal generated void remove_UpdatedWindowItems(Uno.Action value) :925
void Instantiator__remove_UpdatedWindowItems_fn(Instantiator* __this, uDelegate* value)
{
    __this->remove_UpdatedWindowItems(value);
}

// protected internal Instantiator() [instance] :127
void Instantiator::ctor_3()
{
    _defer = 1;
    _deferredPriority = 0.0f;
    _dataMap = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[27/*Fuse.Node*/], ::g::Fuse::Reactive::WindowItem_typeof(), NULL)));
    _availableItemsById = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Reactive::WindowItem_typeof(), NULL)));
    _availableItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::TYPES[46/*Fuse.Internal.ObjectList`1*/]->MakeType(::g::Fuse::Reactive::WindowItem_typeof(), NULL), 0));
    ctor_2();
    _watcher = ((::g::Fuse::Reactive::ItemsWindowList*)::g::Fuse::Reactive::ItemsWindowList::New1(::g::Fuse::Reactive::ItemsWindowList_typeof()->MakeType(::g::Fuse::Reactive::WindowItem_typeof(), NULL), (uObject*)this));
}

// private bool AddMatchingTemplates(Fuse.Reactive.WindowItem item, Fuse.Reactive.TemplateMatch f) [instance] :690
bool Instantiator::AddMatchingTemplates(::g::Fuse::Reactive::WindowItem* item, ::g::Fuse::Reactive::TemplateMatch f)
{
    ::g::Uno::UX::Template* ret8;
    bool reuse = false;
    uObject* oldData = NULL;
    ::g::Fuse::Reactive::WindowItem* av = GetAvailableNodes(f, uPtr(item)->Id());

    if (av != NULL)
    {
        uPtr(item)->Nodes = uPtr(av)->Nodes;
        oldData = av->CurrentData();
        av->Nodes = NULL;
        reuse = true;
    }
    else if (f.All)
    {
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[35/*Uno.Collections.List`1*/]->MakeType(::TYPES[27/*Fuse.Node*/], NULL)));

        for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL))); ++i)
            AddTemplate(item, (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), uCRef<int32_t>(i), &ret8), ret8));
    }
    else if (f.Template == NULL)
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[35/*Uno.Collections.List`1*/]->MakeType(::TYPES[27/*Fuse.Node*/], NULL)));
    else
    {
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[35/*Uno.Collections.List`1*/]->MakeType(::TYPES[27/*Fuse.Node*/], NULL)));
        AddTemplate(item, f.Template);
    }

    PrepareDataContext(item);
    BroadcastDataChange1(item, oldData);
    item->Template = f;
    return reuse;
}

// private void AddTemplate(Fuse.Reactive.WindowItem item, Uno.UX.Template f) [instance] :736
void Instantiator::AddTemplate(::g::Fuse::Reactive::WindowItem* item, ::g::Uno::UX::Template* f)
{
    ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[27/*Fuse.Node*/]);

    if (elm == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Template contains a non-Node"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Instantiator.uno"), 741, uString::Const("AddTemplate"));
        return;
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(item)->Nodes), elm);
}

// private void BroadcastDataChange(Fuse.Reactive.WindowItem wi, object oldData) [instance] :914
void Instantiator::BroadcastDataChange1(::g::Fuse::Reactive::WindowItem* wi, uObject* oldData)
{
    ::g::Fuse::Node* ret9;

    if (uPtr(wi)->Nodes == NULL)
        return;

    for (int32_t i = 0; i < uPtr(uPtr(wi)->Nodes)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(wi)->Nodes), uCRef<int32_t>(i), &ret9), ret9))->BroadcastDataChange(oldData, uPtr(wi)->CurrentData());
}

// private void CleanupWindowItem(Fuse.Reactive.WindowItem wi) [instance] :843
void Instantiator::CleanupWindowItem(::g::Fuse::Reactive::WindowItem* wi)
{
    ::g::Fuse::Node* ret10;

    if (uPtr(wi)->Nodes != NULL)
    {
        for (int32_t n = 0; n < uPtr(uPtr(wi)->Nodes)->Count(); ++n)
            RemoveFromParent((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(wi)->Nodes), uCRef<int32_t>(n), &ret10), ret10));

        uPtr(wi)->Nodes = NULL;
    }
}

// private void CompletedRemove(Fuse.Node n) [instance] :184
void Instantiator::CompletedRemove(::g::Fuse::Node* n)
{
    bool ret11;
    uPtr(n)->OverrideContextParent = NULL;
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_dataMap), n, &ret11);
}

// private void CompleteWindowItem(Fuse.Reactive.WindowItem wi, int windowIndex) [instance] :664
void Instantiator::CompleteWindowItem(::g::Fuse::Reactive::WindowItem* wi, int32_t windowIndex)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret12;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret13;
    ::g::Fuse::Reactive::TemplateMatch match = GetDataTemplate(uPtr(wi)->CurrentData());
    bool reuse = AddMatchingTemplates(wi, match);

    if ((wi->Template.All && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL))) != uPtr(wi->Nodes)->Count())) || ((wi->Template.Template != NULL) && (uPtr(wi->Nodes)->Count() != 1)))
        ::g::Fuse::Diagnostics::InternalError(uString::Const("inconsistent instance state"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Instantiator.uno"), 672, uString::Const("CompleteWindowItem"));

    ::g::Fuse::Node* lastNode = GetLastNodeFromIndex(windowIndex - 1);

    if (reuse)
        uPtr(Parent())->InsertOrMoveNodesAfter(lastNode, uBox(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[27/*Fuse.Node*/], NULL), (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(uPtr(wi)->Nodes), &ret12), ret12)));
    else
        uPtr(Parent())->InsertNodesAfter(lastNode, uBox(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[27/*Fuse.Node*/], NULL), (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(uPtr(wi)->Nodes), &ret13), ret13)));
}

// private bool CompleteWindowItems(bool one) [instance] :592
bool Instantiator::CompleteWindowItems(bool one)
{
    if (!IsRootingStarted())
        return false;

    bool first = true;

    for (int32_t i = 0; i < uPtr(_watcher)->WindowItemCount(); ++i)
    {
        ::g::Fuse::Reactive::WindowItem* wi = (::g::Fuse::Reactive::WindowItem*)uPtr(_watcher)->GetWindowItem(i);

        if (uPtr(wi)->Nodes == NULL)
        {
            if (!first && one)
                return true;

            CompleteWindowItem(wi, i);
            first = false;
        }
    }

    RemoveAvailableItems();
    return false;
}

// private void CompleteWindowItemsAction() [instance] :586
void Instantiator::CompleteWindowItemsAction()
{
    CompleteWindowItems(false);
    _pendingNew = false;
}

// internal int get_DataCount() [instance] :517
int32_t Instantiator::DataCount()
{
    return uPtr(_watcher)->GetDataCount();
}

// internal int DataIndexOfChild(Fuse.Node child) [instance] :499
int32_t Instantiator::DataIndexOfChild(::g::Fuse::Node* child)
{
    ::g::Fuse::Node* ret14;

    for (int32_t i = 0; i < uPtr(_watcher)->WindowItemCount(); i++)
    {
        ::g::Fuse::Reactive::WindowItem* wi = (::g::Fuse::Reactive::WindowItem*)uPtr(_watcher)->GetWindowItem(i);
        ::g::Uno::Collections::List* list = uPtr(wi)->Nodes;

        if (list == NULL)
            continue;

        for (int32_t n = 0; n < uPtr(list)->Count(); n++)
            if ((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int32_t>(n), &ret14), ret14) == child)
                return i + Offset();
    }

    return -1;
}

// public Fuse.Reactive.InstanceDefaults get_Defaults() [instance] :486
int32_t Instantiator::Defaults()
{
    return _defaults;
}

// public void set_Defaults(Fuse.Reactive.InstanceDefaults value) [instance] :487
void Instantiator::Defaults(int32_t value)
{
    if (_defaults != value)
    {
        _defaults = value;
        RecreateTemplates();
    }
}

// public Fuse.Reactive.InstanceDefer get_Defer() [instance] :231
int32_t Instantiator::Defer()
{
    return _defer;
}

// public void set_Defer(Fuse.Reactive.InstanceDefer value) [instance] :232
void Instantiator::Defer(int32_t value)
{
    _defer = value;
}

// public float get_DeferredPriority() [instance] :296
float Instantiator::DeferredPriority()
{
    return _deferredPriority;
}

// public void set_DeferredPriority(float value) [instance] :297
void Instantiator::DeferredPriority(float value)
{
    _deferredPriority = value;
}

// private void DisposeWindowItem(Fuse.Reactive.WindowItem wi) [instance] :837
void Instantiator::DisposeWindowItem(::g::Fuse::Reactive::WindowItem* wi)
{
    CleanupWindowItem(wi);
    uPtr(wi)->Dispose();
}

// private Fuse.Reactive.WindowItem GetAvailableNodes(Fuse.Reactive.TemplateMatch f, object id) [instance] :755
::g::Fuse::Reactive::WindowItem* Instantiator::GetAvailableNodes(::g::Fuse::Reactive::TemplateMatch f, uObject* id)
{
    bool ret17;
    bool ret18;

    if ((id != NULL) && (_availableItemsById != NULL))
    {
        ::g::Fuse::Reactive::WindowItem* item;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_availableItemsById), id, (void**)(&item), &ret17), ret17) && f.Matches(uPtr(item)->Template))
        {
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_availableItemsById), id, &ret18);
            return item;
        }
    }

    if ((Reuse() != 0) && (_availableItems != NULL))

        for (int32_t i = 0; i < uPtr(_availableItems)->Count(); ++i)
        {
            ::g::Fuse::Reactive::WindowItem* av = (::g::Fuse::Reactive::WindowItem*)uPtr(_availableItems)->Item(i);

            if (f.Matches(uPtr(av)->Template))
            {
                uPtr(_availableItems)->RemoveAt(i);
                return av;
            }
        }

    return NULL;
}

// private Fuse.Reactive.TemplateMatch GetDataTemplate(object data) [instance] :618
::g::Fuse::Reactive::TemplateMatch Instantiator::GetDataTemplate(uObject* data)
{
    ::g::Fuse::Reactive::TemplateMatch collection1;
    uString* ind5;
    ::g::Fuse::Reactive::TemplateMatch collection2;
    ::g::Fuse::Reactive::TemplateMatch collection3;
    ::g::Uno::UX::Template* ret19;

    if (data == NULL)
    {
        collection1 = uDefault< ::g::Fuse::Reactive::TemplateMatch>();
        collection1.All = false;
        collection1.Template = NULL;
        return collection1;
    }

    ::g::Uno::UX::Template* useTemplate = NULL;
    ::g::Uno::UX::Template* defaultTemplate = NULL;

    if ((_templateSource != NULL) && ::g::Uno::String::op_Inequality(TemplateKey(), NULL))
    {
        ::g::Uno::UX::Template* t = ::g::Fuse::ITemplateSource::FindTemplate(uInterface(uPtr(_templateSource), ::g::Fuse::ITemplateSource_typeof()), TemplateKey());

        if (t != NULL)
            useTemplate = t;
    }

    if (useTemplate == NULL)
    {
        ind5 = Match();
        uString* key = (ind5 != NULL) ? ind5 : uAs<uString*>(uPtr(_watcher)->GetDataKey(data, MatchKey()), ::TYPES[5/*string*/]);

        for (int32_t i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL))) - 1; i >= 0; --i)
        {
            ::g::Uno::UX::Template* f = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), uCRef<int32_t>(i), &ret19), ret19);

            if (uPtr(f)->IsDefault())
                defaultTemplate = f;

            if (::g::Uno::String::op_Inequality(key, NULL) && ::g::Uno::String::op_Equality(uPtr(f)->Key(), key))
                useTemplate = f;
        }
    }

    if ((useTemplate == NULL) && (Defaults() != 2))
    {
        if (Defaults() == 1)
            useTemplate = defaultTemplate;
        else if ((::g::Uno::String::op_Inequality(MatchKey(), NULL) || ::g::Uno::String::op_Inequality(Match(), NULL)) || (defaultTemplate != NULL))
            useTemplate = defaultTemplate;
        else
        {
            collection2 = uDefault< ::g::Fuse::Reactive::TemplateMatch>();
            collection2.All = true;
            collection2.Template = NULL;
            return collection2;
        }
    }

    collection3 = uDefault< ::g::Fuse::Reactive::TemplateMatch>();
    collection3.All = false;
    collection3.Template = useTemplate;
    return collection3;
}

// protected object GetItems() [instance] :391
uObject* Instantiator::GetItems()
{
    return uPtr(_watcher)->GetItems();
}

// private Fuse.Node GetLastNodeFromIndex(int windowIndex) [instance] :538
::g::Fuse::Node* Instantiator::GetLastNodeFromIndex(int32_t windowIndex)
{
    ::g::Fuse::Node* ret20;

    if (windowIndex >= uPtr(_watcher)->WindowItemCount())
        windowIndex = uPtr(_watcher)->WindowItemCount() - 1;

    while (windowIndex >= 0)
    {
        ::g::Uno::Collections::List* lastList = uPtr((::g::Fuse::Reactive::WindowItem*)uPtr(_watcher)->GetWindowItem(windowIndex))->Nodes;

        if ((lastList != NULL) && (uPtr(lastList)->Count() != 0))
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastList), uCRef<int32_t>(uPtr(lastList)->Count() - 1), &ret20), ret20))->GetLastNodeInGroup();

        windowIndex--;
    }

    return this;
}

// internal bool get_HasLimit() [instance] :388
bool Instantiator::HasLimit()
{
    return uPtr(_watcher)->HasLimit();
}

// internal int get_Limit() [instance] :384
int32_t Instantiator::Limit()
{
    return uPtr(_watcher)->Limit();
}

// internal void set_Limit(int value) [instance] :385
void Instantiator::Limit(int32_t value)
{
    uPtr(_watcher)->Limit(value);
}

// public string get_Match() [instance] :457
uString* Instantiator::Match()
{
    return _match;
}

// public void set_Match(string value) [instance] :458
void Instantiator::Match(uString* value)
{
    if (::g::Uno::String::op_Inequality(_match, value))
    {
        _match = value;
        RecreateTemplates();
    }
}

// public string get_MatchKey() [instance] :429
uString* Instantiator::MatchKey()
{
    return _matchKey;
}

// public void set_MatchKey(string value) [instance] :430
void Instantiator::MatchKey(uString* value)
{
    if (::g::Uno::String::op_Inequality(_matchKey, value))
    {
        _matchKey = value;
        RecreateTemplates();
    }
}

// internal int get_Offset() [instance] :378
int32_t Instantiator::Offset()
{
    return uPtr(_watcher)->Offset();
}

// internal void set_Offset(int value) [instance] :379
void Instantiator::Offset(int32_t value)
{
    uPtr(_watcher)->Offset(value);
}

// private void OnTemplatesChanged(Uno.UX.Template factory) [instance] :132
void Instantiator::OnTemplatesChanged(::g::Uno::UX::Template* factory)
{
    if (!IsRootingCompleted())
        return;

    RecreateTemplates();
}

// private void OnUpdatedWindowItems() [instance] :927
void Instantiator::OnUpdatedWindowItems()
{
    if (::g::Uno::Delegate::op_Equality(UpdatedWindowItems1, NULL) || _pendingUpdateWindowItems)
        return;

    _pendingUpdateWindowItems = true;
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)Instantiator__PostUpdatedWindowItems_fn, this), -1, 2);
}

// private void PostUpdatedWindowItems() [instance] :937
void Instantiator::PostUpdatedWindowItems()
{
    if (::g::Uno::Delegate::op_Inequality(UpdatedWindowItems1, NULL))
        uPtr(UpdatedWindowItems1)->InvokeVoid();

    _pendingUpdateWindowItems = false;
}

// private void PrepareDataContext(Fuse.Reactive.WindowItem wi) [instance] :726
void Instantiator::PrepareDataContext(::g::Fuse::Reactive::WindowItem* wi)
{
    ::g::Fuse::Node* ret21;

    for (int32_t i = 0; i < uPtr(uPtr(wi)->Nodes)->Count(); ++i)
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(wi)->Nodes), uCRef<int32_t>(i), &ret21), ret21);
        uPtr(n)->OverrideContextParent = this;
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_dataMap), n, wi);
    }
}

// private void PrepareWindowItem(int windowIndex, Fuse.Reactive.WindowItem wi) [instance] :564
void Instantiator::PrepareWindowItem(int32_t windowIndex, ::g::Fuse::Reactive::WindowItem* wi)
{
    if (Defer() == 0)
        CompleteWindowItem(wi, windowIndex);
    else if (!_pendingNew)
    {
        if (Defer() == 2)
            ::g::Fuse::DeferredManager::AddPending((uObject*)this, ::g::Uno::Float2__New2(DeferredPriority(), (float)NodeDepth()));
        else
            ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)Instantiator__CompleteWindowItemsAction_fn, this), -1, 2);

        _pendingNew = true;
    }
}

// private void RecreateTemplates() [instance] :883
void Instantiator::RecreateTemplates()
{
    for (int32_t i = 0; i < uPtr(_watcher)->WindowItemCount(); i++)
        CleanupWindowItem((::g::Fuse::Reactive::WindowItem*)uPtr(_watcher)->GetWindowItem(i));

    for (int32_t i1 = 0; i1 < uPtr(_watcher)->WindowItemCount(); i1++)
        PrepareWindowItem(i1, (::g::Fuse::Reactive::WindowItem*)uPtr(_watcher)->GetWindowItem(i1));

    ScheduleRemoveAvailableItems();
}

// private void RemoveAvailableItems() [instance] :818
void Instantiator::RemoveAvailableItems()
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, uStrong< ::g::Fuse::Reactive::WindowItem*> > ret22;

    if (_availableItems != NULL)
    {
        for (int32_t i = 0; i < uPtr(_availableItems)->Count(); ++i)
            DisposeWindowItem((::g::Fuse::Reactive::WindowItem*)uPtr(_availableItems)->Item(i));

        uPtr(_availableItems)->Clear();
    }

    if (_availableItemsById != NULL)
    {
        ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, uStrong< ::g::Fuse::Reactive::WindowItem*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_availableItemsById), &ret22), ret22);

        {
            try
            {
                {
                    while (enum4.MoveNext(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Reactive::WindowItem_typeof(), NULL)))
                    {
                        ::g::Uno::Collections::KeyValuePair<uStrong<uObject*>, uStrong< ::g::Fuse::Reactive::WindowItem*> > kvp = enum4.Current(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Reactive::WindowItem_typeof(), NULL));
                        DisposeWindowItem(kvp.Value(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Reactive::WindowItem_typeof(), NULL)));
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum4.Dispose(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Reactive::WindowItem_typeof(), NULL));
                }
                                throw __t;
                goto __after_finally_1;
            }

            {
                enum4.Dispose(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Reactive::WindowItem_typeof(), NULL));
            }
            __after_finally_1:;
        }

        uPtr(_availableItemsById)->Clear();
    }

    _pendingNew = false;
}

// private void RemoveAvailableItemsAction() [instance] :810
void Instantiator::RemoveAvailableItemsAction()
{
    if (!_pendingNew)
        RemoveAvailableItems();

    _pendingAvailableItems = false;
}

// private void RemoveFromParent(Fuse.Node n) [instance] :177
void Instantiator::RemoveFromParent(::g::Fuse::Node* n)
{
    if (::g::Uno::Delegate::op_Equality(_completedRemove, NULL))
        _completedRemove = uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::TYPES[27/*Fuse.Node*/], NULL), (void*)Instantiator__CompletedRemove_fn, this);

    uPtr(Parent())->BeginRemoveChild(n, _completedRemove);
}

// public Fuse.Reactive.InstanceReuse get_Reuse() [instance] :251
int32_t Instantiator::Reuse()
{
    return _reuse;
}

// public void set_Reuse(Fuse.Reactive.InstanceReuse value) [instance] :252
void Instantiator::Reuse(int32_t value)
{
    _reuse = value;
}

// private void ScheduleRemoveAvailableItems() [instance] :793
void Instantiator::ScheduleRemoveAvailableItems()
{
    if (Reuse() == 1)
    {
        if (!_pendingAvailableItems)
        {
            ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)Instantiator__RemoveAvailableItemsAction_fn, this), -1, 2);
            _pendingAvailableItems = true;
        }
    }
    else if (!_pendingNew)
        RemoveAvailableItems();
}

// protected void SetItems(object value) [instance] :393
void Instantiator::SetItems(uObject* value)
{
    uPtr(_watcher)->SetItems(value);
}

// public string get_TemplateKey() [instance] :365
uString* Instantiator::TemplateKey()
{
    return _templateKey;
}

// public void set_TemplateKey(string value) [instance] :366
void Instantiator::TemplateKey(uString* value)
{
    if (::g::Uno::String::op_Inequality(_templateKey, value))
    {
        _templateKey = value;
        RecreateTemplates();
    }
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() [instance] :211
uObject* Instantiator::Templates()
{
    if (_templates != NULL)
        return _templates;

    _rootTemplates = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)));

    if (IsRootingCompleted())
        uPtr(_rootTemplates)->Subscribe(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), (void*)Instantiator__OnTemplatesChanged_fn, this), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), (void*)Instantiator__OnTemplatesChanged_fn, this));

    _templates = (uObject*)_rootTemplates;
    return _templates;
}

// internal generated void add_UpdatedWindowItems(Uno.Action value) [instance] :925
void Instantiator::add_UpdatedWindowItems(uDelegate* value)
{
    UpdatedWindowItems1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UpdatedWindowItems1, value), ::TYPES[23/*Uno.Action*/]);
}

// internal generated void remove_UpdatedWindowItems(Uno.Action value) [instance] :925
void Instantiator::remove_UpdatedWindowItems(uDelegate* value)
{
    UpdatedWindowItems1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UpdatedWindowItems1, value), ::TYPES[23/*Uno.Action*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/InstantiatorFunction.uno
// ----------------------------------------------------------------------------------------

// public abstract class InstantiatorFunction :12
// {
// static generated InstantiatorFunction() :12
static void InstantiatorFunction__cctor__fn(uType* __type)
{
    InstantiatorFunction::DataIndexName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("index"));
    InstantiatorFunction::OffsetIndexName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("offsetIndex"));
}

static void InstantiatorFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(3,
        ::g::Uno::UX::Selector_typeof(), offsetof(InstantiatorFunction, _item), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InstantiatorFunction::DataIndexName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InstantiatorFunction::OffsetIndexName_, uFieldFlagsStatic);
}

::g::Fuse::Reactive::Expression_type* InstantiatorFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InstantiatorFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.InstantiatorFunction", options);
    type->fp_build_ = InstantiatorFunction_build;
    type->fp_cctor_ = InstantiatorFunction__cctor__fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))InstantiatorFunction__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))InstantiatorFunction__ToString_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))InstantiatorFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :30
void InstantiatorFunction__Subscribe_fn(InstantiatorFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    ::g::Fuse::Reactive::Expression* ret1;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Arguments()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL))) > 1)
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(uString::Const("too many parameters for "), ::g::Uno::UX::Selector__op_Implicit1(__this->_item)), __this, ::STRINGS[48/*"/usr/local/...*/], 34, uString::Const("Subscribe"), NULL);
        return *__retval = NULL, void();
    }

    ::g::Fuse::Reactive::Expression* node = (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Arguments()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL))) > 0) ? (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Arguments()), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL)), uCRef<int32_t>(0), &ret1), ret1) : NULL;
    InstantiatorFunction__InstantiatorSubscription* ins = InstantiatorFunction__InstantiatorSubscription::New1(__this, __this->_item, listener, context, (uObject*)node);
    ins->Init(context);
    return *__retval = (uObject*)ins, void();
}

// public override sealed string ToString() :25
void InstantiatorFunction__ToString_fn(InstantiatorFunction* __this, uString** __retval)
{
    return *__retval = __this->FormatString(::g::Uno::UX::Selector__op_Implicit1(__this->_item)), void();
}

::g::Uno::UX::Selector InstantiatorFunction::DataIndexName_;
::g::Uno::UX::Selector InstantiatorFunction::OffsetIndexName_;
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/InstantiatorFunction.uno
// ----------------------------------------------------------------------------------------

// private sealed class InstantiatorFunction.InstantiatorSubscription :44
// {
static void InstantiatorFunction__InstantiatorSubscription_build(uType* type)
{
    ::STRINGS[47] = uString::Const("invalid search node for InstantiatorFunction");
    ::STRINGS[48] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/InstantiatorFunction.uno");
    ::STRINGS[49] = uString::Const("OnNewNode");
    ::STRINGS[50] = uString::Const("Could not find an Instantiator");
    ::STRINGS[51] = uString::Const("Unable to resolve Instantiator node");
    ::TYPES[23] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[24] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[11] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[27] = ::g::Fuse::Node_typeof();
    ::TYPES[12] = ::g::Fuse::Reactive::IContext_typeof();
    ::TYPES[31] = ::TYPES[27/*Fuse.Node*/]->MakeMethod(0/*FindBehavior<Fuse.Reactive.Instantiator>*/, ::g::Fuse::Reactive::Instantiator_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Reactive::InstantiatorFunction_typeof());
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::InstantiatorFunction_typeof(), offsetof(InstantiatorFunction__InstantiatorSubscription, _expr), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(InstantiatorFunction__InstantiatorSubscription, _item), 0,
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _listener), 0,
        ::TYPES[12/*Fuse.Reactive.IContext*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _context), 0,
        ::TYPES[24/*Fuse.Reactive.IExpression*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _node), 0,
        ::g::Fuse::Reactive::Instantiator_typeof(), offsetof(InstantiatorFunction__InstantiatorSubscription, _instantiator), 0,
        ::TYPES[27/*Fuse.Node*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _instance), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _nodeSub), 0);
}

::g::Fuse::Reactive::InnerListener_type* InstantiatorFunction__InstantiatorSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(InstantiatorFunction__InstantiatorSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", options);
    type->fp_build_ = InstantiatorFunction__InstantiatorSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))InstantiatorFunction__InstantiatorSubscription__Dispose_fn;
    type->fp_OnLostData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*))InstantiatorFunction__InstantiatorSubscription__OnLostData_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))InstantiatorFunction__InstantiatorSubscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))InstantiatorFunction__InstantiatorSubscription__Dispose_fn;
    return type;
}

// public InstantiatorSubscription(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) :59
void InstantiatorFunction__InstantiatorSubscription__ctor_1_fn(InstantiatorFunction__InstantiatorSubscription* __this, ::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector* item, uObject* listener, uObject* context, uObject* node)
{
    __this->ctor_1(expr, *item, listener, context, node);
}

// public override sealed void Dispose() :135
void InstantiatorFunction__InstantiatorSubscription__Dispose_fn(InstantiatorFunction__InstantiatorSubscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);
    __this->_expr = NULL;
    __this->_listener = NULL;

    if (__this->_instantiator != NULL)
        uPtr(__this->_instantiator)->remove_UpdatedWindowItems(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, __this));

    __this->_instantiator = NULL;

    if (__this->_nodeSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_nodeSub), ::TYPES[0/*Uno.IDisposable*/]));

    __this->_nodeSub = NULL;
    __this->_node = NULL;
}

// public void Init(Fuse.Reactive.IContext context) :70
void InstantiatorFunction__InstantiatorSubscription__Init_fn(InstantiatorFunction__InstantiatorSubscription* __this, uObject* context)
{
    __this->Init(context);
}

// public InstantiatorSubscription New(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) :59
void InstantiatorFunction__InstantiatorSubscription__New1_fn(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector* item, uObject* listener, uObject* context, uObject* node, InstantiatorFunction__InstantiatorSubscription** __retval)
{
    *__retval = InstantiatorFunction__InstantiatorSubscription::New1(expr, *item, listener, context, node);
}

// protected override sealed void OnLostData(Fuse.Reactive.IExpression source) :84
void InstantiatorFunction__InstantiatorSubscription__OnLostData_fn(InstantiatorFunction__InstantiatorSubscription* __this, uObject* source)
{
    if (source == __this->_node)
        ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(__this->_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)__this->_expr);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :78
void InstantiatorFunction__InstantiatorSubscription__OnNewData_fn(InstantiatorFunction__InstantiatorSubscription* __this, uObject* source, uObject* value)
{
    if (source == __this->_node)
        __this->OnNewNode(value);
}

// private void OnNewNode(object obj) :90
void InstantiatorFunction__InstantiatorSubscription__OnNewNode_fn(InstantiatorFunction__InstantiatorSubscription* __this, uObject* obj)
{
    __this->OnNewNode(obj);
}

// private void OnUpdatedWindowItems() :163
void InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn(InstantiatorFunction__InstantiatorSubscription* __this)
{
    __this->OnUpdatedWindowItems();
}

// private void PushValue() :149
void InstantiatorFunction__InstantiatorSubscription__PushValue_fn(InstantiatorFunction__InstantiatorSubscription* __this)
{
    __this->PushValue();
}

// public InstantiatorSubscription(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) [instance] :59
void InstantiatorFunction__InstantiatorSubscription::ctor_1(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector item, uObject* listener, uObject* context, uObject* node)
{
    ctor_();
    _node = node;
    _expr = expr;
    _item = item;
    _listener = listener;
    _context = context;
}

// public void Init(Fuse.Reactive.IContext context) [instance] :70
void InstantiatorFunction__InstantiatorSubscription::Init(uObject* context)
{
    if (_node == NULL)
        OnNewNode(NULL);
    else
        _nodeSub = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(_node), ::TYPES[24/*Fuse.Reactive.IExpression*/]), context, (uObject*)this);
}

// private void OnNewNode(object obj) [instance] :90
void InstantiatorFunction__InstantiatorSubscription::OnNewNode(uObject* obj)
{
    ::g::Fuse::Node* ind1;

    if (_instantiator != NULL)
    {
        uPtr(_instantiator)->remove_UpdatedWindowItems(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, this));
        _instantiator = NULL;
        _instance = NULL;
    }

    ind1 = uAs< ::g::Fuse::Node*>(obj, ::TYPES[27/*Fuse.Node*/]);
    ::g::Fuse::Node* searchNode = (ind1 != NULL) ? ind1 : (::g::Fuse::Node*)::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(_context), ::TYPES[12/*Fuse.Reactive.IContext*/]));

    if (searchNode == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[47/*"invalid sea...*/], this, ::STRINGS[48/*"/usr/local/...*/], 102, ::STRINGS[49/*"OnNewNode"*/], NULL);
        ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)_expr);
        return;
    }

    _instantiator = ((::g::Fuse::Reactive::Instantiator*)uPtr(searchNode)->FindBehavior(::TYPES[31/*Fuse.Node.FindBehavior<Fuse.Reactive.Instantiator>*/]));

    if (_instantiator == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[50/*"Could not f...*/], this, ::STRINGS[48/*"/usr/local/...*/], 110, ::STRINGS[49/*"OnNewNode"*/], NULL);
        ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)_expr);
        return;
    }

    ::g::Fuse::Node* p = ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(_context), ::TYPES[12/*Fuse.Reactive.IContext*/]));

    while ((p != NULL) && (uPtr(p)->ContextParent() != _instantiator))
        p = uPtr(p)->ContextParent();

    if (p == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[51/*"Unable to r...*/], this, ::STRINGS[48/*"/usr/local/...*/], 122, ::STRINGS[49/*"OnNewNode"*/]);
        ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)_expr);
        return;
    }

    if (_instantiator != NULL)
    {
        _instance = p;
        uPtr(_instantiator)->add_UpdatedWindowItems(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, this));
        PushValue();
    }
}

// private void OnUpdatedWindowItems() [instance] :163
void InstantiatorFunction__InstantiatorSubscription::OnUpdatedWindowItems()
{
    PushValue();
}

// private void PushValue() [instance] :149
void InstantiatorFunction__InstantiatorSubscription::PushValue()
{
    int32_t q = -1;

    if (::g::Uno::UX::Selector__op_Equality(_item, ::g::Fuse::Reactive::InstantiatorFunction::DataIndexName()))
        q = uPtr(_instantiator)->DataIndexOfChild(_instance);
    else if (::g::Uno::UX::Selector__op_Equality(_item, ::g::Fuse::Reactive::InstantiatorFunction::OffsetIndexName()))
        q = uPtr(_instantiator)->DataIndexOfChild(_instance) - uPtr(_instantiator)->Offset();

    if (q != -1)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)_expr, uBox<int32_t>(::TYPES[1/*int*/], q));
    else
        ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)_expr);
}

// public InstantiatorSubscription New(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) [static] :59
InstantiatorFunction__InstantiatorSubscription* InstantiatorFunction__InstantiatorSubscription::New1(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector item, uObject* listener, uObject* context, uObject* node)
{
    InstantiatorFunction__InstantiatorSubscription* obj2 = (InstantiatorFunction__InstantiatorSubscription*)uNew(InstantiatorFunction__InstantiatorSubscription_typeof());
    obj2->ctor_1(expr, item, listener, context, node);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/IObservable.uno
// ----------------------------------------------------------------------

// internal abstract interface IObservable :125
// {
uInterfaceType* IObservable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObservable", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/IObservable.uno
// ----------------------------------------------------------------------

// internal abstract interface IObservableArray :54
// {
uInterfaceType* IObservableArray_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObservableArray", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/IObservable.uno
// ----------------------------------------------------------------------

// internal abstract interface IObservableObject :16
// {
uInterfaceType* IObservableObject_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObservableObject", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/IObservable.uno
// ----------------------------------------------------------------------

// internal abstract interface IObserver :142
// {
uInterfaceType* IObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObserver", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/IObservable.uno
// ----------------------------------------------------------------------

// internal abstract interface IPropertyObserver :28
// {
uInterfaceType* IPropertyObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IPropertyObserver", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/IObservable.uno
// ----------------------------------------------------------------------

// internal abstract interface IPropertySubscription :22
// {
uInterfaceType* IPropertySubscription_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IPropertySubscription", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/PlatformFunctions.uno
// ----------------------------------------------------------------------------------------

// public sealed class IsAndroidFunction :77
// {
static void IsAndroidFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::PlatformFunction_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::PlatformFunction_type, interface1));
    type->SetFields(3);
}

::g::Fuse::Reactive::PlatformFunction_type* IsAndroidFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::PlatformFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::PlatformFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IsAndroidFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::PlatformFunction_type);
    type = (::g::Fuse::Reactive::PlatformFunction_type*)uClassType::New("Fuse.Reactive.IsAndroidFunction", options);
    type->fp_build_ = IsAndroidFunction_build;
    type->fp_GetResult = (void(*)(::g::Fuse::Reactive::PlatformFunction*, bool*))IsAndroidFunction__GetResult_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::PlatformFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected override sealed bool GetResult() :81
void IsAndroidFunction__GetResult_fn(IsAndroidFunction* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/IsDefined.uno
// --------------------------------------------------------------------------------

// public sealed class IsDefined :17
// {
static void IsDefined_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ComputeExpression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::ComputeExpression_type, interface1));
    type->SetFields(5);
}

::g::Fuse::Reactive::ComputeExpression_type* IsDefined_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ComputeExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ComputeExpression_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IsDefined);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ComputeExpression_type);
    type = (::g::Fuse::Reactive::ComputeExpression_type*)uClassType::New("Fuse.Reactive.IsDefined", options);
    type->fp_build_ = IsDefined_build;
    type->fp_TryCompute = (void(*)(::g::Fuse::Reactive::ComputeExpression*, uArray*, uObject**, bool*))IsDefined__TryCompute_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ComputeExpression__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected override sealed bool TryCompute(Fuse.Reactive.Expression.Argument[] args, object& result) :26
void IsDefined__TryCompute_fn(IsDefined* __this, uArray* args, uObject** result, bool* __retval)
{
    *result = uBox(::TYPES[4/*bool*/], uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->HasValue());
    return *__retval = true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/PlatformFunctions.uno
// ----------------------------------------------------------------------------------------

// public sealed class IsDesktopFunction :68
// {
static void IsDesktopFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::PlatformFunction_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::PlatformFunction_type, interface1));
    type->SetFields(3);
}

::g::Fuse::Reactive::PlatformFunction_type* IsDesktopFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::PlatformFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::PlatformFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IsDesktopFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::PlatformFunction_type);
    type = (::g::Fuse::Reactive::PlatformFunction_type*)uClassType::New("Fuse.Reactive.IsDesktopFunction", options);
    type->fp_build_ = IsDesktopFunction_build;
    type->fp_GetResult = (void(*)(::g::Fuse::Reactive::PlatformFunction*, bool*))IsDesktopFunction__GetResult_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::PlatformFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected override sealed bool GetResult() :72
void IsDesktopFunction__GetResult_fn(IsDesktopFunction* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/PlatformFunctions.uno
// ----------------------------------------------------------------------------------------

// public sealed class IsIOSFunction :59
// {
static void IsIOSFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::PlatformFunction_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::PlatformFunction_type, interface1));
    type->SetFields(3);
}

::g::Fuse::Reactive::PlatformFunction_type* IsIOSFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::PlatformFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::PlatformFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IsIOSFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::PlatformFunction_type);
    type = (::g::Fuse::Reactive::PlatformFunction_type*)uClassType::New("Fuse.Reactive.IsIOSFunction", options);
    type->fp_build_ = IsIOSFunction_build;
    type->fp_GetResult = (void(*)(::g::Fuse::Reactive::PlatformFunction*, bool*))IsIOSFunction__GetResult_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::PlatformFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected override sealed bool GetResult() :63
void IsIOSFunction__GetResult_fn(IsIOSFunction* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/PlatformFunctions.uno
// ----------------------------------------------------------------------------------------

// public sealed class IsMobileFunction :86
// {
static void IsMobileFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::PlatformFunction_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::PlatformFunction_type, interface1));
    type->SetFields(3);
}

::g::Fuse::Reactive::PlatformFunction_type* IsMobileFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::PlatformFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::PlatformFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IsMobileFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::PlatformFunction_type);
    type = (::g::Fuse::Reactive::PlatformFunction_type*)uClassType::New("Fuse.Reactive.IsMobileFunction", options);
    type->fp_build_ = IsMobileFunction_build;
    type->fp_GetResult = (void(*)(::g::Fuse::Reactive::PlatformFunction*, bool*))IsMobileFunction__GetResult_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::PlatformFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected override sealed bool GetResult() :90
void IsMobileFunction__GetResult_fn(IsMobileFunction* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/PlatformFunctions.uno
// ----------------------------------------------------------------------------------------

// public sealed class IsOSXFunction :95
// {
static void IsOSXFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::PlatformFunction_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::PlatformFunction_type, interface1));
    type->SetFields(3);
}

::g::Fuse::Reactive::PlatformFunction_type* IsOSXFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::PlatformFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::PlatformFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IsOSXFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::PlatformFunction_type);
    type = (::g::Fuse::Reactive::PlatformFunction_type*)uClassType::New("Fuse.Reactive.IsOSXFunction", options);
    type->fp_build_ = IsOSXFunction_build;
    type->fp_GetResult = (void(*)(::g::Fuse::Reactive::PlatformFunction*, bool*))IsOSXFunction__GetResult_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::PlatformFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected override sealed bool GetResult() :99
void IsOSXFunction__GetResult_fn(IsOSXFunction* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/IObservable.uno
// ----------------------------------------------------------------------

// internal abstract interface ISubscription :131
// {
uInterfaceType* ISubscription_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.ISubscription", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/PlatformFunctions.uno
// ----------------------------------------------------------------------------------------

// public sealed class IsWindowsFunction :104
// {
static void IsWindowsFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::PlatformFunction_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::PlatformFunction_type, interface1));
    type->SetFields(3);
}

::g::Fuse::Reactive::PlatformFunction_type* IsWindowsFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::PlatformFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::PlatformFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IsWindowsFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::PlatformFunction_type);
    type = (::g::Fuse::Reactive::PlatformFunction_type*)uClassType::New("Fuse.Reactive.IsWindowsFunction", options);
    type->fp_build_ = IsWindowsFunction_build;
    type->fp_GetResult = (void(*)(::g::Fuse::Reactive::PlatformFunction*, bool*))IsWindowsFunction__GetResult_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::PlatformFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected override sealed bool GetResult() :108
void IsWindowsFunction__GetResult_fn(IsWindowsFunction* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/ItemsWindowList.uno
// -----------------------------------------------------------------------------------

// internal partial sealed class ItemsWindowList<T> :12
// {
static void ItemsWindowList_build(uType* type)
{
    type->SetBase(::g::Fuse::Reactive::WindowList_typeof()->MakeType(type->T(0), NULL));
    type->SetPrecalc(
        ::g::Fuse::Reactive::WindowListItem_typeof()->MakeMethod(0/*Create<T>*/, type->T(0), NULL),
        ItemsWindowList__IListener_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(ItemsWindowList_type, interface0),
        ::g::Fuse::Reactive::WindowListItem__IDataWatcher_typeof(), offsetof(ItemsWindowList_type, interface1));
    type->SetFields(5,
        ItemsWindowList__IListener_typeof()->MakeType(type->T(0), NULL), offsetof(ItemsWindowList, _listener), uFieldFlagsWeak,
        ::g::Fuse::Reactive::InstanceIdentity_typeof(), offsetof(ItemsWindowList, Identity), 0,
        ::g::Uno::String_typeof(), offsetof(ItemsWindowList, _identityKey), 0,
        uObject_typeof(), offsetof(ItemsWindowList, _items), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(ItemsWindowList, _itemsSubscription), 0,
        ::g::Uno::Bool_typeof(), offsetof(ItemsWindowList, _isRooted), 0);
}

ItemsWindowList_type* ItemsWindowList_typeof()
{
    static uSStrong<ItemsWindowList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::WindowList_typeof();
    options.FieldCount = 11;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ItemsWindowList);
    options.TypeSize = sizeof(ItemsWindowList_type);
    type = (ItemsWindowList_type*)uClassType::New("Fuse.Reactive.ItemsWindowList`1", options);
    type->fp_build_ = ItemsWindowList_build;
    type->fp_CreateWindowItem = (void(*)(::g::Fuse::Reactive::WindowList*, int32_t*, uObject**))ItemsWindowList__CreateWindowItem_fn;
    type->fp_GetDataCount = (void(*)(::g::Fuse::Reactive::WindowList*, int32_t*))ItemsWindowList__GetDataCount_fn;
    type->fp_OnAddedWindowItem = (void(*)(::g::Fuse::Reactive::WindowList*, int32_t*, uObject*))ItemsWindowList__OnAddedWindowItem_fn;
    type->fp_OnErrorMessageChanged = (void(*)(::g::Fuse::Reactive::WindowList*, uString*))ItemsWindowList__OnErrorMessageChanged_fn;
    type->fp_OnRemovedWindowItem = (void(*)(::g::Fuse::Reactive::WindowList*, uObject*))ItemsWindowList__OnRemovedWindowItem_fn;
    type->interface1.fp_OnCurrentDataChanged = (void(*)(uObject*, ::g::Fuse::Reactive::WindowListItem*, uObject*))ItemsWindowList__FuseReactiveWindowListItemIDataWatcherOnCurrentDataChanged_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))ItemsWindowList__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))ItemsWindowList__FuseReactiveIObserverOnFailed_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))ItemsWindowList__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))ItemsWindowList__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))ItemsWindowList__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))ItemsWindowList__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))ItemsWindowList__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))ItemsWindowList__FuseReactiveIObserverOnClear_fn;
    return type;
}

// public ItemsWindowList(Fuse.Reactive.ItemsWindowList<T>.IListener listener) :29
void ItemsWindowList__ctor_1_fn(ItemsWindowList* __this, uObject* listener)
{
    __this->ctor_1(listener);
}

// protected override sealed T CreateWindowItem(int dataIndex) :178
void ItemsWindowList__CreateWindowItem_fn(ItemsWindowList* __this, int32_t* dataIndex, ::g::Fuse::Reactive::WindowListItem** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Reactive.WindowListItem.Create<T>*/),
    };
    int32_t dataIndex_ = *dataIndex;
    uObject* data = __this->GetData(dataIndex_);
    ::g::Fuse::Reactive::WindowListItem* wi = (::g::Fuse::Reactive::WindowListItem*)::g::Fuse::Reactive::WindowListItem::Create(__types[0], (uObject*)__this, __this->GetDataId(data), data);
    return *__retval = wi, void();
}

// private void DisposeItemsSubscription() :76
void ItemsWindowList__DisposeItemsSubscription_fn(ItemsWindowList* __this)
{
    __this->DisposeItemsSubscription();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :286
void ItemsWindowList__FuseReactiveIObserverOnAdd_fn(ItemsWindowList* __this, uObject* addedValue)
{
    __this->TrimAndPad();
}

// private void Fuse.Reactive.IObserver.OnClear() :323
void ItemsWindowList__FuseReactiveIObserverOnClear_fn(ItemsWindowList* __this)
{
    __this->RemoveAll();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :280
void ItemsWindowList__FuseReactiveIObserverOnFailed_fn(ItemsWindowList* __this, uString* message)
{
    __this->RemoveAll();
    __this->SetError(message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :297
void ItemsWindowList__FuseReactiveIObserverOnInsertAt_fn(ItemsWindowList* __this, int32_t* index, uObject* value)
{
    int32_t index_ = *index;
    __this->InsertedDataAt(index_);
    __this->TrimAndPad();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :314
void ItemsWindowList__FuseReactiveIObserverOnNewAll_fn(ItemsWindowList* __this, uObject* values)
{
    if (__this->Identity != 0)
        __this->PatchTo(values);
    else
        __this->RemoveAll();

    __this->TrimAndPad();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :303
void ItemsWindowList__FuseReactiveIObserverOnNewAt_fn(ItemsWindowList* __this, int32_t* index, uObject* value)
{
    int32_t index_ = *index;

    if (!__this->TryUpdateAt(index_, value))
    {
        __this->RemovedDataAt(index_);
        __this->InsertedDataAt(index_);
    }

    __this->TrimAndPad();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :291
void ItemsWindowList__FuseReactiveIObserverOnRemoveAt_fn(ItemsWindowList* __this, int32_t* index)
{
    int32_t index_ = *index;
    __this->RemovedDataAt(index_);
    __this->TrimAndPad();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :274
void ItemsWindowList__FuseReactiveIObserverOnSet_fn(ItemsWindowList* __this, uObject* newValue)
{
    __this->RemoveAll();
    __this->TrimAndPad();
}

// private void Fuse.Reactive.WindowListItem.IDataWatcher.OnCurrentDataChanged(Fuse.Reactive.WindowListItem item, object oldData) :164
void ItemsWindowList__FuseReactiveWindowListItemIDataWatcherOnCurrentDataChanged_fn(ItemsWindowList* __this, ::g::Fuse::Reactive::WindowListItem* item, uObject* oldData)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Reactive.ItemsWindowList<T>.IListener*/),
    };

    if (!__this->_isRooted)
        return;

    ::g::Fuse::Reactive::WindowListItem* wi = uAs< ::g::Fuse::Reactive::WindowListItem*>(item, __this->__type->T(0));

    if (wi == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Invalid item in WindowList"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/ItemsWindowList.uno"), 171, uString::Const("Fuse.Reactive.WindowListItem.IDataWatcher.OnCurrentDataChanged"));
        return;
    }

    ItemsWindowList__IListener::OnCurrentDataChanged(uInterface(uPtr(__this->_listener), __types[0]), wi, oldData);
}

// private object GetData(int dataIndex) :85
void ItemsWindowList__GetData_fn(ItemsWindowList* __this, int32_t* dataIndex, uObject** __retval)
{
    *__retval = __this->GetData(*dataIndex);
}

// public override sealed int GetDataCount() :205
void ItemsWindowList__GetDataCount_fn(ItemsWindowList* __this, int32_t* __retval)
{
    if (!__this->_isRooted)
        return *__retval = 0, void();

    uArray* e = uAs<uArray*>(__this->_items, ::TYPES[10/*object[]*/]);

    if (e != NULL)
        return *__retval = uPtr(e)->Length(), void();

    uObject* a = uAs<uObject*>(__this->_items, ::TYPES[13/*Fuse.IArray*/]);

    if (a != NULL)
        return *__retval = ::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[13/*Fuse.IArray*/])), void();

    return *__retval = 0, void();
}

// private object GetDataId(object data) :147
void ItemsWindowList__GetDataId_fn(ItemsWindowList* __this, uObject* data, uObject** __retval)
{
    *__retval = __this->GetDataId(data);
}

// internal object GetDataKey(object data, string key) :130
void ItemsWindowList__GetDataKey_fn(ItemsWindowList* __this, uObject* data, uString* key, uObject** __retval)
{
    *__retval = __this->GetDataKey(data, key);
}

// public object GetItems() :48
void ItemsWindowList__GetItems_fn(ItemsWindowList* __this, uObject** __retval)
{
    *__retval = __this->GetItems();
}

// public string get_IdentityKey() :39
void ItemsWindowList__get_IdentityKey_fn(ItemsWindowList* __this, uString** __retval)
{
    *__retval = __this->IdentityKey();
}

// public void set_IdentityKey(string value) :40
void ItemsWindowList__set_IdentityKey_fn(ItemsWindowList* __this, uString* value)
{
    __this->IdentityKey(value);
}

// private void ItemsChanged() :64
void ItemsWindowList__ItemsChanged_fn(ItemsWindowList* __this)
{
    __this->ItemsChanged();
}

// public ItemsWindowList New(Fuse.Reactive.ItemsWindowList<T>.IListener listener) :29
void ItemsWindowList__New1_fn(uType* __type, uObject* listener, ItemsWindowList** __retval)
{
    *__retval = ItemsWindowList::New1(__type, listener);
}

// protected override sealed void OnAddedWindowItem(int windowIndex, T wi) :200
void ItemsWindowList__OnAddedWindowItem_fn(ItemsWindowList* __this, int32_t* windowIndex, ::g::Fuse::Reactive::WindowListItem* wi)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Reactive.ItemsWindowList<T>.IListener*/),
    };
    int32_t windowIndex_ = *windowIndex;

    if (__this->_isRooted)
        ItemsWindowList__IListener::AddedWindowItem(uInterface(uPtr(__this->_listener), __types[0]), windowIndex_, wi);
}

// protected override sealed void OnErrorMessageChanged(string _errorMessage) :185
void ItemsWindowList__OnErrorMessageChanged_fn(ItemsWindowList* __this, uString* _errorMessage1)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Reactive.ItemsWindowList<T>.IListener*/),
    };

    if (!__this->_isRooted)
        return;

    if (::g::Uno::String::op_Inequality(_errorMessage1, NULL))
        ItemsWindowList__IListener::SetFailed(uInterface(uPtr(__this->_listener), __types[0]), _errorMessage1);
    else
        ItemsWindowList__IListener::SetValid(uInterface(uPtr(__this->_listener), __types[0]));
}

// protected override sealed void OnRemovedWindowItem(T wi) :195
void ItemsWindowList__OnRemovedWindowItem_fn(ItemsWindowList* __this, ::g::Fuse::Reactive::WindowListItem* wi)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Reactive.ItemsWindowList<T>.IListener*/),
    };

    if (__this->_isRooted)
        ItemsWindowList__IListener::RemovedWindowItem(uInterface(uPtr(__this->_listener), __types[0]), wi);
}

// private void PatchTo(Fuse.IArray values) :238
void ItemsWindowList__PatchTo_fn(ItemsWindowList* __this, uObject* values)
{
    __this->PatchTo(values);
}

// private void Repopulate() :110
void ItemsWindowList__Repopulate_fn(ItemsWindowList* __this)
{
    __this->Repopulate();
}

// public void Rooted() :97
void ItemsWindowList__Rooted_fn(ItemsWindowList* __this)
{
    __this->Rooted();
}

// public void SetItems(object value) :50
void ItemsWindowList__SetItems_fn(ItemsWindowList* __this, uObject* value)
{
    __this->SetItems(value);
}

// private bool TryUpdateAt(int dataIndex, object newData) :220
void ItemsWindowList__TryUpdateAt_fn(ItemsWindowList* __this, int32_t* dataIndex, uObject* newData, bool* __retval)
{
    *__retval = __this->TryUpdateAt(*dataIndex, newData);
}

// public void Unrooted() :103
void ItemsWindowList__Unrooted_fn(ItemsWindowList* __this)
{
    __this->Unrooted();
}

// public ItemsWindowList(Fuse.Reactive.ItemsWindowList<T>.IListener listener) [instance] :29
void ItemsWindowList::ctor_1(uObject* listener)
{
    ctor_();
    _listener = listener;
}

// private void DisposeItemsSubscription() [instance] :76
void ItemsWindowList::DisposeItemsSubscription()
{
    if (_itemsSubscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_itemsSubscription), ::TYPES[0/*Uno.IDisposable*/]));
        _itemsSubscription = NULL;
    }
}

// private object GetData(int dataIndex) [instance] :85
uObject* ItemsWindowList::GetData(int32_t dataIndex)
{
    uArray* e = uAs<uArray*>(_items, ::TYPES[10/*object[]*/]);

    if (e != NULL)
        return uPtr(e)->Strong<uObject*>(dataIndex);

    uObject* a = uAs<uObject*>(_items, ::TYPES[13/*Fuse.IArray*/]);

    if (a != NULL)
        return ::g::Fuse::IArray::Item(uInterface(uPtr(a), ::TYPES[13/*Fuse.IArray*/]), dataIndex);

    return NULL;
}

// private object GetDataId(object data) [instance] :147
uObject* ItemsWindowList::GetDataId(uObject* data)
{
    switch (Identity)
    {
        case 0:
            return NULL;
        case 1:
            return GetDataKey(data, IdentityKey());
        case 2:
            return data;
    }

    return NULL;
}

// internal object GetDataKey(object data, string key) [instance] :130
uObject* ItemsWindowList::GetDataKey(uObject* data, uString* key)
{
    uObject* so = uAs<uObject*>(data, ::TYPES[34/*Fuse.IObject*/]);

    if ((so != NULL) && ::g::Uno::String::op_Inequality(key, NULL))
    {
        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(so), ::TYPES[34/*Fuse.IObject*/]), key))
            return ::g::Fuse::IObject::Item(uInterface(uPtr(so), ::TYPES[34/*Fuse.IObject*/]), key);
    }

    return NULL;
}

// public object GetItems() [instance] :48
uObject* ItemsWindowList::GetItems()
{
    return _items;
}

// public string get_IdentityKey() [instance] :39
uString* ItemsWindowList::IdentityKey()
{
    return _identityKey;
}

// public void set_IdentityKey(string value) [instance] :40
void ItemsWindowList::IdentityKey(uString* value)
{
    _identityKey = value;
    Identity = 1;
}

// private void ItemsChanged() [instance] :64
void ItemsWindowList::ItemsChanged()
{
    DisposeItemsSubscription();
    Repopulate();
    uObject* obs = uAs<uObject*>(_items, ::TYPES[15/*Fuse.Reactive.IObservableArray*/]);

    if (obs != NULL)
        _itemsSubscription = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(obs), ::TYPES[15/*Fuse.Reactive.IObservableArray*/]), (uObject*)this);
}

// private void PatchTo(Fuse.IArray values) [instance] :238
void ItemsWindowList::PatchTo(uObject* values)
{
    ::g::Uno::Collections::List* ret2;
    ::g::Fuse::Reactive::Internal::PatchItem ret3;
    ::g::Uno::Collections::List* newIds = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[35/*Uno.Collections.List`1*/]->MakeType(uObject_typeof(), NULL));
    int32_t limit = CalcOffsetLimitCountOf(::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[13/*Fuse.IArray*/])));

    for (int32_t i = 0; i < limit; ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(newIds), GetDataId(::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[13/*Fuse.IArray*/]), i + Offset())));

    ::g::Uno::Collections::List* curIds = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[35/*Uno.Collections.List`1*/]->MakeType(uObject_typeof(), NULL));

    for (int32_t i1 = 0; i1 < WindowItemCount(); ++i1)
        ::g::Uno::Collections::List__Add_fn(uPtr(curIds), uPtr((::g::Fuse::Reactive::WindowListItem*)GetWindowItem(i1))->Id());

    ::g::Uno::Collections::List* ops = (::g::Fuse::Reactive::Internal::PatchList__Patch_fn(::g::Fuse::Reactive::Internal::PatchList_typeof()->MakeMethod(0/*Patch<object>*/, uObject_typeof(), NULL), (uObject*)curIds, (uObject*)newIds, uCRef<int32_t>(1), NULL, &ret2), ret2);

    for (int32_t i2 = 0; i2 < uPtr(ops)->Count(); ++i2)
    {
        ::g::Fuse::Reactive::Internal::PatchItem op = (::g::Uno::Collections::List__get_Item_fn(uPtr(ops), uCRef<int32_t>(i2), &ret3), ret3);

        switch (op.Op)
        {
            case 0:
            {
                RemovedDataAt(op.A + Offset());
                break;
            }
            case 1:
            {
                InsertWindowItem(DataToWindowIndex(op.A + Offset()), op.Data);
                break;
            }
            case 2:
            {
                if (!TryUpdateAt(op.A + Offset(), ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[13/*Fuse.IArray*/]), op.Data)))
                {
                    RemovedDataAt(op.A + Offset());
                    InsertWindowItem(DataToWindowIndex(op.A + Offset()), op.Data);
                }

                break;
            }
        }
    }
}

// private void Repopulate() [instance] :110
void ItemsWindowList::Repopulate()
{
    RemoveAll();
    uArray* e = uAs<uArray*>(_items, ::TYPES[10/*object[]*/]);

    if (e != NULL)

        for (int32_t i = 0; i < uPtr(e)->Length(); i++)
            InsertedDataAt(i);
    else
    {
        uObject* a = uAs<uObject*>(_items, ::TYPES[13/*Fuse.IArray*/]);

        if (a != NULL)

            for (int32_t i1 = 0; i1 < ::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[13/*Fuse.IArray*/])); i1++)
                InsertedDataAt(i1);
    }
}

// public void Rooted() [instance] :97
void ItemsWindowList::Rooted()
{
    _isRooted = true;
    ItemsChanged();
}

// public void SetItems(object value) [instance] :50
void ItemsWindowList::SetItems(uObject* value)
{
    _items = value;

    if (!_isRooted)
        return;

    ItemsChanged();
}

// private bool TryUpdateAt(int dataIndex, object newData) [instance] :220
bool ItemsWindowList::TryUpdateAt(int32_t dataIndex, uObject* newData)
{
    if (Identity == 0)
        return false;

    int32_t windowIndex = DataToWindowIndex(dataIndex);

    if ((windowIndex < 0) || (windowIndex >= WindowItemCount()))
        return false;

    ::g::Fuse::Reactive::WindowListItem* wi = (::g::Fuse::Reactive::WindowListItem*)GetWindowItem(windowIndex);
    uObject* newId = GetDataId(newData);

    if ((uPtr(wi)->Id() == NULL) || !::g::Uno::Object::Equals1(uPtr(wi)->Id(), newId))
        return false;

    uPtr(wi)->Data(newData);
    return true;
}

// public void Unrooted() [instance] :103
void ItemsWindowList::Unrooted()
{
    RemoveAll();
    DisposeItemsSubscription();
    _isRooted = false;
}

// public ItemsWindowList New(Fuse.Reactive.ItemsWindowList<T>.IListener listener) [static] :29
ItemsWindowList* ItemsWindowList::New1(uType* __type, uObject* listener)
{
    ItemsWindowList* obj1 = (ItemsWindowList*)uNew(__type);
    obj1->ctor_1(listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/ValueObserver.uno
// ------------------------------------------------------------------------

// public abstract interface ValueForwarder.IValueListener :108
// {
uInterfaceType* ValueForwarder__IValueListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.ValueForwarder.IValueListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/IExpression.uno
// ----------------------------------------------------------------------

// public abstract interface IWriteable :37
// {
uInterfaceType* IWriteable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IWriteable", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScript.Dependencies.uno
// ----------------------------------------------------------------------------------------------

// public partial sealed class JavaScript :10
// {
static void JavaScript_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(JavaScript_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(JavaScript_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(JavaScript_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(JavaScript_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface6),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(JavaScript_type, interface7),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(JavaScript_type, interface8),
        ::g::Fuse::Node__ISiblingDataProvider_typeof(), offsetof(JavaScript_type, interface9),
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(JavaScript_type, interface10));
    type->SetFields(17,
        ::g::Uno::Collections::List_typeof()->MakeType(JavaScript__Dependency_typeof(), NULL), offsetof(JavaScript, _dependencies), 0,
        ::g::Fuse::Scripting::JavaScript::ModuleInstance_typeof(), offsetof(JavaScript, _moduleInstance), 0,
        ::g::Uno::Bool_typeof(), offsetof(JavaScript, _preserveModuleInstance), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(JavaScript, _nameTable), 0,
        ::g::Fuse::Scripting::JavaScript::RootableScriptModule_typeof(), offsetof(JavaScript, _scriptModule), 0,
        uObject_typeof(), offsetof(JavaScript, _currentDc), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(JavaScript, _sub), 0,
        uObject_typeof(), offsetof(JavaScript, _siblingData), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&JavaScript::_javaScriptCounter_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::JavaScript::ThreadWorker_typeof(), (uintptr_t)&JavaScript::Worker_, uFieldFlagsStatic);
}

JavaScript_type* JavaScript_typeof()
{
    static uSStrong<JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 27;
    options.InterfaceCount = 11;
    options.ObjectSize = sizeof(JavaScript);
    options.TypeSize = sizeof(JavaScript_type);
    type = (JavaScript_type*)uClassType::New("Fuse.Reactive.JavaScript", options);
    type->fp_build_ = JavaScript_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))JavaScript__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))JavaScript__OnUnrooted_fn;
    type->interface10.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))JavaScript__FuseReactiveIContextSubscribe_fn;
    type->interface10.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))JavaScript__FuseReactiveIContextSubscribeResource_fn;
    type->interface7.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))JavaScript__FuseScriptingIModuleProviderGetModule_fn;
    type->interface8.fp_NewValue = (void(*)(uObject*, uObject*))JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface8.fp_LostValue = (void(*)(uObject*))JavaScript__FuseReactiveValueForwarderIValueListenerLostValue_fn;
    type->interface9.fp_TryGetDataProvider = (void(*)(uObject*, int32_t*, uObject**, int32_t*))JavaScript__FuseNodeISiblingDataProviderTryGetDataProvider_fn;
    type->interface10.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))JavaScript__FuseReactiveIContextget_Node_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public JavaScript(Uno.UX.NameTable nameTable) :39
void JavaScript__ctor_3_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_3(nameTable);
}

// public Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency> get_Dependencies() :88
void JavaScript__get_Dependencies_fn(JavaScript* __this, uObject** __retval)
{
    *__retval = __this->Dependencies();
}

// internal void DispatchEvaluate() :129
void JavaScript__DispatchEvaluate_fn(JavaScript* __this)
{
    __this->DispatchEvaluate();
}

// private void DispatchEvaluateIfDependenciesReady() :113
void JavaScript__DispatchEvaluateIfDependenciesReady_fn(JavaScript* __this)
{
    __this->DispatchEvaluateIfDependenciesReady();
}

// private void DisposeDependencySubscriptions() :106
void JavaScript__DisposeDependencySubscriptions_fn(JavaScript* __this)
{
    __this->DisposeDependencySubscriptions();
}

// protected void DisposeModuleInstance() :137
void JavaScript__DisposeModuleInstance_fn(JavaScript* __this)
{
    __this->DisposeModuleInstance();
}

// private void DisposeSubscription() :136
void JavaScript__DisposeSubscription_fn(JavaScript* __this)
{
    __this->DisposeSubscription();
}

// internal static void EnsureVMStarted() :32
void JavaScript__EnsureVMStarted_fn()
{
    JavaScript::EnsureVMStarted();
}

// public Uno.UX.FileSource get_File() :170
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :171
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :178
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :179
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value)
{
    __this->FileName(value);
}

// private Fuse.Node.ContextDataResult Fuse.Node.ISiblingDataProvider.TryGetDataProvider(Fuse.Node.DataType type, object& provider) :130
void JavaScript__FuseNodeISiblingDataProviderTryGetDataProvider_fn(JavaScript* __this, int32_t* type, uObject** provider, int32_t* __retval)
{
    int32_t type_ = *type;
    *provider = (type_ == 0) ? (uObject*)__this->_siblingData : NULL;
    return *__retval = 0, void();
}

// private Fuse.Node Fuse.Reactive.IContext.get_Node() :154
void JavaScript__FuseReactiveIContextget_Node_fn(JavaScript* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this, void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :149
void JavaScript__FuseReactiveIContextSubscribe_fn(JavaScript* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::DataSubscription::New1(source, __this, key, listener), void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :156
void JavaScript__FuseReactiveIContextSubscribeResource_fn(JavaScript* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::ResourceSubscription::New1(source, __this, key, listener, uObject_typeof()), void();
}

// private void Fuse.Reactive.ValueForwarder.IValueListener.LostValue() :117
void JavaScript__FuseReactiveValueForwarderIValueListenerLostValue_fn(JavaScript* __this)
{
    __this->SetSiblingData(NULL);
}

// private void Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object data) :112
void JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn(JavaScript* __this, uObject* data)
{
    __this->SetSiblingData(data);
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :82
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval)
{
    if (__this->IsRootingCompleted())
        U_THROW(::g::Uno::Exception::New2(uString::Const("Cannot require() a rooted module")));

    return *__retval = __this->_scriptModule, void();
}

// public int get_LineNumber() :163
void JavaScript__get_LineNumber_fn(JavaScript* __this, int32_t* __retval)
{
    *__retval = __this->LineNumber();
}

// public void set_LineNumber(int value) :164
void JavaScript__set_LineNumber_fn(JavaScript* __this, int32_t* value)
{
    __this->LineNumber(*value);
}

// public JavaScript New(Uno.UX.NameTable nameTable) :39
void JavaScript__New2_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval)
{
    *__retval = JavaScript::New2(nameTable);
}

// protected void OnBeforeSubscribeToDependenciesAndDispatchEvaluate() :46
void JavaScript__OnBeforeSubscribeToDependenciesAndDispatchEvaluate_fn(JavaScript* __this)
{
    __this->OnBeforeSubscribeToDependenciesAndDispatchEvaluate();
}

// protected override sealed void OnRooted() :48
void JavaScript__OnRooted_fn(JavaScript* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    JavaScript::_javaScriptCounter_++;
    __this->OnBeforeSubscribeToDependenciesAndDispatchEvaluate();

    if ((__this->_moduleInstance == NULL) || !uPtr(__this->_moduleInstance)->ReflectExports())
        __this->SubscribeToDependenciesAndDispatchEvaluate();

    __this->_preserveModuleInstance = false;
}

// protected override sealed void OnUnrooted() :63
void JavaScript__OnUnrooted_fn(JavaScript* __this)
{
    ::g::Fuse::Scripting::NativeModule* ret5;
    __this->DisposeDependencySubscriptions();
    __this->SetDataContext(NULL);
    __this->DisposeModuleInstance();

    if ((--JavaScript::_javaScriptCounter_) <= 0)
    {
        ::g::Fuse::Scripting::AppInitialized::Reset();
        uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr((uObject*)::g::Uno::UX::Resource::GetGlobalsOfType(::g::Uno::UX::Resource_typeof()->MakeMethod(0/*GetGlobalsOfType<Fuse.Scripting.NativeModule>*/, ::g::Fuse::Scripting::NativeModule_typeof(), NULL))), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof(), NULL)));

        {
            try
            {
                {
                    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())))
                    {
                        ::g::Fuse::Scripting::NativeModule* nm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof(), NULL)), &ret5), ret5);
                        uPtr(nm)->InternalReset();
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[0/*Uno.IDisposable*/]));
                }
                                throw __t;
                goto __after_finally_2;
            }

            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[0/*Uno.IDisposable*/]));
            }
            __after_finally_2:;
        }
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// internal Fuse.Scripting.JavaScript.RootableScriptModule get_ScriptModule() :29
void JavaScript__get_ScriptModule_fn(JavaScript* __this, ::g::Fuse::Scripting::JavaScript::RootableScriptModule** __retval)
{
    *__retval = __this->ScriptModule();
}

// internal void SetDataContext(object newDc) :91
void JavaScript__SetDataContext_fn(JavaScript* __this, uObject* newDc)
{
    __this->SetDataContext(newDc);
}

// private void SetSiblingData(object data) :123
void JavaScript__SetSiblingData_fn(JavaScript* __this, uObject* data)
{
    __this->SetSiblingData(data);
}

// private void SubscribeToDependenciesAndDispatchEvaluate() :97
void JavaScript__SubscribeToDependenciesAndDispatchEvaluate_fn(JavaScript* __this)
{
    __this->SubscribeToDependenciesAndDispatchEvaluate();
}

int32_t JavaScript::_javaScriptCounter_;
uSStrong< ::g::Fuse::Scripting::JavaScript::ThreadWorker*> JavaScript::Worker_;

// public JavaScript(Uno.UX.NameTable nameTable) [instance] :39
void JavaScript::ctor_3(::g::Uno::UX::NameTable* nameTable)
{
    ctor_2();
    JavaScript::EnsureVMStarted();
    _nameTable = nameTable;
    _scriptModule = ::g::Fuse::Scripting::JavaScript::RootableScriptModule::New2(JavaScript::Worker_, nameTable);
}

// public Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency> get_Dependencies() [instance] :88
uObject* JavaScript::Dependencies()
{
    if (_dependencies == NULL)
        _dependencies = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[35/*Uno.Collections.List`1*/]->MakeType(JavaScript__Dependency_typeof(), NULL)));

    return (uObject*)_dependencies;
}

// internal void DispatchEvaluate() [instance] :129
void JavaScript::DispatchEvaluate()
{
    if (!IsRootingStarted())
        return;

    DisposeModuleInstance();
    _moduleInstance = ::g::Fuse::Scripting::JavaScript::ModuleInstance::New2((uObject*)JavaScript::Worker_, this);
}

// private void DispatchEvaluateIfDependenciesReady() [instance] :113
void JavaScript::DispatchEvaluateIfDependenciesReady()
{
    JavaScript__Dependency* ret3;

    if (_dependencies != NULL)

        for (int32_t i = 0; i < uPtr(_dependencies)->Count(); i++)
            if (!uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dependencies), uCRef<int32_t>(i), &ret3), ret3))->HasValue)
                return;

    DispatchEvaluate();
}

// private void DisposeDependencySubscriptions() [instance] :106
void JavaScript::DisposeDependencySubscriptions()
{
    JavaScript__Dependency* ret4;

    if (_dependencies != NULL)

        for (int32_t i = 0; i < uPtr(_dependencies)->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dependencies), uCRef<int32_t>(i), &ret4), ret4))->Unsubscribe();
}

// protected void DisposeModuleInstance() [instance] :137
void JavaScript::DisposeModuleInstance()
{
    if (_preserveModuleInstance)
        return;

    if (_moduleInstance != NULL)
    {
        uPtr(_moduleInstance)->Dispose();
        _moduleInstance = NULL;
    }
}

// private void DisposeSubscription() [instance] :136
void JavaScript::DisposeSubscription()
{
    if (_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[0/*Uno.IDisposable*/]));
        _sub = NULL;
    }
}

// public Uno.UX.FileSource get_File() [instance] :170
::g::Uno::UX::FileSource* JavaScript::File()
{
    return uPtr(_scriptModule)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :171
void JavaScript::File(::g::Uno::UX::FileSource* value)
{
    uPtr(_scriptModule)->File(value);
}

// public string get_FileName() [instance] :178
uString* JavaScript::FileName()
{
    return uPtr(_scriptModule)->FileName();
}

// public void set_FileName(string value) [instance] :179
void JavaScript::FileName(uString* value)
{
    uPtr(_scriptModule)->FileName(value);
}

// public int get_LineNumber() [instance] :163
int32_t JavaScript::LineNumber()
{
    return uPtr(_scriptModule)->LineNumberOffset();
}

// public void set_LineNumber(int value) [instance] :164
void JavaScript::LineNumber(int32_t value)
{
    uPtr(_scriptModule)->LineNumberOffset(value);
}

// protected void OnBeforeSubscribeToDependenciesAndDispatchEvaluate() [instance] :46
void JavaScript::OnBeforeSubscribeToDependenciesAndDispatchEvaluate()
{
}

// internal Fuse.Scripting.JavaScript.RootableScriptModule get_ScriptModule() [instance] :29
::g::Fuse::Scripting::JavaScript::RootableScriptModule* JavaScript::ScriptModule()
{
    return _scriptModule;
}

// internal void SetDataContext(object newDc) [instance] :91
void JavaScript::SetDataContext(uObject* newDc)
{
    DisposeSubscription();
    uObject* oldDc = _currentDc;
    _currentDc = newDc;
    uObject* obs = uAs<uObject*>(newDc, ::TYPES[32/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        SetSiblingData(NULL);
        _sub = (uObject*)::g::Fuse::Reactive::ValueForwarder::New1(obs, (uObject*)this);
    }
    else
        SetSiblingData(newDc);

    if (oldDc != NULL)
        ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(oldDc);
}

// private void SetSiblingData(object data) [instance] :123
void JavaScript::SetSiblingData(uObject* data)
{
    uObject* oldSiblingData = _siblingData;
    _siblingData = data;

    if (Parent() != NULL)
        uPtr(Parent())->BroadcastDataChange(oldSiblingData, data);
}

// private void SubscribeToDependenciesAndDispatchEvaluate() [instance] :97
void JavaScript::SubscribeToDependenciesAndDispatchEvaluate()
{
    JavaScript__Dependency* ret6;

    if (_dependencies != NULL)

        for (int32_t i = 0; i < uPtr(_dependencies)->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dependencies), uCRef<int32_t>(i), &ret6), ret6))->Subscribe(this);

    if ((_dependencies == NULL) || (uPtr(_dependencies)->Count() == 0))
        DispatchEvaluateIfDependenciesReady();
}

// internal static void EnsureVMStarted() [static] :32
void JavaScript::EnsureVMStarted()
{
    if (JavaScript::Worker_ == NULL)
        JavaScript::Worker_ = ::g::Fuse::Scripting::JavaScript::ThreadWorker::New1();
}

// public JavaScript New(Uno.UX.NameTable nameTable) [static] :39
JavaScript* JavaScript::New2(::g::Uno::UX::NameTable* nameTable)
{
    JavaScript* obj2 = (JavaScript*)uNew(JavaScript_typeof());
    obj2->ctor_3(nameTable);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/LookUp.uno
// -----------------------------------------------------------------------------

// public sealed class LookUp :17
// {
static void LookUp_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(LookUp, _Collection), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(LookUp, _Index), 0);
}

::g::Fuse::Reactive::Expression_type* LookUp_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LookUp);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.LookUp", options);
    type->fp_build_ = LookUp_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))LookUp__Subscribe_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))LookUp__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public generated Fuse.Reactive.Expression get_Collection() :19
void LookUp__get_Collection_fn(LookUp* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Collection();
}

// private generated void set_Collection(Fuse.Reactive.Expression value) :19
void LookUp__set_Collection_fn(LookUp* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Collection(value);
}

// public generated Fuse.Reactive.Expression get_Index() :20
void LookUp__get_Index_fn(LookUp* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Index();
}

// private generated void set_Index(Fuse.Reactive.Expression value) :20
void LookUp__set_Index_fn(LookUp* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Index(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :29
void LookUp__Subscribe_fn(LookUp* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)LookUp__LookUpSubscription::New1(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Collection() [instance] :19
::g::Fuse::Reactive::Expression* LookUp::Collection()
{
    return _Collection;
}

// private generated void set_Collection(Fuse.Reactive.Expression value) [instance] :19
void LookUp::Collection(::g::Fuse::Reactive::Expression* value)
{
    _Collection = value;
}

// public generated Fuse.Reactive.Expression get_Index() [instance] :20
::g::Fuse::Reactive::Expression* LookUp::Index()
{
    return _Index;
}

// private generated void set_Index(Fuse.Reactive.Expression value) [instance] :20
void LookUp::Index(::g::Fuse::Reactive::Expression* value)
{
    _Index = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/LookUp.uno
// -----------------------------------------------------------------------------

// private sealed class LookUp.LookUpSubscription :34
// {
static void LookUp__LookUpSubscription_build(uType* type)
{
    ::STRINGS[52] = uString::Const("Index must be a number: ");
    ::STRINGS[53] = uString::Const("Index was outside the bounds of the array");
    ::STRINGS[54] = uString::Const("Object does not contain the given key '");
    ::STRINGS[22] = uString::Const("'");
    ::STRINGS[55] = uString::Const("Look-up operator not supported on collection type: ");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[11] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[15] = ::g::Fuse::Reactive::IObservableArray_typeof();
    ::TYPES[32] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[13] = ::g::Fuse::IArray_typeof();
    ::TYPES[33] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[34] = ::g::Fuse::IObject_typeof();
    ::TYPES[20] = ::g::Fuse::Reactive::IObservableObject_typeof();
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof());
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(LookUp__LookUpSubscription_type, interface1),
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(LookUp__LookUpSubscription_type, interface2),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(LookUp__LookUpSubscription_type, interface3),
        ::g::Fuse::Reactive::IPropertyObserver_typeof(), offsetof(LookUp__LookUpSubscription_type, interface4));
    type->SetFields(0,
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(LookUp__LookUpSubscription, _listener), 0,
        ::g::Fuse::Reactive::LookUp_typeof(), offsetof(LookUp__LookUpSubscription, _lu), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _colSub), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _indexSub), 0,
        ::g::Uno::Bool_typeof(), offsetof(LookUp__LookUpSubscription, _hasCollection), 0,
        uObject_typeof(), offsetof(LookUp__LookUpSubscription, _collection), 0,
        ::g::Uno::Bool_typeof(), offsetof(LookUp__LookUpSubscription, _hasIndex), 0,
        uObject_typeof(), offsetof(LookUp__LookUpSubscription, _index), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _indexForwarder), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _diag), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _colObsObjSub), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _colObservableSub), 0);
}

LookUp__LookUpSubscription_type* LookUp__LookUpSubscription_typeof()
{
    static uSStrong<LookUp__LookUpSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(LookUp__LookUpSubscription);
    options.TypeSize = sizeof(LookUp__LookUpSubscription_type);
    type = (LookUp__LookUpSubscription_type*)uClassType::New("Fuse.Reactive.LookUp.LookUpSubscription", options);
    type->fp_build_ = LookUp__LookUpSubscription_build;
    type->interface2.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveIListenerOnNewData_fn;
    type->interface2.fp_OnLostData = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveIListenerOnLostData_fn;
    type->interface3.fp_NewValue = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface3.fp_LostValue = (void(*)(uObject*))LookUp__LookUpSubscription__FuseReactiveValueForwarderIValueListenerLostValue_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, uObject*, uString*, uObject*))LookUp__LookUpSubscription__FuseReactiveIPropertyObserverOnPropertyChanged_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))LookUp__LookUpSubscription__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))LookUp__LookUpSubscription__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))LookUp__LookUpSubscription__Dispose_fn;
    return type;
}

// public LookUpSubscription(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :42
void LookUp__LookUpSubscription__ctor__fn(LookUp__LookUpSubscription* __this, ::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener)
{
    __this->ctor_(lu, context, listener);
}

// public void ClearDiagnostic() :94
void LookUp__LookUpSubscription__ClearDiagnostic_fn(LookUp__LookUpSubscription* __this)
{
    __this->ClearDiagnostic();
}

// public void Dispose() :234
void LookUp__LookUpSubscription__Dispose_fn(LookUp__LookUpSubscription* __this)
{
    __this->Dispose();
}

// private void DisposeCollectionObservableObjectSub() :128
void LookUp__LookUpSubscription__DisposeCollectionObservableObjectSub_fn(LookUp__LookUpSubscription* __this)
{
    __this->DisposeCollectionObservableObjectSub();
}

// private void DisposeCollectionObservableSub() :155
void LookUp__LookUpSubscription__DisposeCollectionObservableSub_fn(LookUp__LookUpSubscription* __this)
{
    __this->DisposeCollectionObservableSub();
}

// private void DisposeIndexSub() :119
void LookUp__LookUpSubscription__DisposeIndexSub_fn(LookUp__LookUpSubscription* __this)
{
    __this->DisposeIndexSub();
}

// private void Fuse.Reactive.IListener.OnLostData(Fuse.Reactive.IExpression source) :62
void LookUp__LookUpSubscription__FuseReactiveIListenerOnLostData_fn(LookUp__LookUpSubscription* __this, uObject* source)
{
    ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(__this->_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)__this->_lu);
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :55
void LookUp__LookUpSubscription__FuseReactiveIListenerOnNewData_fn(LookUp__LookUpSubscription* __this, uObject* source, uObject* value)
{
    if (__this->_lu == NULL)
        return;

    if (source == uPtr(__this->_lu)->Index())
        __this->NewIndex(value);

    if (source == uPtr(__this->_lu)->Collection())
        __this->NewCollection(value);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :257
void LookUp__LookUpSubscription__FuseReactiveIObserverOnAdd_fn(LookUp__LookUpSubscription* __this, uObject* addedValue)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnClear() :255
void LookUp__LookUpSubscription__FuseReactiveIObserverOnClear_fn(LookUp__LookUpSubscription* __this)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :259
void LookUp__LookUpSubscription__FuseReactiveIObserverOnFailed_fn(LookUp__LookUpSubscription* __this, uString* message)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :262
void LookUp__LookUpSubscription__FuseReactiveIObserverOnInsertAt_fn(LookUp__LookUpSubscription* __this, int32_t* index, uObject* value)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :260
void LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAll_fn(LookUp__LookUpSubscription* __this, uObject* values)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :258
void LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAt_fn(LookUp__LookUpSubscription* __this, int32_t* index, uObject* value)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :261
void LookUp__LookUpSubscription__FuseReactiveIObserverOnRemoveAt_fn(LookUp__LookUpSubscription* __this, int32_t* index)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :256
void LookUp__LookUpSubscription__FuseReactiveIObserverOnSet_fn(LookUp__LookUpSubscription* __this, uObject* newValue)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IPropertyObserver.OnPropertyChanged(Uno.IDisposable sub, string propertyName, object newValue) :222
void LookUp__LookUpSubscription__FuseReactiveIPropertyObserverOnPropertyChanged_fn(LookUp__LookUpSubscription* __this, uObject* sub, uString* propertyName, uObject* newValue)
{
    if (sub != __this->_colObsObjSub)
        return;

    if (::g::Uno::String::op_Inequality(propertyName, ::g::Uno::Object::ToString(uPtr(__this->_index))))
        return;

    __this->PushNewData(newValue);
}

// private void Fuse.Reactive.ValueForwarder.IValueListener.LostValue() :110
void LookUp__LookUpSubscription__FuseReactiveValueForwarderIValueListenerLostValue_fn(LookUp__LookUpSubscription* __this)
{
    __this->_index = NULL;
    __this->_hasIndex = true;
    __this->ResultChanged();
}

// private void Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object value) :103
void LookUp__LookUpSubscription__FuseReactiveValueForwarderIValueListenerNewValue_fn(LookUp__LookUpSubscription* __this, uObject* value)
{
    __this->_index = value;
    __this->_hasIndex = true;
    __this->ResultChanged();
}

// public LookUpSubscription New(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :42
void LookUp__LookUpSubscription__New1_fn(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener, LookUp__LookUpSubscription** __retval)
{
    *__retval = LookUp__LookUpSubscription::New1(lu, context, listener);
}

// private void NewCollection(object col) :139
void LookUp__LookUpSubscription__NewCollection_fn(LookUp__LookUpSubscription* __this, uObject* col)
{
    __this->NewCollection(col);
}

// private void NewIndex(object ind) :68
void LookUp__LookUpSubscription__NewIndex_fn(LookUp__LookUpSubscription* __this, uObject* ind)
{
    __this->NewIndex(ind);
}

// private void PushNewData(object value) :229
void LookUp__LookUpSubscription__PushNewData_fn(LookUp__LookUpSubscription* __this, uObject* value)
{
    __this->PushNewData(value);
}

// private void ResultChanged() :166
void LookUp__LookUpSubscription__ResultChanged_fn(LookUp__LookUpSubscription* __this)
{
    __this->ResultChanged();
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) :88
void LookUp__LookUpSubscription__SetDiagnostic_fn(LookUp__LookUpSubscription* __this, uString* message, uObject* source)
{
    __this->SetDiagnostic(message, source);
}

// public LookUpSubscription(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :42
void LookUp__LookUpSubscription::ctor_(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener)
{
    _listener = listener;
    _lu = lu;
    _colSub = uPtr(uPtr(_lu)->Collection())->Subscribe(context, (uObject*)this);
    _indexSub = uPtr(uPtr(_lu)->Index())->Subscribe(context, (uObject*)this);
}

// public void ClearDiagnostic() [instance] :94
void LookUp__LookUpSubscription::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[0/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :234
void LookUp__LookUpSubscription::Dispose()
{
    ClearDiagnostic();
    DisposeCollectionObservableObjectSub();
    DisposeCollectionObservableSub();
    DisposeIndexSub();

    if (_colSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_colSub), ::TYPES[0/*Uno.IDisposable*/]));

    if (_indexSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_indexSub), ::TYPES[0/*Uno.IDisposable*/]));

    _colSub = NULL;
    _indexSub = NULL;
    _collection = NULL;
    _listener = NULL;
    _index = NULL;
    _lu = NULL;
}

// private void DisposeCollectionObservableObjectSub() [instance] :128
void LookUp__LookUpSubscription::DisposeCollectionObservableObjectSub()
{
    if (_colObsObjSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_colObsObjSub), ::TYPES[0/*Uno.IDisposable*/]));
        _colObsObjSub = NULL;
    }
}

// private void DisposeCollectionObservableSub() [instance] :155
void LookUp__LookUpSubscription::DisposeCollectionObservableSub()
{
    if (_colObservableSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_colObservableSub), ::TYPES[0/*Uno.IDisposable*/]));
        _colObservableSub = NULL;
    }
}

// private void DisposeIndexSub() [instance] :119
void LookUp__LookUpSubscription::DisposeIndexSub()
{
    if (_indexForwarder != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_indexForwarder), ::TYPES[0/*Uno.IDisposable*/]));
        _indexForwarder = NULL;
    }
}

// private void NewCollection(object col) [instance] :139
void LookUp__LookUpSubscription::NewCollection(uObject* col)
{
    _collection = col;
    _hasCollection = true;
    DisposeCollectionObservableObjectSub();
    DisposeCollectionObservableSub();
    uObject* obs = uAs<uObject*>(col, ::TYPES[15/*Fuse.Reactive.IObservableArray*/]);

    if (obs != NULL)
        _colObservableSub = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(obs), ::TYPES[15/*Fuse.Reactive.IObservableArray*/]), (uObject*)this);

    ResultChanged();
}

// private void NewIndex(object ind) [instance] :68
void LookUp__LookUpSubscription::NewIndex(uObject* ind)
{
    DisposeIndexSub();
    uObject* obs = uAs<uObject*>(ind, ::TYPES[32/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
        _indexForwarder = (uObject*)::g::Fuse::Reactive::ValueForwarder::New1(obs, (uObject*)this);
    else
    {
        _index = ind;
        _hasIndex = true;
        ResultChanged();
    }
}

// private void PushNewData(object value) [instance] :229
void LookUp__LookUpSubscription::PushNewData(uObject* value)
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)_lu, value);
}

// private void ResultChanged() [instance] :166
void LookUp__LookUpSubscription::ResultChanged()
{
    if (_listener == NULL)
        return;

    ClearDiagnostic();

    if (!_hasIndex)
        return;

    if (!_hasCollection)
        return;

    if ((_index == NULL) || (_collection == NULL))
        PushNewData(NULL);

    uObject* arr = uAs<uObject*>(_collection, ::TYPES[13/*Fuse.IArray*/]);

    if (arr != NULL)
    {
        int32_t index = 0;

        try
        {
            {
                index = ::g::Fuse::Marshal::ToInt(_index);
            }
        }

        catch (const uThrowable& __t)
        {
            if (uIs(__t.Exception, ::TYPES[33/*Fuse.MarshalException*/]))
            {
                ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
                SetDiagnostic(::g::Uno::String::op_Addition2(::STRINGS[52/*"Index must ...*/], uPtr(me)->Message()), (uObject*)uPtr(_lu)->Index());
                return;
            }
            else             throw __t;
        }

        if ((index >= 0) && (index < ::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[13/*Fuse.IArray*/]))))
            PushNewData(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[13/*Fuse.IArray*/]), index));
        else
            SetDiagnostic(::STRINGS[53/*"Index was o...*/], (uObject*)uPtr(_lu)->Index());

        return;
    }

    uObject* obj = uAs<uObject*>(_collection, ::TYPES[34/*Fuse.IObject*/]);

    if (obj != NULL)
    {
        uObject* obsObj = uAs<uObject*>(obj, ::TYPES[20/*Fuse.Reactive.IObservableObject*/]);

        if (obsObj != NULL)
            _colObsObjSub = ::g::Fuse::Reactive::IObservableObject::Subscribe(uInterface(uPtr(obsObj), ::TYPES[20/*Fuse.Reactive.IObservableObject*/]), (uObject*)this);

        uString* key = ::g::Uno::Object::ToString(uPtr(_index));

        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(obj), ::TYPES[34/*Fuse.IObject*/]), key))
            PushNewData(::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[34/*Fuse.IObject*/]), key));
        else
            SetDiagnostic(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[54/*"Object does...*/], key), ::STRINGS[22/*"'"*/]), (uObject*)uPtr(_lu)->Index());

        return;
    }

    SetDiagnostic(::g::Uno::String::op_Addition1(::STRINGS[55/*"Look-up ope...*/], _collection), (uObject*)uPtr(_lu)->Collection());
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) [instance] :88
void LookUp__LookUpSubscription::SetDiagnostic(uString* message, uObject* source)
{
    ClearDiagnostic();
    _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(message, source);
}

// public LookUpSubscription New(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :42
LookUp__LookUpSubscription* LookUp__LookUpSubscription::New1(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener)
{
    LookUp__LookUpSubscription* obj1 = (LookUp__LookUpSubscription*)uNew(LookUp__LookUpSubscription_typeof());
    obj1->ctor_(lu, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Member.uno
// -----------------------------------------------------------------------------

// public sealed class Member :8
// {
static void Member_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(Member, _BaseObject), 0,
        ::g::Uno::String_typeof(), offsetof(Member, _Name), 0);
}

::g::Fuse::Reactive::Expression_type* Member_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Member);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Member", options);
    type->fp_build_ = Member_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Member__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Member__ToString_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Member__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// private generated Fuse.Reactive.Expression get_BaseObject() :10
void Member__get_BaseObject_fn(Member* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->BaseObject();
}

// private generated void set_BaseObject(Fuse.Reactive.Expression value) :10
void Member__set_BaseObject_fn(Member* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->BaseObject(value);
}

// public generated string get_Name() :11
void Member__get_Name_fn(Member* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :11
void Member__set_Name_fn(Member* __this, uString* value)
{
    __this->Name(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :25
void Member__Subscribe_fn(Member* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)Member__Subscription::New1(__this, context, listener), void();
}

// public override sealed string ToString() :20
void Member__ToString_fn(Member* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Object::ToString(uPtr(__this->BaseObject())), ::STRINGS[28/*"."*/]), __this->Name()), void();
}

// private generated Fuse.Reactive.Expression get_BaseObject() [instance] :10
::g::Fuse::Reactive::Expression* Member::BaseObject()
{
    return _BaseObject;
}

// private generated void set_BaseObject(Fuse.Reactive.Expression value) [instance] :10
void Member::BaseObject(::g::Fuse::Reactive::Expression* value)
{
    _BaseObject = value;
}

// public generated string get_Name() [instance] :11
uString* Member::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :11
void Member::Name(uString* value)
{
    _Name = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Instantiator.uno
// --------------------------------------------------------------------------------

// internal sealed class Instantiator.NoContextItem :399
// {
static void Instantiator__NoContextItem_build(uType* type)
{
}

uType* Instantiator__NoContextItem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Instantiator__NoContextItem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Instantiator.NoContextItem", options);
    type->fp_build_ = Instantiator__NoContextItem_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/NodeExpressionBinding.uno
// -----------------------------------------------------------------------------------------

// internal sealed class NodeExpressionBinding :9
// {
static void NodeExpressionBinding_build(uType* type)
{
    ::STRINGS[56] = uString::Const("Invalid params");
    ::STRINGS[44] = uString::Const("The binding type does not support resource subscriptions");
    ::TYPES[23] = ::g::Uno::Action_typeof();
    ::TYPES[24] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(NodeExpressionBinding_type, interface0),
        ::TYPES[0/*Uno.IDisposable*/], offsetof(NodeExpressionBinding_type, interface1));
    type->SetFields(0,
        ::TYPES[24/*Fuse.Reactive.IExpression*/], offsetof(NodeExpressionBinding, _expr), 0,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(NodeExpressionBinding, _listener), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(NodeExpressionBinding, _sub), 0,
        ::g::Fuse::Node_typeof(), offsetof(NodeExpressionBinding, _node), 0);
}

NodeExpressionBinding_type* NodeExpressionBinding_typeof()
{
    static uSStrong<NodeExpressionBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NodeExpressionBinding);
    options.TypeSize = sizeof(NodeExpressionBinding_type);
    type = (NodeExpressionBinding_type*)uClassType::New("Fuse.Reactive.NodeExpressionBinding", options);
    type->fp_build_ = NodeExpressionBinding_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))NodeExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))NodeExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))NodeExpressionBinding__SubscribeResource_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))NodeExpressionBinding__Dispose_fn;
    return type;
}

// public NodeExpressionBinding(Fuse.Reactive.IExpression expr, Fuse.Node node, Fuse.Reactive.IListener listener) :16
void NodeExpressionBinding__ctor__fn(NodeExpressionBinding* __this, uObject* expr, ::g::Fuse::Node* node, uObject* listener)
{
    __this->ctor_(expr, node, listener);
}

// private void CompleteInit() :28
void NodeExpressionBinding__CompleteInit_fn(NodeExpressionBinding* __this)
{
    __this->CompleteInit();
}

// public void Dispose() :48
void NodeExpressionBinding__Dispose_fn(NodeExpressionBinding* __this)
{
    __this->Dispose();
}

// private Fuse.Node Fuse.Reactive.IContext.get_Node() :41
void NodeExpressionBinding__FuseReactiveIContextget_Node_fn(NodeExpressionBinding* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->_node, void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :36
void NodeExpressionBinding__FuseReactiveIContextSubscribe_fn(NodeExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::DataSubscription::New1(source, __this->_node, key, listener), void();
}

// public NodeExpressionBinding New(Fuse.Reactive.IExpression expr, Fuse.Node node, Fuse.Reactive.IListener listener) :16
void NodeExpressionBinding__New1_fn(uObject* expr, ::g::Fuse::Node* node, uObject* listener, NodeExpressionBinding** __retval)
{
    *__retval = NodeExpressionBinding::New1(expr, node, listener);
}

// public Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :43
void NodeExpressionBinding__SubscribeResource_fn(NodeExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    *__retval = __this->SubscribeResource(source, key, listener);
}

// public NodeExpressionBinding(Fuse.Reactive.IExpression expr, Fuse.Node node, Fuse.Reactive.IListener listener) [instance] :16
void NodeExpressionBinding::ctor_(uObject* expr, ::g::Fuse::Node* node, uObject* listener)
{
    if (((expr == NULL) || (node == NULL)) || (listener == NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[56/*"Invalid par...*/]));

    _expr = expr;
    _listener = listener;
    _node = node;
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)NodeExpressionBinding__CompleteInit_fn, this), -1, 2);
}

// private void CompleteInit() [instance] :28
void NodeExpressionBinding::CompleteInit()
{
    if (_expr == NULL)
        return;

    _sub = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(_expr), ::TYPES[24/*Fuse.Reactive.IExpression*/]), (uObject*)this, _listener);
}

// public void Dispose() [instance] :48
void NodeExpressionBinding::Dispose()
{
    if (_sub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[0/*Uno.IDisposable*/]));

    _expr = NULL;
    _listener = NULL;
    _node = NULL;
}

// public Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) [instance] :43
uObject* NodeExpressionBinding::SubscribeResource(uObject* source, uString* key, uObject* listener)
{
    U_THROW(::g::Uno::Exception::New2(::STRINGS[44/*"The binding...*/]));
}

// public NodeExpressionBinding New(Fuse.Reactive.IExpression expr, Fuse.Node node, Fuse.Reactive.IListener listener) [static] :16
NodeExpressionBinding* NodeExpressionBinding::New1(uObject* expr, ::g::Fuse::Node* node, uObject* listener)
{
    NodeExpressionBinding* obj1 = (NodeExpressionBinding*)uNew(NodeExpressionBinding_typeof());
    obj1->ctor_(expr, node, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/IsDefined.uno
// --------------------------------------------------------------------------------

// public sealed class NonNull :63
// {
static void NonNull_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ComputeExpression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::ComputeExpression_type, interface1));
    type->SetFields(5);
}

::g::Fuse::Reactive::ComputeExpression_type* NonNull_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ComputeExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ComputeExpression_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NonNull);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ComputeExpression_type);
    type = (::g::Fuse::Reactive::ComputeExpression_type*)uClassType::New("Fuse.Reactive.NonNull", options);
    type->fp_build_ = NonNull_build;
    type->fp_TryCompute = (void(*)(::g::Fuse::Reactive::ComputeExpression*, uArray*, uObject**, bool*))NonNull__TryCompute_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ComputeExpression__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected override sealed bool TryCompute(Fuse.Reactive.Expression.Argument[] args, object& result) :72
void NonNull__TryCompute_fn(NonNull* __this, uArray* args, uObject** result, bool* __retval)
{
    *result = uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->Value();
    return *__retval = uPtr(args->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->Value() != NULL, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/NullCoalesce.uno
// -----------------------------------------------------------------------------------

// public sealed class NullCoalesce :6
// {
static void NullCoalesce_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ComputeExpression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::ComputeExpression_type, interface1));
    type->SetFields(5);
}

::g::Fuse::Reactive::ComputeExpression_type* NullCoalesce_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ComputeExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ComputeExpression_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NullCoalesce);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ComputeExpression_type);
    type = (::g::Fuse::Reactive::ComputeExpression_type*)uClassType::New("Fuse.Reactive.NullCoalesce", options);
    type->fp_build_ = NullCoalesce_build;
    type->fp_TryCompute = (void(*)(::g::Fuse::Reactive::ComputeExpression*, uArray*, uObject**, bool*))NullCoalesce__TryCompute_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ComputeExpression__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected override sealed bool TryCompute(Fuse.Reactive.Expression.Argument[] args, object& result) :13
void NullCoalesce__TryCompute_fn(NullCoalesce* __this, uArray* args, uObject** result, bool* __retval)
{
    if (uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->HasValue() && (uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->Value() != NULL))
    {
        *result = uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->Value();
        return *__retval = true, void();
    }

    if (uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(1))->HasValue())
    {
        *result = uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(1))->Value();
        return *__retval = true, void();
    }

    *result = NULL;
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Subscription.uno
// -----------------------------------------------------------------------------------

// private sealed class InnerListener.ObservableSubscription :82
// {
static void InnerListener__ObservableSubscription_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::InnerListener_typeof(), offsetof(InnerListener__ObservableSubscription, _listener), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(InnerListener__ObservableSubscription, _source), 0);
}

::g::Fuse::Reactive::ValueObserver_type* InnerListener__ObservableSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InnerListener__ObservableSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.InnerListener.ObservableSubscription", options);
    type->fp_build_ = InnerListener__ObservableSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::ValueObserver*))InnerListener__ObservableSubscription__Dispose_fn;
    type->fp_LostData = (void(*)(::g::Fuse::Reactive::ValueObserver*))InnerListener__ObservableSubscription__LostData_fn;
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))InnerListener__ObservableSubscription__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))InnerListener__ObservableSubscription__Dispose_fn;
    return type;
}

// public ObservableSubscription(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) :87
void InnerListener__ObservableSubscription__ctor_1_fn(InnerListener__ObservableSubscription* __this, uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    __this->ctor_1(source, obs, listener);
}

// public override sealed void Dispose() :94
void InnerListener__ObservableSubscription__Dispose_fn(InnerListener__ObservableSubscription* __this)
{
    ::g::Fuse::Reactive::ValueObserver__Dispose_fn(__this);
    __this->_source = NULL;
    __this->_listener = NULL;
}

// protected override sealed void LostData() :106
void InnerListener__ObservableSubscription__LostData_fn(InnerListener__ObservableSubscription* __this)
{
    uPtr(__this->_listener)->OnLostData(__this->_source);
}

// public ObservableSubscription New(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) :87
void InnerListener__ObservableSubscription__New1_fn(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener, InnerListener__ObservableSubscription** __retval)
{
    *__retval = InnerListener__ObservableSubscription::New1(source, obs, listener);
}

// protected override sealed void PushData(object newValue) :101
void InnerListener__ObservableSubscription__PushData_fn(InnerListener__ObservableSubscription* __this, uObject* newValue)
{
    uPtr(__this->_listener)->OnNewData(__this->_source, newValue);
}

// public ObservableSubscription(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) [instance] :87
void InnerListener__ObservableSubscription::ctor_1(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    ctor_();
    _listener = listener;
    _source = source;
    Subscribe(obs);
}

// public ObservableSubscription New(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) [static] :87
InnerListener__ObservableSubscription* InnerListener__ObservableSubscription::New1(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    InnerListener__ObservableSubscription* obj1 = (InnerListener__ObservableSubscription*)uNew(InnerListener__ObservableSubscription_typeof());
    obj1->ctor_1(source, obs, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/ObserverMap.uno
// ----------------------------------------------------------------------

// internal abstract class ObserverMap<T> :23
// {
static void ObserverMap_build(uType* type)
{
    ::STRINGS[57] = uString::Const("An observable with write-back is expected");
    ::STRINGS[58] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/ObserverMap.uno");
    ::STRINGS[59] = uString::Const("Attach");
    ::TYPES[35] = ::g::Uno::Collections::List_typeof();
    ::TYPES[15] = ::g::Fuse::Reactive::IObservableArray_typeof();
    ::TYPES[19] = ::g::Fuse::Reactive::ISubscription_typeof();
    ::TYPES[36] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[13] = ::g::Fuse::IArray_typeof();
    ::TYPES[37] = ::g::Fuse::Reactive::UnmappedView_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Reactive::UnmappedView_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[36/*Fuse.Reactive.IObserver*/], offsetof(ObserverMap_type, interface0));
    type->SetFields(0,
        ::TYPES[35/*Uno.Collections.List`1*/]->MakeType(type->T(0), NULL), offsetof(ObserverMap, _list), 0,
        ::TYPES[15/*Fuse.Reactive.IObservableArray*/], offsetof(ObserverMap, _observable), 0,
        ::TYPES[13/*Fuse.IArray*/], offsetof(ObserverMap, _source), 0,
        ::TYPES[36/*Fuse.Reactive.IObserver*/], offsetof(ObserverMap, _slave), 0,
        ::TYPES[19/*Fuse.Reactive.ISubscription*/], offsetof(ObserverMap, _subscription), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(ObserverMap, _disposable), 0);
}

ObserverMap_type* ObserverMap_typeof()
{
    static uSStrong<ObserverMap_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ObserverMap);
    options.TypeSize = sizeof(ObserverMap_type);
    type = (ObserverMap_type*)uClassType::New("Fuse.Reactive.ObserverMap`1", options);
    type->fp_build_ = ObserverMap_build;
    type->fp_OnUpdated = ObserverMap__OnUpdated_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))ObserverMap__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))ObserverMap__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))ObserverMap__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))ObserverMap__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))ObserverMap__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))ObserverMap__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))ObserverMap__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))ObserverMap__FuseReactiveIObserverOnFailed_fn;
    return type;
}

// protected generated ObserverMap() :23
void ObserverMap__ctor__fn(ObserverMap* __this)
{
    __this->ctor_();
}

// public void Add(T value) :95
void ObserverMap__Add_fn(ObserverMap* __this, uObject* value)
{
    __this->Add(value);
}

// public void Attach(Fuse.IArray src, [Fuse.Reactive.IObserver slave]) :58
void ObserverMap__Attach_fn(ObserverMap* __this, uObject* src, uObject* slave)
{
    __this->Attach(src, slave);
}

// public void Clear() :113
void ObserverMap__Clear_fn(ObserverMap* __this)
{
    __this->Clear();
}

// public int get_Count() :33
void ObserverMap__get_Count_fn(ObserverMap* __this, int32_t* __retval)
{
    *__retval = __this->Count();
}

// public void Detach() :82
void ObserverMap__Detach_fn(ObserverMap* __this)
{
    __this->Detach();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :175
void ObserverMap__FuseReactiveIObserverOnAdd_fn(ObserverMap* __this, uObject* addedValue)
{
    if (__this->_subscription == NULL)
        return;

    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_list), __this->Map(addedValue));
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnAdd(uInterface(uPtr(__this->_slave), ::TYPES[36/*Fuse.Reactive.IObserver*/]), addedValue);
}

// private void Fuse.Reactive.IObserver.OnClear() :128
void ObserverMap__FuseReactiveIObserverOnClear_fn(ObserverMap* __this)
{
    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->Clear();
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr(__this->_slave), ::TYPES[36/*Fuse.Reactive.IObserver*/]));
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :208
void ObserverMap__FuseReactiveIObserverOnFailed_fn(ObserverMap* __this, uString* message)
{
    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->Clear();
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnFailed(uInterface(uPtr(__this->_slave), ::TYPES[36/*Fuse.Reactive.IObserver*/]), message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :197
void ObserverMap__FuseReactiveIObserverOnInsertAt_fn(ObserverMap* __this, int32_t* index, uObject* value)
{
    int32_t index_ = *index;

    if (__this->_subscription == NULL)
        return;

    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_list), uCRef<int32_t>(index_), __this->Map(value));
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(__this->_slave), ::TYPES[36/*Fuse.Reactive.IObserver*/]), index_, value);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :139
void ObserverMap__FuseReactiveIObserverOnNewAll_fn(ObserverMap* __this, uObject* values)
{
    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->Clear();

    for (int32_t i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[13/*Fuse.IArray*/])); ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(__this->_list), __this->Map(::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[13/*Fuse.IArray*/]), i)));

    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(__this->_slave), ::TYPES[36/*Fuse.Reactive.IObserver*/]), values);
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue) :152
void ObserverMap__FuseReactiveIObserverOnNewAt_fn(ObserverMap* __this, int32_t* index, uObject* newValue)
{
    int32_t index_ = *index;

    if (__this->_subscription == NULL)
        return;

    ::g::Uno::Collections::List__set_Item_fn(uPtr(__this->_list), uCRef<int32_t>(index_), __this->Map(newValue));
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnNewAt(uInterface(uPtr(__this->_slave), ::TYPES[36/*Fuse.Reactive.IObserver*/]), index_, newValue);
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :186
void ObserverMap__FuseReactiveIObserverOnRemoveAt_fn(ObserverMap* __this, int32_t* index)
{
    int32_t index_ = *index;

    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->RemoveAt(index_);
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(__this->_slave), ::TYPES[36/*Fuse.Reactive.IObserver*/]), index_);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :163
void ObserverMap__FuseReactiveIObserverOnSet_fn(ObserverMap* __this, uObject* newValue)
{
    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_list), __this->Map(newValue));
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(__this->_slave), ::TYPES[36/*Fuse.Reactive.IObserver*/]), newValue);
}

// public T get_Item(int index) :36
void ObserverMap__get_Item_fn(ObserverMap* __this, int32_t* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, T value) :37
void ObserverMap__set_Item_fn(ObserverMap* __this, int32_t* index, uObject* value)
{
    __this->Item(*index, value);
}

// protected virtual void OnUpdated() :29
void ObserverMap__OnUpdated_fn(ObserverMap* __this)
{
}

// public void RemoveAt(int index) :101
void ObserverMap__RemoveAt_fn(ObserverMap* __this, int32_t* index)
{
    __this->RemoveAt(*index);
}

// private void UpdateBacking() :119
void ObserverMap__UpdateBacking_fn(ObserverMap* __this)
{
    __this->UpdateBacking();
}

// internal object UVUnmap(T mv) :31
void ObserverMap__UVUnmap_fn(ObserverMap* __this, uObject* mv, uObject** __retval)
{
    *__retval = __this->UVUnmap(mv);
}

// protected generated ObserverMap() [instance] :23
void ObserverMap::ctor_()
{
    uType* __types[] = {
        __type->GetBase(ObserverMap_typeof())->Precalced(0/*Uno.Collections.List<T>*/),
    };
    _list = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
}

// public void Add(T value) [instance] :95
void ObserverMap::Add(uObject* value)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_list), value);
    UpdateBacking();
}

// public void Attach(Fuse.IArray src, [Fuse.Reactive.IObserver slave]) [instance] :58
void ObserverMap::Attach(uObject* src, uObject* slave)
{
    Detach();
    _source = src;
    _observable = uAs<uObject*>(src, ::TYPES[15/*Fuse.Reactive.IObservableArray*/]);

    if (_observable != NULL)
    {
        _disposable = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(_observable), ::TYPES[15/*Fuse.Reactive.IObservableArray*/]), (uObject*)this);
        _subscription = uAs<uObject*>(_disposable, ::TYPES[19/*Fuse.Reactive.ISubscription*/]);

        if (_subscription == NULL)
            ::g::Fuse::Diagnostics::InternalError(::STRINGS[57/*"An observab...*/], this, ::STRINGS[58/*"/usr/local/...*/], 72, ::STRINGS[59/*"Attach"*/]);
    }

    ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface((uObject*)this, ::TYPES[36/*Fuse.Reactive.IObserver*/]), src);
    _slave = slave;
}

// public void Clear() [instance] :113
void ObserverMap::Clear()
{
    uPtr(_list)->Clear();
    UpdateBacking();
}

// public int get_Count() [instance] :33
int32_t ObserverMap::Count()
{
    return uPtr(_list)->Count();
}

// public void Detach() [instance] :82
void ObserverMap::Detach()
{
    if (_disposable != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_disposable), ::TYPES[0/*Uno.IDisposable*/]));
        _disposable = NULL;
    }

    _subscription = NULL;
    _observable = NULL;
    _source = NULL;
    _slave = NULL;
}

// public T get_Item(int index) [instance] :36
uObject* ObserverMap::Item(int32_t index)
{
    uObject* ret1;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_list), uCRef<int32_t>(index), &ret1), ret1);
}

// public void set_Item(int index, T value) [instance] :37
void ObserverMap::Item(int32_t index, uObject* value)
{
    ::g::Uno::Collections::List__set_Item_fn(uPtr(_list), uCRef<int32_t>(index), value);
    UpdateBacking();
}

// public void RemoveAt(int index) [instance] :101
void ObserverMap::RemoveAt(int32_t index)
{
    uPtr(_list)->RemoveAt(index);
    UpdateBacking();
}

// private void UpdateBacking() [instance] :119
void ObserverMap::UpdateBacking()
{
    uType* __types[] = {
        __type->GetBase(ObserverMap_typeof())->Precalced(1/*Fuse.Reactive.UnmappedView<T>*/),
    };

    if (_subscription == NULL)
        return;

    uObject* uv = (uObject*)((::g::Fuse::Reactive::UnmappedView*)::g::Fuse::Reactive::UnmappedView::New1(__types[0], this));
    ::g::Fuse::Reactive::ISubscription::ReplaceAllExclusive(uInterface(uPtr(_subscription), ::TYPES[19/*Fuse.Reactive.ISubscription*/]), uv);
}

// internal object UVUnmap(T mv) [instance] :31
uObject* ObserverMap::UVUnmap(uObject* mv)
{
    return Unmap(mv);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Parameter.uno
// --------------------------------------------------------------------------------

// public sealed class Parameter :16
// {
static void Parameter_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(Parameter, Visual), 0);
}

::g::Fuse::Reactive::Expression_type* Parameter_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Parameter);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Parameter", options);
    type->fp_build_ = Parameter_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Parameter__Subscribe_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Parameter__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :26
void Parameter__Subscribe_fn(Parameter* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)Parameter__Subscription::New1(__this, context, listener), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/PlatformFunctions.uno
// ----------------------------------------------------------------------------------------

// public abstract class PlatformFunction :11
// {
static void PlatformFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(PlatformFunction_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(PlatformFunction_type, interface1));
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(PlatformFunction, _name), 0);
}

PlatformFunction_type* PlatformFunction_typeof()
{
    static uSStrong<PlatformFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PlatformFunction);
    options.TypeSize = sizeof(PlatformFunction_type);
    type = (PlatformFunction_type*)uClassType::New("Fuse.Reactive.PlatformFunction", options);
    type->fp_build_ = PlatformFunction_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))PlatformFunction__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))PlatformFunction__ToString_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))PlatformFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :24
void PlatformFunction__Subscribe_fn(PlatformFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    PlatformFunction__Subscription* sub = PlatformFunction__Subscription::New1(__this, listener);
    sub->Init();
    return *__retval = (uObject*)sub, void();
}

// public override sealed string ToString() :19
void PlatformFunction__ToString_fn(PlatformFunction* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("is"), __this->_name), uString::Const("()")), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Property.uno
// -------------------------------------------------------------------------------

// public sealed class Property :8
// {
static void Property_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2,
        ::g::Uno::UX::PropertyAccessor_typeof(), offsetof(Property, _Accessor), 0,
        ::g::Fuse::Reactive::ConstantExpression_typeof(), offsetof(Property, _Object), 0);
}

::g::Fuse::Reactive::Expression_type* Property_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Property);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Property", options);
    type->fp_build_ = Property_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Property__Subscribe_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Property__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public Property(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) :14
void Property__ctor_1_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    __this->ctor_1(obj, accessor);
}

// public generated Uno.UX.PropertyAccessor get_Accessor() :11
void Property__get_Accessor_fn(Property* __this, ::g::Uno::UX::PropertyAccessor** __retval)
{
    *__retval = __this->Accessor();
}

// private generated void set_Accessor(Uno.UX.PropertyAccessor value) :11
void Property__set_Accessor_fn(Property* __this, ::g::Uno::UX::PropertyAccessor* value)
{
    __this->Accessor(value);
}

// public Property New(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) :14
void Property__New1_fn(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor, Property** __retval)
{
    *__retval = Property::New1(obj, accessor);
}

// public generated Fuse.Reactive.ConstantExpression get_Object() :10
void Property__get_Object_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression** __retval)
{
    *__retval = __this->Object();
}

// private generated void set_Object(Fuse.Reactive.ConstantExpression value) :10
void Property__set_Object_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression* value)
{
    __this->Object(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :19
void Property__Subscribe_fn(Property* __this, uObject* context, uObject* listener, uObject** __retval)
{
    ::g::Uno::UX::PropertyObject* obj = uCast< ::g::Uno::UX::PropertyObject*>(uPtr(__this->Object())->GetValue(context), ::g::Uno::UX::PropertyObject_typeof());
    return *__retval = (uObject*)Property__Subscription::New1(__this, obj, __this->Accessor(), listener), void();
}

// public Property(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) [instance] :14
void Property::ctor_1(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    ctor_();
    Object(obj);
    Accessor(accessor);
}

// public generated Uno.UX.PropertyAccessor get_Accessor() [instance] :11
::g::Uno::UX::PropertyAccessor* Property::Accessor()
{
    return _Accessor;
}

// private generated void set_Accessor(Uno.UX.PropertyAccessor value) [instance] :11
void Property::Accessor(::g::Uno::UX::PropertyAccessor* value)
{
    _Accessor = value;
}

// public generated Fuse.Reactive.ConstantExpression get_Object() [instance] :10
::g::Fuse::Reactive::ConstantExpression* Property::Object()
{
    return _Object;
}

// private generated void set_Object(Fuse.Reactive.ConstantExpression value) [instance] :10
void Property::Object(::g::Fuse::Reactive::ConstantExpression* value)
{
    _Object = value;
}

// public Property New(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) [static] :14
Property* Property::New1(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    Property* obj1 = (Property*)uNew(Property_typeof());
    obj1->ctor_1(obj, accessor);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Device.uno
// -----------------------------------------------------------------------------

// private sealed class CapsObject.PropertySubscription :54
// {
static void CapsObject__PropertySubscription_build(uType* type)
{
    ::TYPES[16] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[38] = ::g::Fuse::Reactive::IPropertyObserver_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IPropertySubscription_typeof(), offsetof(CapsObject__PropertySubscription_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(CapsObject__PropertySubscription_type, interface1),
        ::g::Uno::IDisposable_typeof(), offsetof(CapsObject__PropertySubscription_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Reactive::CapsObject_typeof(), offsetof(CapsObject__PropertySubscription, _caps), 0,
        ::TYPES[38/*Fuse.Reactive.IPropertyObserver*/], offsetof(CapsObject__PropertySubscription, _observer), 0);
}

CapsObject__PropertySubscription_type* CapsObject__PropertySubscription_typeof()
{
    static uSStrong<CapsObject__PropertySubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(CapsObject__PropertySubscription);
    options.TypeSize = sizeof(CapsObject__PropertySubscription_type);
    type = (CapsObject__PropertySubscription_type*)uClassType::New("Fuse.Reactive.CapsObject.PropertySubscription", options);
    type->fp_build_ = CapsObject__PropertySubscription_build;
    type->interface0.fp_TrySetExclusive = (void(*)(uObject*, uString*, uObject*, bool*))CapsObject__PropertySubscription__TrySetExclusive_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))CapsObject__PropertySubscription__OnPropertyChanged_fn;
    type->interface2.fp_Dispose = (void(*)(uObject*))CapsObject__PropertySubscription__Dispose_fn;
    return type;
}

// public PropertySubscription(Fuse.Reactive.CapsObject dc, Fuse.Reactive.IPropertyObserver observer) :59
void CapsObject__PropertySubscription__ctor__fn(CapsObject__PropertySubscription* __this, ::g::Fuse::Reactive::CapsObject* dc, uObject* observer)
{
    __this->ctor_(dc, observer);
}

// public void Dispose() :65
void CapsObject__PropertySubscription__Dispose_fn(CapsObject__PropertySubscription* __this)
{
    __this->Dispose();
}

// public PropertySubscription New(Fuse.Reactive.CapsObject dc, Fuse.Reactive.IPropertyObserver observer) :59
void CapsObject__PropertySubscription__New1_fn(::g::Fuse::Reactive::CapsObject* dc, uObject* observer, CapsObject__PropertySubscription** __retval)
{
    *__retval = CapsObject__PropertySubscription::New1(dc, observer);
}

// public void OnPropertyChanged(Uno.UX.PropertyObject ignore, Uno.UX.Selector name) :75
void CapsObject__PropertySubscription__OnPropertyChanged_fn(CapsObject__PropertySubscription* __this, ::g::Uno::UX::PropertyObject* ignore, ::g::Uno::UX::Selector* name)
{
    __this->OnPropertyChanged(ignore, *name);
}

// public bool TrySetExclusive(string propertyName, object newValue) :85
void CapsObject__PropertySubscription__TrySetExclusive_fn(CapsObject__PropertySubscription* __this, uString* propertyName, uObject* newValue, bool* __retval)
{
    *__retval = __this->TrySetExclusive(propertyName, newValue);
}

// public PropertySubscription(Fuse.Reactive.CapsObject dc, Fuse.Reactive.IPropertyObserver observer) [instance] :59
void CapsObject__PropertySubscription::ctor_(::g::Fuse::Reactive::CapsObject* dc, uObject* observer)
{
    _caps = dc;
    _observer = observer;
}

// public void Dispose() [instance] :65
void CapsObject__PropertySubscription::Dispose()
{
    if (_caps != NULL)
    {
        uPtr(_caps)->RemovePropertyListener((uObject*)this);
        _caps = NULL;
        _observer = NULL;
    }
}

// public void OnPropertyChanged(Uno.UX.PropertyObject ignore, Uno.UX.Selector name) [instance] :75
void CapsObject__PropertySubscription::OnPropertyChanged(::g::Uno::UX::PropertyObject* ignore, ::g::Uno::UX::Selector name)
{
    if (_observer != NULL)
    {
        uString* str = name.ToString(::TYPES[16/*Uno.UX.Selector*/]);
        uObject* value = uPtr(_caps)->GetValue(str);
        ::g::Fuse::Reactive::IPropertyObserver::OnPropertyChanged(uInterface(uPtr(_observer), ::TYPES[38/*Fuse.Reactive.IPropertyObserver*/]), (uObject*)this, str, value);
    }
}

// public bool TrySetExclusive(string propertyName, object newValue) [instance] :85
bool CapsObject__PropertySubscription::TrySetExclusive(uString* propertyName, uObject* newValue)
{
    return false;
}

// public PropertySubscription New(Fuse.Reactive.CapsObject dc, Fuse.Reactive.IPropertyObserver observer) [static] :59
CapsObject__PropertySubscription* CapsObject__PropertySubscription::New1(::g::Fuse::Reactive::CapsObject* dc, uObject* observer)
{
    CapsObject__PropertySubscription* obj1 = (CapsObject__PropertySubscription*)uNew(CapsObject__PropertySubscription_typeof());
    obj1->ctor_(dc, observer);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/QuaternaryOperator.uno
// -----------------------------------------------------------------------------------------

// public abstract class QuaternaryOperator :8
// {
static void QuaternaryOperator_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" No `TryCompute`, or a deprecated form, overriden. Migrate your code to override the one with `bool` return. ");
    ::STRINGS[60] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/QuaternaryOperator.uno");
    ::STRINGS[2] = uString::Const("TryCompute");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ComputeExpression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::ComputeExpression_type, interface1));
    type->SetFields(5);
}

::g::Fuse::Reactive::ComputeExpression_type* QuaternaryOperator_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ComputeExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ComputeExpression_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(QuaternaryOperator);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ComputeExpression_type);
    type = (::g::Fuse::Reactive::ComputeExpression_type*)uClassType::New("Fuse.Reactive.QuaternaryOperator", options);
    type->fp_build_ = QuaternaryOperator_build;
    type->fp_GetFlags = (void(*)(::g::Fuse::Reactive::ComputeExpression*, int32_t*))QuaternaryOperator__GetFlags_fn;
    type->fp_TryCompute = (void(*)(::g::Fuse::Reactive::ComputeExpression*, uArray*, uObject**, bool*))QuaternaryOperator__TryCompute_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ComputeExpression__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected object Compute(object first, object second, object third, object fourth) :44
void QuaternaryOperator__Compute_fn(QuaternaryOperator* __this, uObject* first, uObject* second, uObject* third, uObject* fourth, uObject** __retval)
{
    *__retval = __this->Compute(first, second, third, fourth);
}

// internal override sealed Fuse.Reactive.ComputeExpression.Flags GetFlags() :21
void QuaternaryOperator__GetFlags_fn(QuaternaryOperator* __this, int32_t* __retval)
{
    return *__retval = (((0 | (__this->IsFirstOptional() ? 1 : 0)) | (__this->IsSecondOptional() ? 2 : 0)) | (__this->IsThirdOptional() ? 4 : 0)) | (__this->IsFourthOptional() ? 8 : 0), void();
}

// protected bool get_IsFirstOptional() :31
void QuaternaryOperator__get_IsFirstOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFirstOptional();
}

// protected bool get_IsFourthOptional() :34
void QuaternaryOperator__get_IsFourthOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFourthOptional();
}

// protected bool get_IsSecondOptional() :32
void QuaternaryOperator__get_IsSecondOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsSecondOptional();
}

// protected bool get_IsThirdOptional() :33
void QuaternaryOperator__get_IsThirdOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsThirdOptional();
}

// protected override sealed bool TryCompute(Fuse.Reactive.Expression.Argument[] args, object& result) :46
void QuaternaryOperator__TryCompute_fn(QuaternaryOperator* __this, uArray* args, uObject** result, bool* __retval)
{
    return *__retval = __this->TryCompute1(uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->Value(), uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(1))->Value(), uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(2))->Value(), uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(3))->Value(), result), void();
}

// protected bool TryCompute(object first, object second, object third, object fourth, object& result) :36
void QuaternaryOperator__TryCompute1_fn(QuaternaryOperator* __this, uObject* first, uObject* second, uObject* third, uObject* fourth, uObject** result, bool* __retval)
{
    *__retval = __this->TryCompute1(first, second, third, fourth, result);
}

// protected object Compute(object first, object second, object third, object fourth) [instance] :44
uObject* QuaternaryOperator::Compute(uObject* first, uObject* second, uObject* third, uObject* fourth)
{
    return NULL;
}

// protected bool get_IsFirstOptional() [instance] :31
bool QuaternaryOperator::IsFirstOptional()
{
    return false;
}

// protected bool get_IsFourthOptional() [instance] :34
bool QuaternaryOperator::IsFourthOptional()
{
    return false;
}

// protected bool get_IsSecondOptional() [instance] :32
bool QuaternaryOperator::IsSecondOptional()
{
    return false;
}

// protected bool get_IsThirdOptional() [instance] :33
bool QuaternaryOperator::IsThirdOptional()
{
    return false;
}

// protected bool TryCompute(object first, object second, object third, object fourth, object& result) [instance] :36
bool QuaternaryOperator::TryCompute1(uObject* first, uObject* second, uObject* third, uObject* fourth, uObject** result)
{
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[0/*" No `TryCom...*/], this, ::STRINGS[60/*"/usr/local/...*/], 38, ::STRINGS[2/*"TryCompute"*/]);
    *result = Compute(first, second, third, fourth);
    return true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Resource.uno
// -------------------------------------------------------------------------------

// public sealed class Resource :8
// {
static void Resource_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(Resource, _Key), 0);
}

::g::Fuse::Reactive::Expression_type* Resource_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Resource);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Resource", options);
    type->fp_build_ = Resource_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Resource__Subscribe_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Resource__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public generated string get_Key() :10
void Resource__get_Key_fn(Resource* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :10
void Resource__set_Key_fn(Resource* __this, uString* value)
{
    __this->Key(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :16
void Resource__Subscribe_fn(Resource* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = ::g::Fuse::Reactive::IContext::SubscribeResource(uInterface(uPtr(context), ::TYPES[12/*Fuse.Reactive.IContext*/]), (uObject*)__this, __this->Key(), listener), void();
}

// public generated string get_Key() [instance] :10
uString* Resource::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :10
void Resource::Key(uString* value)
{
    _Key = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Subscription/ResourceSubscription.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed class ResourceSubscription :7
// {
static void ResourceSubscription_build(uType* type)
{
    ::STRINGS[61] = uString::Const("{Resource ");
    ::STRINGS[35] = uString::Const("} not found in data context");
    ::TYPES[23] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[39] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof(),
        ::g::Fuse::Resources::ResourceRegistry_typeof());
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(ResourceSubscription_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(ResourceSubscription, _origin), 0,
        ::g::Uno::String_typeof(), offsetof(ResourceSubscription, _key), 0,
        ::g::Uno::Type_typeof(), offsetof(ResourceSubscription, _type), 0,
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(ResourceSubscription, _listener), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(ResourceSubscription, _source), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(ResourceSubscription, _diag), 0);
}

ResourceSubscription_type* ResourceSubscription_typeof()
{
    static uSStrong<ResourceSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ResourceSubscription);
    options.TypeSize = sizeof(ResourceSubscription_type);
    type = (ResourceSubscription_type*)uClassType::New("Fuse.Reactive.ResourceSubscription", options);
    type->fp_build_ = ResourceSubscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ResourceSubscription__Dispose_fn;
    return type;
}

// public ResourceSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) :16
void ResourceSubscription__ctor__fn(ResourceSubscription* __this, uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type)
{
    __this->ctor_(source, origin, key, listener, type);
}

// private bool Accept(object o) :60
void ResourceSubscription__Accept_fn(ResourceSubscription* __this, uObject* o, bool* __retval)
{
    *__retval = __this->Accept(o);
}

// private void ClearDiagnostic() :36
void ResourceSubscription__ClearDiagnostic_fn(ResourceSubscription* __this)
{
    __this->ClearDiagnostic();
}

// public void Dispose() :28
void ResourceSubscription__Dispose_fn(ResourceSubscription* __this)
{
    __this->Dispose();
}

// public ResourceSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) :16
void ResourceSubscription__New1_fn(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type, ResourceSubscription** __retval)
{
    *__retval = ResourceSubscription::New1(source, origin, key, listener, type);
}

// private void OnChanged() :45
void ResourceSubscription__OnChanged_fn(ResourceSubscription* __this)
{
    __this->OnChanged();
}

// public ResourceSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) [instance] :16
void ResourceSubscription::ctor_(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type)
{
    _source = source;
    _origin = origin;
    _key = key;
    _type = type;
    _listener = listener;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(_key, uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)ResourceSubscription__OnChanged_fn, this));
    OnChanged();
}

// private bool Accept(object o) [instance] :60
bool ResourceSubscription::Accept(uObject* o)
{
    return ::g::Fuse::Marshal::Is(o, _type);
}

// private void ClearDiagnostic() [instance] :36
void ResourceSubscription::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[0/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :28
void ResourceSubscription::Dispose()
{
    ClearDiagnostic();
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(_key, uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)ResourceSubscription__OnChanged_fn, this));
    _listener = NULL;
    _origin = NULL;
}

// private void OnChanged() [instance] :45
void ResourceSubscription::OnChanged()
{
    ClearDiagnostic();
    uObject* resource;

    if (uPtr(_origin)->TryGetResource(_key, uDelegate::New(::TYPES[39/*Uno.Predicate<object>*/], (void*)ResourceSubscription__Accept_fn, this), &resource))
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), _source, resource);
    else
        _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[61/*"{Resource "*/], _key), ::STRINGS[35/*"} not found...*/]), _origin);
}

// public ResourceSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) [static] :16
ResourceSubscription* ResourceSubscription::New1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type)
{
    ResourceSubscription* obj1 = (ResourceSubscription*)uNew(ResourceSubscription_typeof());
    obj1->ctor_(source, origin, key, listener, type);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/VarArgFunction.uno
// -------------------------------------------------------------------------------------

// private sealed class SimpleVarArgFunction.SimpleSubscription :145
// {
static void SimpleVarArgFunction__SimpleSubscription_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::VarArgFunction__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::VarArgFunction__Subscription_type, interface1));
    type->SetFields(7,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(SimpleVarArgFunction__SimpleSubscription, _listener), 0,
        ::g::Fuse::Reactive::SimpleVarArgFunction_typeof(), offsetof(SimpleVarArgFunction__SimpleSubscription, _func1), 0);
}

::g::Fuse::Reactive::VarArgFunction__Subscription_type* SimpleVarArgFunction__SimpleSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::VarArgFunction__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction__Subscription_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SimpleVarArgFunction__SimpleSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::VarArgFunction__Subscription_type);
    type = (::g::Fuse::Reactive::VarArgFunction__Subscription_type*)uClassType::New("Fuse.Reactive.SimpleVarArgFunction.SimpleSubscription", options);
    type->fp_build_ = SimpleVarArgFunction__SimpleSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))SimpleVarArgFunction__SimpleSubscription__Dispose_fn;
    type->fp_OnNewArguments = (void(*)(::g::Fuse::Reactive::VarArgFunction__Subscription*, uArray*))SimpleVarArgFunction__SimpleSubscription__OnNewArguments_fn;
    type->fp_OnNewPartialArguments = (void(*)(::g::Fuse::Reactive::VarArgFunction__Subscription*, uArray*))SimpleVarArgFunction__SimpleSubscription__OnNewPartialArguments_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))SimpleVarArgFunction__SimpleSubscription__Dispose_fn;
    return type;
}

// public SimpleSubscription(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IListener listener) :150
void SimpleVarArgFunction__SimpleSubscription__ctor_4_fn(SimpleVarArgFunction__SimpleSubscription* __this, ::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* listener)
{
    __this->ctor_4(func, listener);
}

// public override sealed void Dispose() :167
void SimpleVarArgFunction__SimpleSubscription__Dispose_fn(SimpleVarArgFunction__SimpleSubscription* __this)
{
    __this->_listener = NULL;
    __this->_func1 = NULL;
    ::g::Fuse::Reactive::VarArgFunction__Subscription__Dispose_fn(__this);
}

// public SimpleSubscription New(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IListener listener) :150
void SimpleVarArgFunction__SimpleSubscription__New1_fn(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* listener, SimpleVarArgFunction__SimpleSubscription** __retval)
{
    *__retval = SimpleVarArgFunction__SimpleSubscription::New1(func, listener);
}

// protected override sealed void OnNewArguments(Fuse.Reactive.Expression.Argument[] args) :162
void SimpleVarArgFunction__SimpleSubscription__OnNewArguments_fn(SimpleVarArgFunction__SimpleSubscription* __this, uArray* args)
{
    uPtr(__this->_func1)->OnNewArguments(args, __this->_listener);
}

// protected override sealed void OnNewPartialArguments(Fuse.Reactive.Expression.Argument[] args) :157
void SimpleVarArgFunction__SimpleSubscription__OnNewPartialArguments_fn(SimpleVarArgFunction__SimpleSubscription* __this, uArray* args)
{
    uPtr(__this->_func1)->OnNewPartialArguments(args, __this->_listener);
}

// public SimpleSubscription(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IListener listener) [instance] :150
void SimpleVarArgFunction__SimpleSubscription::ctor_4(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* listener)
{
    ctor_2(func);
    _func1 = func;
    _listener = listener;
}

// public SimpleSubscription New(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IListener listener) [static] :150
SimpleVarArgFunction__SimpleSubscription* SimpleVarArgFunction__SimpleSubscription::New1(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* listener)
{
    SimpleVarArgFunction__SimpleSubscription* obj1 = (SimpleVarArgFunction__SimpleSubscription*)uNew(SimpleVarArgFunction__SimpleSubscription_typeof());
    obj1->ctor_4(func, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/VarArgFunction.uno
// -------------------------------------------------------------------------------------

// public abstract class SimpleVarArgFunction :106
// {
static void SimpleVarArgFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(3);
}

::g::Fuse::Reactive::Expression_type* SimpleVarArgFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SimpleVarArgFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.SimpleVarArgFunction", options);
    type->fp_build_ = SimpleVarArgFunction_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))SimpleVarArgFunction__Subscribe_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))SimpleVarArgFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected void OnNewArguments(Fuse.Reactive.Expression.Argument[] args, Fuse.Reactive.IListener listener) :140
void SimpleVarArgFunction__OnNewArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener)
{
    __this->OnNewArguments(args, listener);
}

// protected void OnNewPartialArguments(Fuse.Reactive.Expression.Argument[] args, Fuse.Reactive.IListener listener) :125
void SimpleVarArgFunction__OnNewPartialArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener)
{
    __this->OnNewPartialArguments(args, listener);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :108
void SimpleVarArgFunction__Subscribe_fn(SimpleVarArgFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    SimpleVarArgFunction__SimpleSubscription* ss = SimpleVarArgFunction__SimpleSubscription::New1(__this, listener);
    ss->Init(context);
    return *__retval = (uObject*)ss, void();
}

// protected void OnNewArguments(Fuse.Reactive.Expression.Argument[] args, Fuse.Reactive.IListener listener) [instance] :140
void SimpleVarArgFunction::OnNewArguments(uArray* args, uObject* listener)
{
}

// protected void OnNewPartialArguments(Fuse.Reactive.Expression.Argument[] args, Fuse.Reactive.IListener listener) [instance] :125
void SimpleVarArgFunction::OnNewPartialArguments(uArray* args, uObject* listener)
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Snapshot.uno
// -------------------------------------------------------------------------------

// public sealed class Snapshot :8
// {
static void Snapshot_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(Snapshot, _Source), 0);
}

::g::Fuse::Reactive::Expression_type* Snapshot_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Snapshot);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Snapshot", options);
    type->fp_build_ = Snapshot_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Snapshot__Subscribe_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Snapshot__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public generated Fuse.Reactive.Expression get_Source() :10
void Snapshot__get_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Reactive.Expression value) :10
void Snapshot__set_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Source(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :18
void Snapshot__Subscribe_fn(Snapshot* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)Snapshot__Subscription::New1(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Source() [instance] :10
::g::Fuse::Reactive::Expression* Snapshot::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Reactive.Expression value) [instance] :10
void Snapshot::Source(::g::Fuse::Reactive::Expression* value)
{
    _Source = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.10.0-rc1/Window.uno
// ------------------------------------------------------------------------

// private sealed class WindowFunction.Subscription :43
// {
static void WindowFunction__Subscription_build(uType* type)
{
    ::STRINGS[62] = uString::Const("No RootViewport found in this context");
    ::STRINGS[63] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Panels/1.10.0-rc1/Window.uno");
    ::STRINGS[64] = uString::Const(".ctor");
    ::TYPES[11] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetDependencies(
        ::g::Fuse::Reactive::WindowCaps_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(WindowFunction__Subscription_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::WindowFunction_typeof(), offsetof(WindowFunction__Subscription, _func), 0,
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(WindowFunction__Subscription, _listener), 0,
        ::g::Fuse::RootViewport_typeof(), offsetof(WindowFunction__Subscription, _rootViewport), 0,
        ::g::Fuse::Reactive::WindowCaps_typeof(), offsetof(WindowFunction__Subscription, _windowCaps), 0);
}

WindowFunction__Subscription_type* WindowFunction__Subscription_typeof()
{
    static uSStrong<WindowFunction__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WindowFunction__Subscription);
    options.TypeSize = sizeof(WindowFunction__Subscription_type);
    type = (WindowFunction__Subscription_type*)uClassType::New("Fuse.Reactive.WindowFunction.Subscription", options);
    type->fp_build_ = WindowFunction__Subscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))WindowFunction__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.WindowFunction func, Fuse.RootViewport rv, Fuse.Reactive.IListener listener) :50
void WindowFunction__Subscription__ctor__fn(WindowFunction__Subscription* __this, ::g::Fuse::Reactive::WindowFunction* func, ::g::Fuse::RootViewport* rv, uObject* listener)
{
    __this->ctor_(func, rv, listener);
}

// public void Dispose() :69
void WindowFunction__Subscription__Dispose_fn(WindowFunction__Subscription* __this)
{
    __this->Dispose();
}

// public void Init() :60
void WindowFunction__Subscription__Init_fn(WindowFunction__Subscription* __this)
{
    __this->Init();
}

// public Subscription New(Fuse.Reactive.WindowFunction func, Fuse.RootViewport rv, Fuse.Reactive.IListener listener) :50
void WindowFunction__Subscription__New1_fn(::g::Fuse::Reactive::WindowFunction* func, ::g::Fuse::RootViewport* rv, uObject* listener, WindowFunction__Subscription** __retval)
{
    *__retval = WindowFunction__Subscription::New1(func, rv, listener);
}

// public Subscription(Fuse.Reactive.WindowFunction func, Fuse.RootViewport rv, Fuse.Reactive.IListener listener) [instance] :50
void WindowFunction__Subscription::ctor_(::g::Fuse::Reactive::WindowFunction* func, ::g::Fuse::RootViewport* rv, uObject* listener)
{
    _func = func;
    _listener = listener;
    _rootViewport = rv;

    if (rv == NULL)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[62/*"No RootView...*/], this, ::STRINGS[63/*"/usr/local/...*/], 57, ::STRINGS[64/*".ctor"*/], NULL);
}

// public void Dispose() [instance] :69
void WindowFunction__Subscription::Dispose()
{
    if (_windowCaps != NULL)
    {
        uPtr(_windowCaps)->Detach();
        _windowCaps = NULL;
    }

    _rootViewport = NULL;
    _func = NULL;
    _listener = NULL;
}

// public void Init() [instance] :60
void WindowFunction__Subscription::Init()
{
    if (_rootViewport == NULL)
        return;

    _windowCaps = ::g::Fuse::Reactive::WindowCaps::Attach(_rootViewport);
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)_func, _windowCaps);
}

// public Subscription New(Fuse.Reactive.WindowFunction func, Fuse.RootViewport rv, Fuse.Reactive.IListener listener) [static] :50
WindowFunction__Subscription* WindowFunction__Subscription::New1(::g::Fuse::Reactive::WindowFunction* func, ::g::Fuse::RootViewport* rv, uObject* listener)
{
    WindowFunction__Subscription* obj1 = (WindowFunction__Subscription*)uNew(WindowFunction__Subscription_typeof());
    obj1->ctor_(func, rv, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Member.uno
// -----------------------------------------------------------------------------

// private sealed class Member.Subscription :30
// {
static void Member__Subscription_build(uType* type)
{
    ::STRINGS[22] = uString::Const("'");
    ::STRINGS[65] = uString::Const("' does not contain property '");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[11] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[21] = ::g::Fuse::Reactive::IPropertySubscription_typeof();
    ::TYPES[34] = ::g::Fuse::IObject_typeof();
    ::TYPES[20] = ::g::Fuse::Reactive::IObservableObject_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(Member__Subscription_type, interface0),
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(Member__Subscription_type, interface1),
        ::g::Fuse::Reactive::IPropertyObserver_typeof(), offsetof(Member__Subscription_type, interface2),
        ::g::Fuse::Reactive::IWriteable_typeof(), offsetof(Member__Subscription_type, interface3));
    type->SetFields(2,
        ::g::Fuse::Reactive::Member_typeof(), offsetof(Member__Subscription, _member), 0,
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(Member__Subscription, _listener), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(Member__Subscription, _objectSub), 0,
        ::TYPES[21/*Fuse.Reactive.IPropertySubscription*/], offsetof(Member__Subscription, _obsObjSub), 0);
}

Member__Subscription_type* Member__Subscription_typeof()
{
    static uSStrong<Member__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Member__Subscription);
    options.TypeSize = sizeof(Member__Subscription_type);
    type = (Member__Subscription_type*)uClassType::New("Fuse.Reactive.Member.Subscription", options);
    type->fp_build_ = Member__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))Member__Subscription__Dispose_fn;
    type->fp_OnLostData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*))Member__Subscription__OnLostData_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))Member__Subscription__OnNewData_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, uObject*, uString*, uObject*))Member__Subscription__FuseReactiveIPropertyObserverOnPropertyChanged_fn;
    type->interface3.fp_TrySetExclusive = (void(*)(uObject*, uObject*, bool*))Member__Subscription__FuseReactiveIWriteableTrySetExclusive_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Member__Subscription__Dispose_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :36
void Member__Subscription__ctor_1_fn(Member__Subscription* __this, ::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener)
{
    __this->ctor_1(member, context, listener);
}

// public override sealed void Dispose() :95
void Member__Subscription__Dispose_fn(Member__Subscription* __this)
{
    if (__this->_objectSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_objectSub), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_objectSub = NULL;
    }

    __this->DisposeObservableObjectSubscription();
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);
}

// private void DisposeObservableObjectSubscription() :45
void Member__Subscription__DisposeObservableObjectSubscription_fn(Member__Subscription* __this)
{
    __this->DisposeObservableObjectSubscription();
}

// private void Fuse.Reactive.IPropertyObserver.OnPropertyChanged(Uno.IDisposable sub, string propName, object newValue) :81
void Member__Subscription__FuseReactiveIPropertyObserverOnPropertyChanged_fn(Member__Subscription* __this, uObject* sub, uString* propName, uObject* newValue)
{
    if (__this->_obsObjSub != sub)
        return;

    if (::g::Uno::String::op_Inequality(propName, uPtr(__this->_member)->Name()))
        return;

    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)__this->_member, newValue);
}

// private bool Fuse.Reactive.IWriteable.TrySetExclusive(object newObj) :88
void Member__Subscription__FuseReactiveIWriteableTrySetExclusive_fn(Member__Subscription* __this, uObject* newObj, bool* __retval)
{
    if (__this->_obsObjSub != NULL)
        return *__retval = ::g::Fuse::Reactive::IPropertySubscription::TrySetExclusive(uInterface(uPtr(__this->_obsObjSub), ::TYPES[21/*Fuse.Reactive.IPropertySubscription*/]), uPtr(__this->_member)->Name(), newObj), void();

    return *__retval = false, void();
}

// public Subscription New(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :36
void Member__Subscription__New1_fn(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener, Member__Subscription** __retval)
{
    *__retval = Member__Subscription::New1(member, context, listener);
}

// protected override sealed void OnLostData(Fuse.Reactive.IExpression source) :76
void Member__Subscription__OnLostData_fn(Member__Subscription* __this, uObject* source)
{
    __this->DisposeObservableObjectSubscription();
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object obj) :54
void Member__Subscription__OnNewData_fn(Member__Subscription* __this, uObject* source, uObject* obj)
{
    __this->DisposeObservableObjectSubscription();
    __this->ClearDiagnostic();
    uObject* io = uAs<uObject*>(obj, ::TYPES[34/*Fuse.IObject*/]);

    if ((io != NULL) && ::g::Fuse::IObject::ContainsKey(uInterface(uPtr(io), ::TYPES[34/*Fuse.IObject*/]), uPtr(__this->_member)->Name()))
    {
        uObject* obsObj = uAs<uObject*>(io, ::TYPES[20/*Fuse.Reactive.IObservableObject*/]);

        if (obsObj != NULL)
            __this->_obsObjSub = ::g::Fuse::Reactive::IObservableObject::Subscribe(uInterface(uPtr(obsObj), ::TYPES[20/*Fuse.Reactive.IObservableObject*/]), (uObject*)__this);

        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)__this->_member, ::g::Fuse::IObject::Item(uInterface(uPtr(io), ::TYPES[34/*Fuse.IObject*/]), uPtr(__this->_member)->Name()));
    }
    else
    {
        __this->SetDiagnostic(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[22/*"'"*/], ::g::Uno::Object::ToString(uPtr(uPtr(__this->_member)->BaseObject()))), ::STRINGS[65/*"' does not ...*/]), uPtr(__this->_member)->Name()), ::STRINGS[22/*"'"*/]), __this->_member);
        ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(__this->_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)__this->_member);
    }
}

// public Subscription(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :36
void Member__Subscription::ctor_1(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener)
{
    ctor_();
    _listener = listener;
    _member = member;
    _objectSub = uPtr(uPtr(_member)->BaseObject())->Subscribe(context, (uObject*)this);
}

// private void DisposeObservableObjectSubscription() [instance] :45
void Member__Subscription::DisposeObservableObjectSubscription()
{
    if (_obsObjSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_obsObjSub), ::TYPES[0/*Uno.IDisposable*/]));
        _obsObjSub = NULL;
    }
}

// public Subscription New(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :36
Member__Subscription* Member__Subscription::New1(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener)
{
    Member__Subscription* obj1 = (Member__Subscription*)uNew(Member__Subscription_typeof());
    obj1->ctor_1(member, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Snapshot.uno
// -------------------------------------------------------------------------------

// private sealed class Snapshot.Subscription :23
// {
static void Snapshot__Subscription_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[11] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(Snapshot__Subscription_type, interface0),
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(Snapshot__Subscription_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Reactive::Snapshot_typeof(), offsetof(Snapshot__Subscription, _snap), 0,
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(Snapshot__Subscription, _listener), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(Snapshot__Subscription, _sub), 0);
}

Snapshot__Subscription_type* Snapshot__Subscription_typeof()
{
    static uSStrong<Snapshot__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Snapshot__Subscription);
    options.TypeSize = sizeof(Snapshot__Subscription_type);
    type = (Snapshot__Subscription_type*)uClassType::New("Fuse.Reactive.Snapshot.Subscription", options);
    type->fp_build_ = Snapshot__Subscription_build;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))Snapshot__Subscription__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))Snapshot__Subscription__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Snapshot__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :29
void Snapshot__Subscription__ctor__fn(Snapshot__Subscription* __this, ::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    __this->ctor_(snap, context, listener);
}

// public void Dispose() :36
void Snapshot__Subscription__Dispose_fn(Snapshot__Subscription* __this)
{
    __this->Dispose();
}

// private void Fuse.Reactive.IListener.OnLostData(Fuse.Reactive.IExpression source) :54
void Snapshot__Subscription__FuseReactiveIListenerOnLostData_fn(Snapshot__Subscription* __this, uObject* source)
{
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :46
void Snapshot__Subscription__FuseReactiveIListenerOnNewData_fn(Snapshot__Subscription* __this, uObject* source, uObject* value)
{
    if (__this->_listener != NULL)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)__this->_snap, value);

    __this->Dispose();
}

// public Subscription New(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :29
void Snapshot__Subscription__New1_fn(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener, Snapshot__Subscription** __retval)
{
    *__retval = Snapshot__Subscription::New1(snap, context, listener);
}

// public Subscription(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :29
void Snapshot__Subscription::ctor_(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    _snap = snap;
    _listener = listener;
    _sub = uPtr(uPtr(_snap)->Source())->Subscribe(context, (uObject*)this);
}

// public void Dispose() [instance] :36
void Snapshot__Subscription::Dispose()
{
    _listener = NULL;

    if (_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[0/*Uno.IDisposable*/]));
        _sub = NULL;
    }
}

// public Subscription New(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :29
Snapshot__Subscription* Snapshot__Subscription::New1(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    Snapshot__Subscription* obj1 = (Snapshot__Subscription*)uNew(Snapshot__Subscription_typeof());
    obj1->ctor_(snap, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Parameter.uno
// --------------------------------------------------------------------------------

// private sealed class Parameter.Subscription :31
// {
static void Parameter__Subscription_build(uType* type)
{
    ::STRINGS[66] = uString::Const("Failed to fetch parameter: ");
    ::STRINGS[67] = uString::Const("Failed to parse parameter: ");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[11] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[17] = ::g::Uno::Exception_typeof();
    ::TYPES[40] = ::g::Fuse::Visual_typeof();
    ::TYPES[41] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::Parameter_typeof(), offsetof(Parameter__Subscription, _parameter), 0,
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(Parameter__Subscription, _listener), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(Parameter__Subscription, _sub), 0,
        ::TYPES[40/*Fuse.Visual*/], offsetof(Parameter__Subscription, _visual), 0);
}

::g::Fuse::Reactive::InnerListener_type* Parameter__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Parameter__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.Parameter.Subscription", options);
    type->fp_build_ = Parameter__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))Parameter__Subscription__Dispose_fn;
    type->fp_OnLostData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*))Parameter__Subscription__OnLostData_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))Parameter__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Parameter__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Parameter parameter, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :37
void Parameter__Subscription__ctor_1_fn(Parameter__Subscription* __this, ::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener)
{
    __this->ctor_1(parameter, context, listener);
}

// public override sealed void Dispose() :44
void Parameter__Subscription__Dispose_fn(Parameter__Subscription* __this)
{
    __this->UnsubscribeVisual();
    __this->_listener = NULL;

    if (__this->_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_sub), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_sub = NULL;
    }

    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);
}

// public Subscription New(Fuse.Reactive.Parameter parameter, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :37
void Parameter__Subscription__New1_fn(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener, Parameter__Subscription** __retval)
{
    *__retval = Parameter__Subscription::New1(parameter, context, listener);
}

// protected override sealed void OnLostData(Fuse.Reactive.IExpression source) :87
void Parameter__Subscription__OnLostData_fn(Parameter__Subscription* __this, uObject* source)
{
    __this->ClearDiagnostic();
    __this->UnsubscribeVisual();
    ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(__this->_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)__this->_parameter);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object obj) :67
void Parameter__Subscription__OnNewData_fn(Parameter__Subscription* __this, uObject* source, uObject* obj)
{
    __this->ClearDiagnostic();
    __this->UnsubscribeVisual();

    try
    {
        {
            __this->_visual = uCast< ::g::Fuse::Visual*>(obj, ::TYPES[40/*Fuse.Visual*/]);
            uPtr(__this->_visual)->add_ParameterChanged(uDelegate::New(::TYPES[41/*Uno.EventHandler*/], (void*)Parameter__Subscription__OnParameterChanged_fn, __this));
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        __this->SetDiagnostic(::g::Uno::String::op_Addition2(::STRINGS[66/*"Failed to f...*/], uPtr(e)->Message()), __this->_parameter);
        return;
    }

    __this->OnParameterChanged(NULL, NULL);
}

// private void OnParameterChanged(object sender, Uno.EventArgs args) :94
void Parameter__Subscription__OnParameterChanged_fn(Parameter__Subscription* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnParameterChanged(sender, args);
}

// private void UnsubscribeVisual() :56
void Parameter__Subscription__UnsubscribeVisual_fn(Parameter__Subscription* __this)
{
    __this->UnsubscribeVisual();
}

// public Subscription(Fuse.Reactive.Parameter parameter, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :37
void Parameter__Subscription::ctor_1(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener)
{
    ctor_();
    _parameter = parameter;
    _listener = listener;
    _sub = uPtr(uPtr(_parameter)->Visual)->Subscribe(context, (uObject*)this);
}

// private void OnParameterChanged(object sender, Uno.EventArgs args) [instance] :94
void Parameter__Subscription::OnParameterChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (_visual == NULL)
        return;

    if (::g::Uno::String::op_Equality(uPtr(_visual)->Parameter(), NULL))
        return;

    ClearDiagnostic();
    uObject* data = NULL;

    try
    {
        {
            data = ::g::Fuse::Json::Parse(uPtr(_visual)->Parameter());
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        SetDiagnostic(::g::Uno::String::op_Addition2(::STRINGS[67/*"Failed to p...*/], uPtr(e)->Message()), _parameter);
        return;
    }

    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)_parameter, data);
}

// private void UnsubscribeVisual() [instance] :56
void Parameter__Subscription::UnsubscribeVisual()
{
    if (_visual != NULL)
    {
        uPtr(_visual)->remove_ParameterChanged(uDelegate::New(::TYPES[41/*Uno.EventHandler*/], (void*)Parameter__Subscription__OnParameterChanged_fn, this));
        _visual = NULL;
    }
}

// public Subscription New(Fuse.Reactive.Parameter parameter, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :37
Parameter__Subscription* Parameter__Subscription::New1(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener)
{
    Parameter__Subscription* obj1 = (Parameter__Subscription*)uNew(Parameter__Subscription_typeof());
    obj1->ctor_1(parameter, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Property.uno
// -------------------------------------------------------------------------------

// private sealed class Property.Subscription :25
// {
static void Property__Subscription_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof());
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Property__Subscription_type, interface0),
        ::g::Fuse::Reactive::IWriteable_typeof(), offsetof(Property__Subscription_type, interface1),
        ::g::Uno::IDisposable_typeof(), offsetof(Property__Subscription_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Reactive::Property_typeof(), offsetof(Property__Subscription, _prop), 0,
        ::g::Uno::UX::PropertyObject_typeof(), offsetof(Property__Subscription, _object), 0,
        ::g::Uno::UX::PropertyAccessor_typeof(), offsetof(Property__Subscription, _accessor), 0,
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(Property__Subscription, _listener), 0);
}

Property__Subscription_type* Property__Subscription_typeof()
{
    static uSStrong<Property__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Property__Subscription);
    options.TypeSize = sizeof(Property__Subscription_type);
    type = (Property__Subscription_type*)uClassType::New("Fuse.Reactive.Property.Subscription", options);
    type->fp_build_ = Property__Subscription_build;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Property__Subscription__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_TrySetExclusive = (void(*)(uObject*, uObject*, bool*))Property__Subscription__TrySetExclusive_fn;
    type->interface2.fp_Dispose = (void(*)(uObject*))Property__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) :32
void Property__Subscription__ctor__fn(Property__Subscription* __this, ::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    __this->ctor_(prop, obj, accessor, listener);
}

// public void Dispose() :55
void Property__Subscription__Dispose_fn(Property__Subscription* __this)
{
    __this->Dispose();
}

// public Subscription New(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) :32
void Property__Subscription__New1_fn(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener, Property__Subscription** __retval)
{
    *__retval = Property__Subscription::New1(prop, obj, accessor, listener);
}

// private void PushValue() :68
void Property__Subscription__PushValue_fn(Property__Subscription* __this)
{
    __this->PushValue();
}

// public bool TrySetExclusive(object value) :44
void Property__Subscription__TrySetExclusive_fn(Property__Subscription* __this, uObject* value, bool* __retval)
{
    *__retval = __this->TrySetExclusive(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :63
void Property__Subscription__UnoUXIPropertyListenerOnPropertyChanged_fn(Property__Subscription* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->_accessor)->Name()))
        __this->PushValue();
}

// public Subscription(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) [instance] :32
void Property__Subscription::ctor_(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    _prop = prop;
    _listener = listener;
    _accessor = accessor;
    _object = obj;
    uPtr(_object)->AddPropertyListener((uObject*)this);
    PushValue();
}

// public void Dispose() [instance] :55
void Property__Subscription::Dispose()
{
    uPtr(_object)->RemovePropertyListener((uObject*)this);
    _accessor = NULL;
    _object = NULL;
    _listener = NULL;
}

// private void PushValue() [instance] :68
void Property__Subscription::PushValue()
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)_prop, uPtr(_accessor)->GetAsObject(_object));
}

// public bool TrySetExclusive(object value) [instance] :44
bool Property__Subscription::TrySetExclusive(uObject* value)
{
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(_accessor)->PropertyType(), value, &res, _object))
    {
        uPtr(_accessor)->SetAsObject(_object, res, (uObject*)this);
        return true;
    }

    return false;
}

// public Subscription New(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) [static] :32
Property__Subscription* Property__Subscription::New1(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    Property__Subscription* obj1 = (Property__Subscription*)uNew(Property__Subscription_typeof());
    obj1->ctor_(prop, obj, accessor, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/ExpressionListener.uno
// -----------------------------------------------------------------------------------------

// private sealed class ComputeExpression.Subscription :329
// {
static void ComputeExpression__Subscription_build(uType* type)
{
    ::STRINGS[68] = uString::Const("Failed to compute value for (");
    ::STRINGS[69] = uString::Const(",");
    ::STRINGS[70] = uString::Const("undefined");
    ::STRINGS[71] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/ExpressionListener.uno");
    ::STRINGS[72] = uString::Const("OnArguments");
    ::TYPES[42] = ::g::Fuse::Reactive::UnaryOperator_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ExpressionListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::ExpressionListener_type, interface1));
    type->SetFields(9,
        ::g::Fuse::Reactive::ComputeExpression_typeof(), offsetof(ComputeExpression__Subscription, _expr), 0);
}

::g::Fuse::Reactive::ExpressionListener_type* ComputeExpression__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ExpressionListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionListener_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ComputeExpression__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ExpressionListener_type);
    type = (::g::Fuse::Reactive::ExpressionListener_type*)uClassType::New("Fuse.Reactive.ComputeExpression.Subscription", options);
    type->fp_build_ = ComputeExpression__Subscription_build;
    type->fp_OnArguments = (void(*)(::g::Fuse::Reactive::ExpressionSubscriber*, uArray*))ComputeExpression__Subscription__OnArguments_fn;
    type->fp_OnClearData = (void(*)(::g::Fuse::Reactive::ExpressionSubscriber*))ComputeExpression__Subscription__OnClearData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Reactive::ExpressionListener__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.ComputeExpression expr, Fuse.Reactive.IListener listener) :333
void ComputeExpression__Subscription__ctor_3_fn(ComputeExpression__Subscription* __this, ::g::Fuse::Reactive::ComputeExpression* expr, uObject* listener)
{
    __this->ctor_3(expr, listener);
}

// public Subscription New(Fuse.Reactive.ComputeExpression expr, Fuse.Reactive.IListener listener) :333
void ComputeExpression__Subscription__New1_fn(::g::Fuse::Reactive::ComputeExpression* expr, uObject* listener, ComputeExpression__Subscription** __retval)
{
    *__retval = ComputeExpression__Subscription::New1(expr, listener);
}

// protected override sealed void OnArguments(Fuse.Reactive.Expression.Argument[] args) :339
void ComputeExpression__Subscription__OnArguments_fn(ComputeExpression__Subscription* __this, uArray* args)
{
    if ((uPtr(__this->_expr)->_flags & 2048) == 2048)
    {
        uPtr(uCast< ::g::Fuse::Reactive::UnaryOperator*>(__this->_expr, ::TYPES[42/*Fuse.Reactive.UnaryOperator*/]))->InternalOnNewOperand(__this->Listener(), uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->Value());
        return;
    }

    uObject* result;

    if (uPtr(__this->_expr)->TryCompute(args, &result))
        __this->SetData(result);
    else
    {
        if (!((uPtr(__this->_expr)->_flags & 32) == 32))
        {
            uString* msg = ::STRINGS[68/*"Failed to c...*/];

            for (int32_t i = 0; i < uPtr(args)->Length(); ++i)
            {
                if (i > 0)
                    msg = ::g::Uno::String::op_Addition2(msg, ::STRINGS[69/*","*/]);

                if (uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i))->HasValue())
                    msg = ::g::Uno::String::op_Addition1(msg, uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i))->Value());
                else
                    msg = ::g::Uno::String::op_Addition2(msg, ::STRINGS[70/*"undefined"*/]);
            }

            ::g::Fuse::Diagnostics::UserWarning(msg, __this->_expr, ::STRINGS[71/*"/usr/local/...*/], 366, ::STRINGS[72/*"OnArguments"*/]);
        }

        __this->OnClearData();
    }
}

// internal override sealed void OnClearData() :372
void ComputeExpression__Subscription__OnClearData_fn(ComputeExpression__Subscription* __this)
{
    if ((uPtr(__this->_expr)->_flags & 2048) == 2048)
        uPtr(uCast< ::g::Fuse::Reactive::UnaryOperator*>(__this->_expr, ::TYPES[42/*Fuse.Reactive.UnaryOperator*/]))->InternalOnLostOperand(__this->Listener());
    else
        ::g::Fuse::Reactive::ExpressionListener__OnClearData_fn(__this);
}

// public Subscription(Fuse.Reactive.ComputeExpression expr, Fuse.Reactive.IListener listener) [instance] :333
void ComputeExpression__Subscription::ctor_3(::g::Fuse::Reactive::ComputeExpression* expr, uObject* listener)
{
    ctor_2(expr, listener, uPtr(expr)->_args, uPtr(expr)->EffectiveFlags());
    _expr = expr;
}

// public Subscription New(Fuse.Reactive.ComputeExpression expr, Fuse.Reactive.IListener listener) [static] :333
ComputeExpression__Subscription* ComputeExpression__Subscription::New1(::g::Fuse::Reactive::ComputeExpression* expr, uObject* listener)
{
    ComputeExpression__Subscription* obj1 = (ComputeExpression__Subscription*)uNew(ComputeExpression__Subscription_typeof());
    obj1->ctor_3(expr, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/PlatformFunctions.uno
// ----------------------------------------------------------------------------------------

// private sealed class PlatformFunction.Subscription :33
// {
static void PlatformFunction__Subscription_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PlatformFunction__Subscription_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::PlatformFunction_typeof(), offsetof(PlatformFunction__Subscription, _func), 0,
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(PlatformFunction__Subscription, _listener), 0);
}

PlatformFunction__Subscription_type* PlatformFunction__Subscription_typeof()
{
    static uSStrong<PlatformFunction__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PlatformFunction__Subscription);
    options.TypeSize = sizeof(PlatformFunction__Subscription_type);
    type = (PlatformFunction__Subscription_type*)uClassType::New("Fuse.Reactive.PlatformFunction.Subscription", options);
    type->fp_build_ = PlatformFunction__Subscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))PlatformFunction__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.PlatformFunction func, Fuse.Reactive.IListener listener) :38
void PlatformFunction__Subscription__ctor__fn(PlatformFunction__Subscription* __this, ::g::Fuse::Reactive::PlatformFunction* func, uObject* listener)
{
    __this->ctor_(func, listener);
}

// public void Dispose() :49
void PlatformFunction__Subscription__Dispose_fn(PlatformFunction__Subscription* __this)
{
    __this->Dispose();
}

// public void Init() :44
void PlatformFunction__Subscription__Init_fn(PlatformFunction__Subscription* __this)
{
    __this->Init();
}

// public Subscription New(Fuse.Reactive.PlatformFunction func, Fuse.Reactive.IListener listener) :38
void PlatformFunction__Subscription__New1_fn(::g::Fuse::Reactive::PlatformFunction* func, uObject* listener, PlatformFunction__Subscription** __retval)
{
    *__retval = PlatformFunction__Subscription::New1(func, listener);
}

// public Subscription(Fuse.Reactive.PlatformFunction func, Fuse.Reactive.IListener listener) [instance] :38
void PlatformFunction__Subscription::ctor_(::g::Fuse::Reactive::PlatformFunction* func, uObject* listener)
{
    _func = func;
    _listener = listener;
}

// public void Dispose() [instance] :49
void PlatformFunction__Subscription::Dispose()
{
    _func = NULL;
    _listener = NULL;
}

// public void Init() [instance] :44
void PlatformFunction__Subscription::Init()
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)_func, uBox(::TYPES[4/*bool*/], uPtr(_func)->GetResult()));
}

// public Subscription New(Fuse.Reactive.PlatformFunction func, Fuse.Reactive.IListener listener) [static] :38
PlatformFunction__Subscription* PlatformFunction__Subscription::New1(::g::Fuse::Reactive::PlatformFunction* func, uObject* listener)
{
    PlatformFunction__Subscription* obj1 = (PlatformFunction__Subscription*)uNew(PlatformFunction__Subscription_typeof());
    obj1->ctor_(func, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/VarArgFunction.uno
// -------------------------------------------------------------------------------------

// protected abstract class VarArgFunction.Subscription :32
// {
static void VarArgFunction__Subscription_build(uType* type)
{
    ::STRINGS[73] = uString::Const("VarArgFunction.Subscription.ClearData() should be implemented");
    ::STRINGS[74] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/VarArgFunction.uno");
    ::STRINGS[75] = uString::Const("ClearData");
    ::TYPES[43] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(6/*ToArray<Fuse.Reactive.Expression>*/, ::g::Fuse::Reactive::Expression_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(VarArgFunction__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(VarArgFunction__Subscription_type, interface1));
    type->SetFields(5,
        ::g::Fuse::Reactive::VarArgFunction_typeof(), offsetof(VarArgFunction__Subscription, _func), 0,
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(VarArgFunction__Subscription, _context), 0);
}

VarArgFunction__Subscription_type* VarArgFunction__Subscription_typeof()
{
    static uSStrong<VarArgFunction__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionSubscriber_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(VarArgFunction__Subscription);
    options.TypeSize = sizeof(VarArgFunction__Subscription_type);
    type = (VarArgFunction__Subscription_type*)uClassType::New("Fuse.Reactive.VarArgFunction.Subscription", options);
    type->fp_build_ = VarArgFunction__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))VarArgFunction__Subscription__Dispose_fn;
    type->fp_OnArguments = (void(*)(::g::Fuse::Reactive::ExpressionSubscriber*, uArray*))VarArgFunction__Subscription__OnArguments_fn;
    type->fp_OnClearData = (void(*)(::g::Fuse::Reactive::ExpressionSubscriber*))VarArgFunction__Subscription__OnClearData_fn;
    type->fp_OnNewArguments = VarArgFunction__Subscription__OnNewArguments_fn;
    type->fp_OnNewPartialArguments = VarArgFunction__Subscription__OnNewPartialArguments_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))VarArgFunction__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.VarArgFunction func) :47
void VarArgFunction__Subscription__ctor_2_fn(VarArgFunction__Subscription* __this, ::g::Fuse::Reactive::VarArgFunction* func)
{
    __this->ctor_2(func);
}

// protected void ClearData() :67
void VarArgFunction__Subscription__ClearData_fn(VarArgFunction__Subscription* __this)
{
    __this->ClearData();
}

// public override void Dispose() :90
void VarArgFunction__Subscription__Dispose_fn(VarArgFunction__Subscription* __this)
{
    ::g::Fuse::Reactive::ExpressionSubscriber__Dispose_fn(__this);
    __this->_func = NULL;
    __this->_context = NULL;
}

// protected override sealed void OnArguments(Fuse.Reactive.Expression.Argument[] args) :73
void VarArgFunction__Subscription__OnArguments_fn(VarArgFunction__Subscription* __this, uArray* args)
{
    bool all = true;

    for (int32_t i = 0; i < uPtr(args)->Length(); i++)
        if (!uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i))->HasValue())
        {
            all = false;
            break;
        }

    __this->OnNewPartialArguments(args);

    if (all)
        __this->OnNewArguments(args);
}

// internal override sealed void OnClearData() :62
void VarArgFunction__Subscription__OnClearData_fn(VarArgFunction__Subscription* __this)
{
    __this->ClearData();
}

// protected virtual void OnNewArguments(Fuse.Reactive.Expression.Argument[] args) :98
void VarArgFunction__Subscription__OnNewArguments_fn(VarArgFunction__Subscription* __this, uArray* args)
{
}

// protected virtual void OnNewPartialArguments(Fuse.Reactive.Expression.Argument[] args) :97
void VarArgFunction__Subscription__OnNewPartialArguments_fn(VarArgFunction__Subscription* __this, uArray* args)
{
}

// protected Subscription(Fuse.Reactive.VarArgFunction func) [instance] :47
void VarArgFunction__Subscription::ctor_2(::g::Fuse::Reactive::VarArgFunction* func)
{
    ctor_1((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[43/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Reactive.Expression>*/], uPtr(func)->Arguments()), 1024, NULL);
    _func = func;
}

// protected void ClearData() [instance] :67
void VarArgFunction__Subscription::ClearData()
{
    ::g::Fuse::Diagnostics::UserError(::STRINGS[73/*"VarArgFunct...*/], this, ::STRINGS[74/*"/usr/local/...*/], 70, ::STRINGS[75/*"ClearData"*/], NULL);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/DataFunction.uno
// --------------------------------------------------------------------------------

// private sealed class DataFunction.Subscription :40
// {
static void DataFunction__Subscription_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(DataFunction__Subscription_type, interface0),
        ::g::Fuse::Node__IDataListener_typeof(), offsetof(DataFunction__Subscription_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Reactive::DataFunction_typeof(), offsetof(DataFunction__Subscription, _expr), 0,
        ::TYPES[11/*Fuse.Reactive.IListener*/], offsetof(DataFunction__Subscription, _listener), 0,
        ::g::Fuse::Node_typeof(), offsetof(DataFunction__Subscription, _node), 0,
        ::g::Fuse::Node__NodeDataSubscription_typeof(), offsetof(DataFunction__Subscription, _dataSub), 0);
}

DataFunction__Subscription_type* DataFunction__Subscription_typeof()
{
    static uSStrong<DataFunction__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(DataFunction__Subscription);
    options.TypeSize = sizeof(DataFunction__Subscription_type);
    type = (DataFunction__Subscription_type*)uClassType::New("Fuse.Reactive.DataFunction.Subscription", options);
    type->fp_build_ = DataFunction__Subscription_build;
    type->interface1.fp_OnDataChanged = (void(*)(uObject*))DataFunction__Subscription__FuseNodeIDataListenerOnDataChanged_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))DataFunction__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.DataFunction expr, Fuse.Reactive.IListener listener, Fuse.Node node) :48
void DataFunction__Subscription__ctor__fn(DataFunction__Subscription* __this, ::g::Fuse::Reactive::DataFunction* expr, uObject* listener, ::g::Fuse::Node* node)
{
    __this->ctor_(expr, listener, node);
}

// public void Dispose() :77
void DataFunction__Subscription__Dispose_fn(DataFunction__Subscription* __this)
{
    __this->Dispose();
}

// private void Fuse.Node.IDataListener.OnDataChanged() :61
void DataFunction__Subscription__FuseNodeIDataListenerOnDataChanged_fn(DataFunction__Subscription* __this)
{
    __this->UpdateData();
}

// public void Init() :55
void DataFunction__Subscription__Init_fn(DataFunction__Subscription* __this)
{
    __this->Init();
}

// public Subscription New(Fuse.Reactive.DataFunction expr, Fuse.Reactive.IListener listener, Fuse.Node node) :48
void DataFunction__Subscription__New1_fn(::g::Fuse::Reactive::DataFunction* expr, uObject* listener, ::g::Fuse::Node* node, DataFunction__Subscription** __retval)
{
    *__retval = DataFunction__Subscription::New1(expr, listener, node);
}

// private void UpdateData() :66
void DataFunction__Subscription__UpdateData_fn(DataFunction__Subscription* __this)
{
    __this->UpdateData();
}

// public Subscription(Fuse.Reactive.DataFunction expr, Fuse.Reactive.IListener listener, Fuse.Node node) [instance] :48
void DataFunction__Subscription::ctor_(::g::Fuse::Reactive::DataFunction* expr, uObject* listener, ::g::Fuse::Node* node)
{
    _expr = expr;
    _listener = listener;
    _node = node;
}

// public void Dispose() [instance] :77
void DataFunction__Subscription::Dispose()
{
    if (_dataSub != NULL)
    {
        uPtr(_dataSub)->Dispose();
        _dataSub = NULL;
    }

    _expr = NULL;
    _listener = NULL;
    _node = NULL;
}

// public void Init() [instance] :55
void DataFunction__Subscription::Init()
{
    _dataSub = uPtr(_node)->SubscribePrimeDataContext((uObject*)this);
    UpdateData();
}

// private void UpdateData() [instance] :66
void DataFunction__Subscription::UpdateData()
{
    if (_dataSub == NULL)
        return;

    if (!uPtr(_dataSub)->HasData())
        ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)_expr);
    else
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)_expr, uPtr(_dataSub)->Data());
}

// public Subscription New(Fuse.Reactive.DataFunction expr, Fuse.Reactive.IListener listener, Fuse.Node node) [static] :48
DataFunction__Subscription* DataFunction__Subscription::New1(::g::Fuse::Reactive::DataFunction* expr, uObject* listener, ::g::Fuse::Node* node)
{
    DataFunction__Subscription* obj1 = (DataFunction__Subscription*)uNew(DataFunction__Subscription_typeof());
    obj1->ctor_(expr, listener, node);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Instantiator.uno
// --------------------------------------------------------------------------------

// internal struct TemplateMatch :82
// {
static void TemplateMatch_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(TemplateMatch, All), 0,
        ::g::Uno::UX::Template_typeof(), offsetof(TemplateMatch, Template), 0);
}

uStructType* TemplateMatch_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 2;
    options.Alignment = alignof(TemplateMatch);
    options.ValueSize = sizeof(TemplateMatch);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Reactive.TemplateMatch", options);
    type->fp_build_ = TemplateMatch_build;
    return type;
}

// public bool Matches(Fuse.Reactive.TemplateMatch b) :89
void TemplateMatch__Matches_fn(TemplateMatch* __this, TemplateMatch* b, bool* __retval)
{
    *__retval = __this->Matches(*b);
}

// public bool Matches(Fuse.Reactive.TemplateMatch b) [instance] :89
bool TemplateMatch::Matches(TemplateMatch b)
{
    if (All != b.All)
        return false;

    return Template == b.Template;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/TernaryOperator.uno
// --------------------------------------------------------------------------------------

// public abstract class TernaryOperator :8
// {
static void TernaryOperator_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" No `TryCompute`, or a deprecated form, overriden. Migrate your code to override the one with `bool` return. ");
    ::STRINGS[76] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/TernaryOperator.uno");
    ::STRINGS[2] = uString::Const("TryCompute");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ComputeExpression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::ComputeExpression_type, interface1));
    type->SetFields(5);
}

::g::Fuse::Reactive::ComputeExpression_type* TernaryOperator_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ComputeExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ComputeExpression_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TernaryOperator);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ComputeExpression_type);
    type = (::g::Fuse::Reactive::ComputeExpression_type*)uClassType::New("Fuse.Reactive.TernaryOperator", options);
    type->fp_build_ = TernaryOperator_build;
    type->fp_GetFlags = (void(*)(::g::Fuse::Reactive::ComputeExpression*, int32_t*))TernaryOperator__GetFlags_fn;
    type->fp_TryCompute = (void(*)(::g::Fuse::Reactive::ComputeExpression*, uArray*, uObject**, bool*))TernaryOperator__TryCompute_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ComputeExpression__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected object Compute(object first, object second, object third) :42
void TernaryOperator__Compute_fn(TernaryOperator* __this, uObject* first, uObject* second, uObject* third, uObject** __retval)
{
    *__retval = __this->Compute(first, second, third);
}

// internal override sealed Fuse.Reactive.ComputeExpression.Flags GetFlags() :20
void TernaryOperator__GetFlags_fn(TernaryOperator* __this, int32_t* __retval)
{
    return *__retval = ((0 | (__this->IsFirstOptional() ? 1 : 0)) | (__this->IsSecondOptional() ? 2 : 0)) | (__this->IsThirdOptional() ? 4 : 0), void();
}

// protected bool get_IsFirstOptional() :30
void TernaryOperator__get_IsFirstOptional_fn(TernaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFirstOptional();
}

// protected bool get_IsSecondOptional() :31
void TernaryOperator__get_IsSecondOptional_fn(TernaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsSecondOptional();
}

// protected bool get_IsThirdOptional() :32
void TernaryOperator__get_IsThirdOptional_fn(TernaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsThirdOptional();
}

// protected override sealed bool TryCompute(Fuse.Reactive.Expression.Argument[] args, object& result) :44
void TernaryOperator__TryCompute_fn(TernaryOperator* __this, uArray* args, uObject** result, bool* __retval)
{
    return *__retval = __this->TryCompute1(uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->Value(), uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(1))->Value(), uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(2))->Value(), result), void();
}

// protected bool TryCompute(object first, object second, object third, object& result) :34
void TernaryOperator__TryCompute1_fn(TernaryOperator* __this, uObject* first, uObject* second, uObject* third, uObject** result, bool* __retval)
{
    *__retval = __this->TryCompute1(first, second, third, result);
}

// protected object Compute(object first, object second, object third) [instance] :42
uObject* TernaryOperator::Compute(uObject* first, uObject* second, uObject* third)
{
    return NULL;
}

// protected bool get_IsFirstOptional() [instance] :30
bool TernaryOperator::IsFirstOptional()
{
    return false;
}

// protected bool get_IsSecondOptional() [instance] :31
bool TernaryOperator::IsSecondOptional()
{
    return false;
}

// protected bool get_IsThirdOptional() [instance] :32
bool TernaryOperator::IsThirdOptional()
{
    return false;
}

// protected bool TryCompute(object first, object second, object third, object& result) [instance] :34
bool TernaryOperator::TryCompute1(uObject* first, uObject* second, uObject* third, uObject** result)
{
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[0/*" No `TryCom...*/], this, ::STRINGS[76/*"/usr/local/...*/], 36, ::STRINGS[2/*"TryCompute"*/]);
    *result = Compute(first, second, third);
    return true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/UnaryOperator.uno
// ------------------------------------------------------------------------------------

// public abstract class UnaryOperator :8
// {
static void UnaryOperator_build(uType* type)
{
    ::STRINGS[77] = uString::Const("Failed to compute value: ");
    ::STRINGS[78] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/UnaryOperator.uno");
    ::STRINGS[79] = uString::Const("OnNewOperand");
    ::STRINGS[0] = uString::Const(" No `TryCompute`, or a deprecated form, overriden. Migrate your code to override the one with `bool` return. ");
    ::STRINGS[2] = uString::Const("TryCompute");
    ::TYPES[11] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ComputeExpression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::ComputeExpression_type, interface1));
    type->SetFields(5);
}

::g::Fuse::Reactive::ComputeExpression_type* UnaryOperator_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ComputeExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ComputeExpression_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UnaryOperator);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ComputeExpression_type);
    type = (::g::Fuse::Reactive::ComputeExpression_type*)uClassType::New("Fuse.Reactive.UnaryOperator", options);
    type->fp_build_ = UnaryOperator_build;
    type->fp_GetFlags = (void(*)(::g::Fuse::Reactive::ComputeExpression*, int32_t*))UnaryOperator__GetFlags_fn;
    type->fp_TryCompute = (void(*)(::g::Fuse::Reactive::ComputeExpression*, uArray*, uObject**, bool*))UnaryOperator__TryCompute_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ComputeExpression__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// protected object Compute(object operand) :38
void UnaryOperator__Compute_fn(UnaryOperator* __this, uObject* operand, uObject** __retval)
{
    *__retval = __this->Compute(operand);
}

// internal override sealed Fuse.Reactive.ComputeExpression.Flags GetFlags() :19
void UnaryOperator__GetFlags_fn(UnaryOperator* __this, int32_t* __retval)
{
    return *__retval = __this->IsOperandOptional() ? 1 : 0, void();
}

// internal void InternalOnLostOperand(Fuse.Reactive.IListener listener) :67
void UnaryOperator__InternalOnLostOperand_fn(UnaryOperator* __this, uObject* listener)
{
    __this->InternalOnLostOperand(listener);
}

// internal void InternalOnNewOperand(Fuse.Reactive.IListener listener, object operand) :59
void UnaryOperator__InternalOnNewOperand_fn(UnaryOperator* __this, uObject* listener, uObject* operand)
{
    __this->InternalOnNewOperand(listener, operand);
}

// protected bool get_IsOperandOptional() :24
void UnaryOperator__get_IsOperandOptional_fn(UnaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsOperandOptional();
}

// protected void OnLostOperand(Fuse.Reactive.IListener listener) :63
void UnaryOperator__OnLostOperand_fn(UnaryOperator* __this, uObject* listener)
{
    __this->OnLostOperand(listener);
}

// protected void OnNewOperand(Fuse.Reactive.IListener listener, object operand) :46
void UnaryOperator__OnNewOperand_fn(UnaryOperator* __this, uObject* listener, uObject* operand)
{
    __this->OnNewOperand(listener, operand);
}

// protected override sealed bool TryCompute(Fuse.Reactive.Expression.Argument[] args, object& result) :40
void UnaryOperator__TryCompute_fn(UnaryOperator* __this, uArray* args, uObject** result, bool* __retval)
{
    return *__retval = __this->TryCompute1(uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->Value(), result), void();
}

// protected bool TryCompute(object operand, object& result) :30
void UnaryOperator__TryCompute1_fn(UnaryOperator* __this, uObject* operand, uObject** result, bool* __retval)
{
    *__retval = __this->TryCompute1(operand, result);
}

// protected object Compute(object operand) [instance] :38
uObject* UnaryOperator::Compute(uObject* operand)
{
    return NULL;
}

// internal void InternalOnLostOperand(Fuse.Reactive.IListener listener) [instance] :67
void UnaryOperator::InternalOnLostOperand(uObject* listener)
{
    OnLostOperand(listener);
}

// internal void InternalOnNewOperand(Fuse.Reactive.IListener listener, object operand) [instance] :59
void UnaryOperator::InternalOnNewOperand(uObject* listener, uObject* operand)
{
    OnNewOperand(listener, operand);
}

// protected bool get_IsOperandOptional() [instance] :24
bool UnaryOperator::IsOperandOptional()
{
    return false;
}

// protected void OnLostOperand(Fuse.Reactive.IListener listener) [instance] :63
void UnaryOperator::OnLostOperand(uObject* listener)
{
    ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)this);
}

// protected void OnNewOperand(Fuse.Reactive.IListener listener, object operand) [instance] :46
void UnaryOperator::OnNewOperand(uObject* listener, uObject* operand)
{
    uObject* result;

    if (TryCompute1(operand, &result))
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)this, result);
    else
    {
        ::g::Fuse::Diagnostics::UserWarning(::g::Uno::String::op_Addition1(::STRINGS[77/*"Failed to c...*/], operand), this, ::STRINGS[78/*"/usr/local/...*/], 55, ::STRINGS[79/*"OnNewOperand"*/]);
        ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(listener), ::TYPES[11/*Fuse.Reactive.IListener*/]), (uObject*)this);
    }
}

// protected bool TryCompute(object operand, object& result) [instance] :30
bool UnaryOperator::TryCompute1(uObject* operand, uObject** result)
{
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[0/*" No `TryCom...*/], this, ::STRINGS[78/*"/usr/local/...*/], 32, ::STRINGS[2/*"TryCompute"*/]);
    *result = Compute(operand);
    return true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/ObserverMap.uno
// ----------------------------------------------------------------------

// internal sealed class UnmappedView<T> :8
// {
static void UnmappedView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(UnmappedView_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::ObserverMap_typeof()->MakeType(type->T(0), NULL), offsetof(UnmappedView, _source), 0);
}

UnmappedView_type* UnmappedView_typeof()
{
    static uSStrong<UnmappedView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UnmappedView);
    options.TypeSize = sizeof(UnmappedView_type);
    type = (UnmappedView_type*)uClassType::New("Fuse.Reactive.UnmappedView`1", options);
    type->fp_build_ = UnmappedView_build;
    type->interface0.fp_get_Length = (void(*)(uObject*, int32_t*))UnmappedView__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))UnmappedView__get_Item_fn;
    return type;
}

// public UnmappedView(Fuse.Reactive.ObserverMap<T> source) :11
void UnmappedView__ctor__fn(UnmappedView* __this, ::g::Fuse::Reactive::ObserverMap* source)
{
    __this->ctor_(source);
}

// public object get_Item(int index) :17
void UnmappedView__get_Item_fn(UnmappedView* __this, int32_t* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// public int get_Length() :16
void UnmappedView__get_Length_fn(UnmappedView* __this, int32_t* __retval)
{
    *__retval = __this->Length();
}

// public UnmappedView New(Fuse.Reactive.ObserverMap<T> source) :11
void UnmappedView__New1_fn(uType* __type, ::g::Fuse::Reactive::ObserverMap* source, UnmappedView** __retval)
{
    *__retval = UnmappedView::New1(__type, source);
}

// public UnmappedView(Fuse.Reactive.ObserverMap<T> source) [instance] :11
void UnmappedView::ctor_(::g::Fuse::Reactive::ObserverMap* source)
{
    _source = source;
}

// public object get_Item(int index) [instance] :17
uObject* UnmappedView::Item(int32_t index)
{
    uObject* ret2;
    return uPtr(_source)->UVUnmap((::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)uPtr(_source)->_list), uCRef<int32_t>(index), &ret2), ret2));
}

// public int get_Length() [instance] :16
int32_t UnmappedView::Length()
{
    return uPtr((::g::Uno::Collections::List*)uPtr(_source)->_list)->Count();
}

// public UnmappedView New(Fuse.Reactive.ObserverMap<T> source) [static] :11
UnmappedView* UnmappedView::New1(uType* __type, ::g::Fuse::Reactive::ObserverMap* source)
{
    UnmappedView* obj1 = (UnmappedView*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/ValueObserver.uno
// ------------------------------------------------------------------------

// internal sealed class ValueForwarder :106
// {
static void ValueForwarder_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        ValueForwarder__IValueListener_typeof(), offsetof(ValueForwarder, _listener), 0);
}

::g::Fuse::Reactive::ValueObserver_type* ValueForwarder_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ValueForwarder);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.ValueForwarder", options);
    type->fp_build_ = ValueForwarder_build;
    type->fp_LostData = (void(*)(::g::Fuse::Reactive::ValueObserver*))ValueForwarder__LostData_fn;
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))ValueForwarder__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__Dispose_fn;
    return type;
}

// public ValueForwarder(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) :115
void ValueForwarder__ctor_1_fn(ValueForwarder* __this, uObject* obs, uObject* listener)
{
    __this->ctor_1(obs, listener);
}

// protected override sealed void LostData() :125
void ValueForwarder__LostData_fn(ValueForwarder* __this)
{
    ValueForwarder__IValueListener::LostValue(uInterface(uPtr(__this->_listener), ValueForwarder__IValueListener_typeof()));
}

// public ValueForwarder New(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) :115
void ValueForwarder__New1_fn(uObject* obs, uObject* listener, ValueForwarder** __retval)
{
    *__retval = ValueForwarder::New1(obs, listener);
}

// protected override sealed void PushData(object newValue) :121
void ValueForwarder__PushData_fn(ValueForwarder* __this, uObject* newValue)
{
    ValueForwarder__IValueListener::NewValue(uInterface(uPtr(__this->_listener), ValueForwarder__IValueListener_typeof()), newValue);
}

// public ValueForwarder(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) [instance] :115
void ValueForwarder::ctor_1(uObject* obs, uObject* listener)
{
    ctor_();
    _listener = listener;
    Subscribe(obs);
}

// public ValueForwarder New(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) [static] :115
ValueForwarder* ValueForwarder::New1(uObject* obs, uObject* listener)
{
    ValueForwarder* obj1 = (ValueForwarder*)uNew(ValueForwarder_typeof());
    obj1->ctor_1(obs, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/ValueObserver.uno
// ------------------------------------------------------------------------

// internal abstract class ValueObserver :11
// {
static void ValueObserver_build(uType* type)
{
    ::TYPES[13] = ::g::Fuse::IArray_typeof();
    ::TYPES[15] = ::g::Fuse::Reactive::IObservableArray_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(ValueObserver_type, interface1));
    type->SetFields(0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(ValueObserver, _obsSub), 0,
        ::g::Fuse::Reactive::IObservable_typeof(), offsetof(ValueObserver, _obs), 0);
}

ValueObserver_type* ValueObserver_typeof()
{
    static uSStrong<ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ValueObserver);
    options.TypeSize = sizeof(ValueObserver_type);
    type = (ValueObserver_type*)uClassType::New("Fuse.Reactive.ValueObserver", options);
    type->fp_build_ = ValueObserver_build;
    type->fp_Dispose = ValueObserver__Dispose_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ValueObserver__Dispose_fn;
    return type;
}

// protected generated ValueObserver() :11
void ValueObserver__ctor__fn(ValueObserver* __this)
{
    __this->ctor_();
}

// public virtual void Dispose() :51
void ValueObserver__Dispose_fn(ValueObserver* __this)
{
    __this->Unsubscribe();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :69
void ValueObserver__FuseReactiveIObserverOnAdd_fn(ValueObserver* __this, uObject* addedValue)
{
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[13/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnClear() :59
void ValueObserver__FuseReactiveIObserverOnClear_fn(ValueObserver* __this)
{
    __this->LostData();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :79
void ValueObserver__FuseReactiveIObserverOnFailed_fn(ValueObserver* __this, uString* message)
{
    __this->LostData();
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :100
void ValueObserver__FuseReactiveIObserverOnInsertAt_fn(ValueObserver* __this, int32_t* index, uObject* value)
{
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[13/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :84
void ValueObserver__FuseReactiveIObserverOnNewAll_fn(ValueObserver* __this, uObject* values)
{
    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[13/*Fuse.IArray*/])) > 0)
        __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[13/*Fuse.IArray*/]), 0));
    else
        __this->LostData();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :74
void ValueObserver__FuseReactiveIObserverOnNewAt_fn(ValueObserver* __this, int32_t* index, uObject* value)
{
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[13/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :92
void ValueObserver__FuseReactiveIObserverOnRemoveAt_fn(ValueObserver* __this, int32_t* index)
{
    if (::g::Fuse::IArray::Length(uInterface(uPtr(__this->_obs), ::TYPES[13/*Fuse.IArray*/])) > 0)
        __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[13/*Fuse.IArray*/]), 0));
    else
        __this->LostData();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :64
void ValueObserver__FuseReactiveIObserverOnSet_fn(ValueObserver* __this, uObject* newValue)
{
    __this->PushData(newValue);
}

// protected void Subscribe(Fuse.Reactive.IObservable obs) :31
void ValueObserver__Subscribe_fn(ValueObserver* __this, uObject* obs)
{
    __this->Subscribe(obs);
}

// protected void SubscribeNoPush(Fuse.Reactive.IObservable obs) :38
void ValueObserver__SubscribeNoPush_fn(ValueObserver* __this, uObject* obs)
{
    __this->SubscribeNoPush(obs);
}

// protected void Unsubscribe() :44
void ValueObserver__Unsubscribe_fn(ValueObserver* __this)
{
    __this->Unsubscribe();
}

// protected object get_Value() :20
void ValueObserver__get_Value_fn(ValueObserver* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// protected generated ValueObserver() [instance] :11
void ValueObserver::ctor_()
{
}

// protected void Subscribe(Fuse.Reactive.IObservable obs) [instance] :31
void ValueObserver::Subscribe(uObject* obs)
{
    _obs = obs;

    if (::g::Fuse::IArray::Length(uInterface(uPtr(obs), ::TYPES[13/*Fuse.IArray*/])) > 0)
        PushData(::g::Fuse::IArray::Item(uInterface(uPtr(obs), ::TYPES[13/*Fuse.IArray*/]), 0));

    _obsSub = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(obs), ::TYPES[15/*Fuse.Reactive.IObservableArray*/]), (uObject*)this);
}

// protected void SubscribeNoPush(Fuse.Reactive.IObservable obs) [instance] :38
void ValueObserver::SubscribeNoPush(uObject* obs)
{
    _obs = obs;
    _obsSub = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(obs), ::TYPES[15/*Fuse.Reactive.IObservableArray*/]), (uObject*)this);
}

// protected void Unsubscribe() [instance] :44
void ValueObserver::Unsubscribe()
{
    if (_obsSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_obsSub), ::TYPES[0/*Uno.IDisposable*/]));

    _obsSub = NULL;
    _obs = NULL;
}

// protected object get_Value() [instance] :20
uObject* ValueObserver::Value()
{
    if (_obs == NULL)
        return NULL;

    if (::g::Fuse::IArray::Length(uInterface(uPtr(_obs), ::TYPES[13/*Fuse.IArray*/])) == 0)
        return NULL;

    return ::g::Fuse::IArray::Item(uInterface(uPtr(_obs), ::TYPES[13/*Fuse.IArray*/]), 0);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/VarArgFunction.uno
// -------------------------------------------------------------------------------------

// public abstract class VarArgFunction :11
// {
static void VarArgFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL), offsetof(VarArgFunction, _args), 0);
}

::g::Fuse::Reactive::Expression_type* VarArgFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(VarArgFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.VarArgFunction", options);
    type->fp_build_ = VarArgFunction_build;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public Uno.Collections.IList<Fuse.Reactive.Expression> get_Arguments() :14
void VarArgFunction__get_Arguments_fn(VarArgFunction* __this, uObject** __retval)
{
    *__retval = __this->Arguments();
}

// protected string FormatString(string funcName) :19
void VarArgFunction__FormatString_fn(VarArgFunction* __this, uString* funcName, uString** __retval)
{
    *__retval = __this->FormatString(funcName);
}

// public Uno.Collections.IList<Fuse.Reactive.Expression> get_Arguments() [instance] :14
uObject* VarArgFunction::Arguments()
{
    return (uObject*)_args;
}

// protected string FormatString(string funcName) [instance] :19
uString* VarArgFunction::FormatString(uString* funcName)
{
    ::g::Fuse::Reactive::Expression* ret1;
    uString* q = ::g::Uno::String::op_Addition2(funcName, uString::Const("("));

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Arguments()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL))); ++i)
    {
        if (i > 0)
            q = ::g::Uno::String::op_Addition2(q, ::STRINGS[69/*","*/]);

        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::Object::ToString(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Arguments()), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL)), uCRef<int32_t>(i), &ret1), ret1))));
    }

    q = ::g::Uno::String::op_Addition2(q, uString::Const(")"));
    return q;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.10.0-rc1/Window.uno
// ------------------------------------------------------------------------

// internal sealed class WindowCaps :83
// {
// static generated WindowCaps() :83
static void WindowCaps__cctor__fn(uType* __type)
{
    WindowCaps::NameWidth_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[80/*"width"*/]);
    WindowCaps::NameHeight_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[81/*"height"*/]);
    WindowCaps::NameSize_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[82/*"size"*/]);
    WindowCaps::NamePixelsPerPoint_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[83/*"pixelsPerPo...*/]);
    WindowCaps::NamePixelsPerOSPoint_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[84/*"pixelsPerOS...*/]);
    WindowCaps::NameSafeMargins_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[85/*"safeMargins"*/]);
    WindowCaps::NameDeviceMargins_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[86/*"deviceMargins"*/]);
    WindowCaps::NameStaticMargins_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[87/*"staticMargins"*/]);
}

static void WindowCaps_build(uType* type)
{
    ::STRINGS[80] = uString::Const("width");
    ::STRINGS[81] = uString::Const("height");
    ::STRINGS[82] = uString::Const("size");
    ::STRINGS[83] = uString::Const("pixelsPerPoint");
    ::STRINGS[84] = uString::Const("pixelsPerOSPoint");
    ::STRINGS[85] = uString::Const("safeMargins");
    ::STRINGS[86] = uString::Const("deviceMargins");
    ::STRINGS[87] = uString::Const("staticMargins");
    ::STRINGS[88] = uString::Const("No RootViewport found");
    ::TYPES[44] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::Action_typeof();
    ::TYPES[45] = ::g::Fuse::Node_typeof()->MakeMethod(2/*GetNearestAncestorOfType<Fuse.RootViewport>*/, ::g::Fuse::RootViewport_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Platform::SystemUI_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObservableObject_typeof(), offsetof(::g::Fuse::Reactive::CapsObject_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::CapsObject_type, interface1),
        ::g::Fuse::IObject_typeof(), offsetof(::g::Fuse::Reactive::CapsObject_type, interface2));
    type->SetFields(2,
        ::g::Fuse::RootViewport_typeof(), offsetof(WindowCaps, _rootViewport), 0,
        ::g::Uno::Int_typeof(), offsetof(WindowCaps, _attachCount), 0,
        type, (uintptr_t)&WindowCaps::_singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&WindowCaps::NameWidth_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&WindowCaps::NameHeight_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&WindowCaps::NameSize_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&WindowCaps::NamePixelsPerPoint_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&WindowCaps::NamePixelsPerOSPoint_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&WindowCaps::NameSafeMargins_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&WindowCaps::NameDeviceMargins_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&WindowCaps::NameStaticMargins_, uFieldFlagsStatic);
}

::g::Fuse::Reactive::CapsObject_type* WindowCaps_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::CapsObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::CapsObject_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 3;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(WindowCaps);
    options.TypeSize = sizeof(::g::Fuse::Reactive::CapsObject_type);
    type = (::g::Fuse::Reactive::CapsObject_type*)uClassType::New("Fuse.Reactive.WindowCaps", options);
    type->fp_build_ = WindowCaps_build;
    type->fp_cctor_ = WindowCaps__cctor__fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::Reactive::CapsObject__FuseReactiveIObservableObjectSubscribe_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::CapsObject__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface2.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))::g::Fuse::Reactive::CapsObject__ContainsKey_fn;
    type->interface2.fp_get_Item = (void(*)(uObject*, uString*, uObject**))::g::Fuse::Reactive::CapsObject__get_Item_fn;
    type->interface2.fp_get_Keys = (void(*)(uObject*, uArray**))::g::Fuse::Reactive::CapsObject__get_Keys_fn;
    return type;
}

// private WindowCaps(Fuse.RootViewport rv) :132
void WindowCaps__ctor_2_fn(WindowCaps* __this, ::g::Fuse::RootViewport* rv)
{
    __this->ctor_2(rv);
}

// public static Fuse.Reactive.WindowCaps Attach(Fuse.RootViewport target) :90
void WindowCaps__Attach_fn(::g::Fuse::RootViewport* target, WindowCaps** __retval)
{
    *__retval = WindowCaps::Attach(target);
}

// public static Fuse.Reactive.WindowCaps AttachFrom(Fuse.Node node) :103
void WindowCaps__AttachFrom_fn(::g::Fuse::Node* node, WindowCaps** __retval)
{
    *__retval = WindowCaps::AttachFrom(node);
}

// public void Detach() :112
void WindowCaps__Detach_fn(WindowCaps* __this)
{
    __this->Detach();
}

// private WindowCaps New(Fuse.RootViewport rv) :132
void WindowCaps__New3_fn(::g::Fuse::RootViewport* rv, WindowCaps** __retval)
{
    *__retval = WindowCaps::New3(rv);
}

// private void OnMarginsChanged() :159
void WindowCaps__OnMarginsChanged_fn(WindowCaps* __this)
{
    __this->OnMarginsChanged();
}

// private void OnResized() :151
void WindowCaps__OnResized_fn(WindowCaps* __this)
{
    __this->OnResized();
}

// private void OnResizedRV(float2 ignore) :150
void WindowCaps__OnResizedRV_fn(WindowCaps* __this, ::g::Uno::Float2* ignore)
{
    __this->OnResizedRV(*ignore);
}

// private void Unroot() :145
void WindowCaps__Unroot_fn(WindowCaps* __this)
{
    __this->Unroot();
}

// private void UpdateMargins() :164
void WindowCaps__UpdateMargins_fn(WindowCaps* __this)
{
    __this->UpdateMargins();
}

uSStrong<WindowCaps*> WindowCaps::_singleton_;
::g::Uno::UX::Selector WindowCaps::NameWidth_;
::g::Uno::UX::Selector WindowCaps::NameHeight_;
::g::Uno::UX::Selector WindowCaps::NameSize_;
::g::Uno::UX::Selector WindowCaps::NamePixelsPerPoint_;
::g::Uno::UX::Selector WindowCaps::NamePixelsPerOSPoint_;
::g::Uno::UX::Selector WindowCaps::NameSafeMargins_;
::g::Uno::UX::Selector WindowCaps::NameDeviceMargins_;
::g::Uno::UX::Selector WindowCaps::NameStaticMargins_;

// private WindowCaps(Fuse.RootViewport rv) [instance] :132
void WindowCaps::ctor_2(::g::Fuse::RootViewport* rv)
{
    ctor_1();
    _rootViewport = rv;
    uPtr(_rootViewport)->add_Resized(uDelegate::New(::TYPES[44/*Uno.Action<float2>*/], (void*)WindowCaps__OnResizedRV_fn, this));
    OnResized();
    ::g::Fuse::Platform::SystemUI::add_MarginsChanged(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)WindowCaps__OnMarginsChanged_fn, this));
    UpdateMargins();
    ChangeProperty(WindowCaps::NamePixelsPerPoint_, uBox(::TYPES[2/*float*/], uPtr(_rootViewport)->PixelsPerPoint()));
    ChangeProperty(WindowCaps::NamePixelsPerOSPoint_, uBox(::TYPES[2/*float*/], uPtr(_rootViewport)->PixelsPerOSPoint()));
}

// public void Detach() [instance] :112
void WindowCaps::Detach()
{
    if ((--_attachCount) == 0)
    {
        Unroot();
        WindowCaps::_singleton_ = NULL;
    }
}

// private void OnMarginsChanged() [instance] :159
void WindowCaps::OnMarginsChanged()
{
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)WindowCaps__UpdateMargins_fn, this), -1, 2);
}

// private void OnResized() [instance] :151
void WindowCaps::OnResized()
{
    ChangeProperty(WindowCaps::NameWidth_, uBox(::TYPES[2/*float*/], uPtr(_rootViewport)->Size().X));
    ChangeProperty(WindowCaps::NameHeight_, uBox(::TYPES[2/*float*/], uPtr(_rootViewport)->Size().Y));
    ChangeProperty(WindowCaps::NameSize_, uBox(::g::Uno::Float2_typeof(), uPtr(_rootViewport)->Size()));
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)WindowCaps__UpdateMargins_fn, this), -1, 2);
}

// private void OnResizedRV(float2 ignore) [instance] :150
void WindowCaps::OnResizedRV(::g::Uno::Float2 ignore)
{
    OnResized();
}

// private void Unroot() [instance] :145
void WindowCaps::Unroot()
{
    ::g::Fuse::Platform::SystemUI::remove_MarginsChanged(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)WindowCaps__OnMarginsChanged_fn, this));
}

// private void UpdateMargins() [instance] :164
void WindowCaps::UpdateMargins()
{
    float osToFuse = uPtr(_rootViewport)->PixelsPerOSPoint() / uPtr(_rootViewport)->PixelsPerPoint();
    ChangeProperty(WindowCaps::NameDeviceMargins_, uBox(::g::Uno::Float4_typeof(), ::g::Uno::Float4__op_Multiply1(::g::Fuse::Platform::SystemUI::DeviceMargins(), osToFuse)));
    ChangeProperty(WindowCaps::NameSafeMargins_, uBox(::g::Uno::Float4_typeof(), ::g::Uno::Float4__op_Multiply1(::g::Fuse::Platform::SystemUI::SafeMargins(), osToFuse)));
    ChangeProperty(WindowCaps::NameStaticMargins_, uBox(::g::Uno::Float4_typeof(), ::g::Uno::Float4__op_Multiply1(::g::Fuse::Platform::SystemUI::StaticMargins(), osToFuse)));
}

// public static Fuse.Reactive.WindowCaps Attach(Fuse.RootViewport target) [static] :90
WindowCaps* WindowCaps::Attach(::g::Fuse::RootViewport* target)
{
    WindowCaps_typeof()->Init();
    WindowCaps* rv = WindowCaps::_singleton_;

    if (rv == NULL)
    {
        rv = WindowCaps::New3(target);
        WindowCaps::_singleton_ = rv;
    }

    uPtr(rv)->_attachCount++;
    return rv;
}

// public static Fuse.Reactive.WindowCaps AttachFrom(Fuse.Node node) [static] :103
WindowCaps* WindowCaps::AttachFrom(::g::Fuse::Node* node)
{
    WindowCaps_typeof()->Init();
    ::g::Fuse::RootViewport* rv = (::g::Fuse::RootViewport*)uPtr(node)->GetNearestAncestorOfType(::TYPES[45/*Fuse.Node.GetNearestAncestorOfType<Fuse.RootViewport>*/]);

    if (rv == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[88/*"No RootView...*/]));

    return WindowCaps::Attach(rv);
}

// private WindowCaps New(Fuse.RootViewport rv) [static] :132
WindowCaps* WindowCaps::New3(::g::Fuse::RootViewport* rv)
{
    WindowCaps* obj1 = (WindowCaps*)uNew(WindowCaps_typeof());
    obj1->ctor_2(rv);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.10.0-rc1/Window.uno
// ------------------------------------------------------------------------

// public sealed class WindowFunction :25
// {
static void WindowFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2);
}

::g::Fuse::Reactive::Expression_type* WindowFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WindowFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.WindowFunction", options);
    type->fp_build_ = WindowFunction_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))WindowFunction__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))WindowFunction__ToString_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))WindowFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :35
void WindowFunction__Subscribe_fn(WindowFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    ::g::Fuse::RootViewport* rv = (::g::Fuse::RootViewport*)uPtr(::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(context), ::TYPES[12/*Fuse.Reactive.IContext*/])))->GetNearestAncestorOfType(::TYPES[45/*Fuse.Node.GetNearestAncestorOfType<Fuse.RootViewport>*/]);
    WindowFunction__Subscription* sub = WindowFunction__Subscription::New1(__this, rv, listener);
    sub->Init();
    return *__retval = (uObject*)sub, void();
}

// public override sealed string ToString() :30
void WindowFunction__ToString_fn(WindowFunction* __this, uString** __retval)
{
    return *__retval = uString::Const("window()"), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Instantiator.uno
// --------------------------------------------------------------------------------

// internal sealed class WindowItem :73
// {
static void WindowItem_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(6,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(WindowItem, Nodes), 0,
        ::g::Fuse::Reactive::TemplateMatch_typeof(), offsetof(WindowItem, Template), 0);
}

::g::Fuse::Reactive::ValueObserver_type* WindowItem_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::WindowListItem_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WindowItem);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.WindowItem", options);
    type->fp_build_ = WindowItem_build;
    type->fp_ctor_ = (void*)WindowItem__New1_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Reactive::WindowListItem__Dispose_fn;
    return type;
}

// public generated WindowItem() :73
void WindowItem__ctor_2_fn(WindowItem* __this)
{
    __this->ctor_2();
}

// public generated WindowItem New() :73
void WindowItem__New1_fn(WindowItem** __retval)
{
    *__retval = WindowItem::New1();
}

// public generated WindowItem() [instance] :73
void WindowItem::ctor_2()
{
    ctor_1();
}

// public generated WindowItem New() [static] :73
WindowItem* WindowItem::New1()
{
    WindowItem* obj1 = (WindowItem*)uNew(WindowItem_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/WindowList.uno
// ------------------------------------------------------------------------------

// internal abstract class WindowList<T> :95
// {
static void WindowList_build(uType* type)
{
    ::STRINGS[89] = uString::Const("Item insertion order invalid");
    ::STRINGS[90] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/WindowList.uno");
    ::STRINGS[91] = uString::Const("InsertedDataAt");
    ::STRINGS[17] = uString::Const("error");
    ::STRINGS[92] = uString::Const("Limit cannot be less than 0");
    ::STRINGS[93] = uString::Const("set_Limit");
    ::STRINGS[94] = uString::Const("Offset cannot be less than 0");
    ::STRINGS[95] = uString::Const("set_Offset");
    ::TYPES[46] = ::g::Fuse::Internal::ObjectList_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetPrecalc(
        ::g::Fuse::Internal::ObjectList_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(WindowList, _offset), 0,
        ::g::Uno::Int_typeof(), offsetof(WindowList, _limit), 0,
        ::g::Uno::Bool_typeof(), offsetof(WindowList, _hasLimit), 0,
        ::TYPES[46/*Fuse.Internal.ObjectList`1*/]->MakeType(type->T(0), NULL), offsetof(WindowList, _windowItems), 0,
        ::g::Uno::String_typeof(), offsetof(WindowList, _errorMessage), 0);
}

WindowList_type* WindowList_typeof()
{
    static uSStrong<WindowList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.DependencyCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(WindowList);
    options.TypeSize = sizeof(WindowList_type);
    type = (WindowList_type*)uClassType::New("Fuse.Reactive.WindowList`1", options);
    type->fp_build_ = WindowList_build;
    return type;
}

// protected generated WindowList() :95
void WindowList__ctor__fn(WindowList* __this)
{
    __this->ctor_();
}

// protected int CalcOffsetLimitCountOf(int length) :162
void WindowList__CalcOffsetLimitCountOf_fn(WindowList* __this, int32_t* length, int32_t* __retval)
{
    *__retval = __this->CalcOffsetLimitCountOf(*length);
}

// private void ClearError() :197
void WindowList__ClearError_fn(WindowList* __this)
{
    __this->ClearError();
}

// protected int DataToWindowIndex(int dataIndex) :224
void WindowList__DataToWindowIndex_fn(WindowList* __this, int32_t* dataIndex, int32_t* __retval)
{
    *__retval = __this->DataToWindowIndex(*dataIndex);
}

// protected string get_ErrorMessage() :188
void WindowList__get_ErrorMessage_fn(WindowList* __this, uString** __retval)
{
    *__retval = __this->ErrorMessage();
}

// private void set_ErrorMessage(string value) :189
void WindowList__set_ErrorMessage_fn(WindowList* __this, uString* value)
{
    __this->ErrorMessage(value);
}

// public T GetWindowItem(int i) :172
void WindowList__GetWindowItem_fn(WindowList* __this, int32_t* i, uObject** __retval)
{
    *__retval = __this->GetWindowItem(*i);
}

// public int GetWindowItemIndex(T item) :174
void WindowList__GetWindowItemIndex_fn(WindowList* __this, uObject* item, int32_t* __retval)
{
    *__retval = __this->GetWindowItemIndex(item);
}

// internal bool get_HasLimit() :160
void WindowList__get_HasLimit_fn(WindowList* __this, bool* __retval)
{
    *__retval = __this->HasLimit();
}

// protected void InsertedDataAt(int dataIndex) :234
void WindowList__InsertedDataAt_fn(WindowList* __this, int32_t* dataIndex)
{
    __this->InsertedDataAt(*dataIndex);
}

// protected void InsertWindowItem(int windowIndex, int dataIndex) :252
void WindowList__InsertWindowItem_fn(WindowList* __this, int32_t* windowIndex, int32_t* dataIndex)
{
    __this->InsertWindowItem(*windowIndex, *dataIndex);
}

// internal int get_Limit() :142
void WindowList__get_Limit_fn(WindowList* __this, int32_t* __retval)
{
    *__retval = __this->Limit();
}

// internal void set_Limit(int value) :143
void WindowList__set_Limit_fn(WindowList* __this, int32_t* value)
{
    __this->Limit(*value);
}

// internal int get_Offset() :100
void WindowList__get_Offset_fn(WindowList* __this, int32_t* __retval)
{
    *__retval = __this->Offset();
}

// internal void set_Offset(int value) :101
void WindowList__set_Offset_fn(WindowList* __this, int32_t* value)
{
    __this->Offset(*value);
}

// protected void RemoveAll() :212
void WindowList__RemoveAll_fn(WindowList* __this)
{
    __this->RemoveAll();
}

// protected void RemovedDataAt(int dataIndex) :200
void WindowList__RemovedDataAt_fn(WindowList* __this, int32_t* dataIndex)
{
    __this->RemovedDataAt(*dataIndex);
}

// protected void SetError(string msg) :198
void WindowList__SetError_fn(WindowList* __this, uString* msg)
{
    __this->SetError(msg);
}

// protected void TrimAndPad() :262
void WindowList__TrimAndPad_fn(WindowList* __this)
{
    __this->TrimAndPad();
}

// public int get_WindowItemCount() :171
void WindowList__get_WindowItemCount_fn(WindowList* __this, int32_t* __retval)
{
    *__retval = __this->WindowItemCount();
}

// protected generated WindowList() [instance] :95
void WindowList::ctor_()
{
    uType* __types[] = {
        __type->GetBase(WindowList_typeof())->Precalced(0/*Fuse.Internal.ObjectList<T>*/),
    };
    _windowItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(__types[0], 0));
}

// protected int CalcOffsetLimitCountOf(int length) [instance] :162
int32_t WindowList::CalcOffsetLimitCountOf(int32_t length)
{
    int32_t q = ::g::Uno::Math::Max8(0, length - Offset());
    return HasLimit() ? ::g::Uno::Math::Min8(Limit(), q) : q;
}

// private void ClearError() [instance] :197
void WindowList::ClearError()
{
    ErrorMessage(NULL);
}

// protected int DataToWindowIndex(int dataIndex) [instance] :224
int32_t WindowList::DataToWindowIndex(int32_t dataIndex)
{
    return dataIndex - Offset();
}

// protected string get_ErrorMessage() [instance] :188
uString* WindowList::ErrorMessage()
{
    return _errorMessage;
}

// private void set_ErrorMessage(string value) [instance] :189
void WindowList::ErrorMessage(uString* value)
{
    if (::g::Uno::String::op_Equality(_errorMessage, value))
        return;

    _errorMessage = value;
    OnErrorMessageChanged(_errorMessage);
}

// public T GetWindowItem(int i) [instance] :172
uObject* WindowList::GetWindowItem(int32_t i)
{
    return (uObject*)uPtr(_windowItems)->Item(i);
}

// public int GetWindowItemIndex(T item) [instance] :174
int32_t WindowList::GetWindowItemIndex(uObject* item)
{
    for (int32_t i = 0; i < uPtr(_windowItems)->Count(); ++i)
        if (item == ((uObject*)uPtr(_windowItems)->Item(i)))
            return i;

    return -1;
}

// internal bool get_HasLimit() [instance] :160
bool WindowList::HasLimit()
{
    return _hasLimit;
}

// protected void InsertedDataAt(int dataIndex) [instance] :234
void WindowList::InsertedDataAt(int32_t dataIndex)
{
    if ((dataIndex < Offset()) || (HasLimit() && ((dataIndex - Offset()) >= Limit())))
        return;

    int32_t windowIndex = DataToWindowIndex(dataIndex);

    if ((windowIndex > uPtr(_windowItems)->Count()) || (windowIndex < 0))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[89/*"Item insert...*/], this, ::STRINGS[90/*"/usr/local/...*/], 245, ::STRINGS[91/*"InsertedDat...*/]);
        return;
    }

    InsertWindowItem(windowIndex, dataIndex);
}

// protected void InsertWindowItem(int windowIndex, int dataIndex) [instance] :252
void WindowList::InsertWindowItem(int32_t windowIndex, int32_t dataIndex)
{
    uObject* wi = CreateWindowItem(dataIndex);
    uPtr(_windowItems)->Insert(windowIndex, wi);
    OnAddedWindowItem(windowIndex, wi);
}

// internal int get_Limit() [instance] :142
int32_t WindowList::Limit()
{
    return _limit;
}

// internal void set_Limit(int value) [instance] :143
void WindowList::Limit(int32_t value)
{
    if (_hasLimit && (_limit == value))
        return;

    if (value < 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[92/*"Limit canno...*/], this, ::STRINGS[90/*"/usr/local/...*/], 150, ::STRINGS[93/*"set_Limit"*/], NULL);
        value = 0;
    }

    _hasLimit = true;
    _limit = value;
    TrimAndPad();
}

// internal int get_Offset() [instance] :100
int32_t WindowList::Offset()
{
    return _offset;
}

// internal void set_Offset(int value) [instance] :101
void WindowList::Offset(int32_t value)
{
    if (_offset == value)
        return;

    if (value < 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[94/*"Offset cann...*/], this, ::STRINGS[90/*"/usr/local/...*/], 108, ::STRINGS[95/*"set_Offset"*/], NULL);
        value = 0;
    }

    int32_t dataCount = GetDataCount();

    while (_offset < value)
    {
        if (_offset < dataCount)
            RemovedDataAt(_offset);

        _offset++;
        int32_t end = (_offset + Limit()) - 1;

        if (HasLimit() && (end < dataCount))
            InsertedDataAt(end);
    }

    while (_offset > value)
    {
        int32_t end1 = (_offset + Limit()) - 1;

        if (HasLimit() && (end1 < dataCount))
            RemovedDataAt((_offset + Limit()) - 1);

        _offset--;

        if (_offset < dataCount)
            InsertedDataAt(_offset);
    }
}

// protected void RemoveAll() [instance] :212
void WindowList::RemoveAll()
{
    for (int32_t i = 0; i < WindowItemCount(); ++i)
    {
        uObject* wi = GetWindowItem(i);
        OnRemovedWindowItem(wi);
    }

    uPtr(_windowItems)->Clear();
    ClearError();
}

// protected void RemovedDataAt(int dataIndex) [instance] :200
void WindowList::RemovedDataAt(int32_t dataIndex)
{
    int32_t windowIndex = DataToWindowIndex(dataIndex);

    if ((windowIndex >= 0) && (windowIndex < WindowItemCount()))
    {
        OnRemovedWindowItem(GetWindowItem(windowIndex));
        uPtr(_windowItems)->RemoveAt(windowIndex);
    }

    ClearError();
}

// protected void SetError(string msg) [instance] :198
void WindowList::SetError(uString* msg)
{
    ErrorMessage((msg != NULL) ? msg : ::STRINGS[17/*"error"*/]);
}

// protected void TrimAndPad() [instance] :262
void WindowList::TrimAndPad()
{
    if (HasLimit())

        for (int32_t i = WindowItemCount() - Limit(); i > 0; --i)
            RemovedDataAt((Offset() + WindowItemCount()) - 1);

    int32_t dataCount = GetDataCount();
    int32_t add = HasLimit() ? ::g::Uno::Math::Min8(Limit() - WindowItemCount(), dataCount - (Offset() + WindowItemCount())) : dataCount - (Offset() + WindowItemCount());

    for (int32_t i1 = 0; i1 < add; ++i1)
        InsertedDataAt(Offset() + WindowItemCount());

    ClearError();
}

// public int get_WindowItemCount() [instance] :171
int32_t WindowList::WindowItemCount()
{
    return uPtr(_windowItems)->Count();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/WindowList.uno
// ------------------------------------------------------------------------------

// internal abstract class WindowListItem :10
// {
static void WindowListItem_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        WindowListItem__IDataWatcher_typeof(), offsetof(WindowListItem, _owner), 0,
        uObject_typeof(), offsetof(WindowListItem, _curData), 0,
        uObject_typeof(), offsetof(WindowListItem, _data), 0,
        uObject_typeof(), offsetof(WindowListItem, _Id), 0);
}

::g::Fuse::Reactive::ValueObserver_type* WindowListItem_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(WindowListItem);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.WindowListItem", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->fp_build_ = WindowListItem_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::ValueObserver*))WindowListItem__Dispose_fn;
    type->fp_LostData = (void(*)(::g::Fuse::Reactive::ValueObserver*))WindowListItem__LostData_fn;
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))WindowListItem__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))WindowListItem__Dispose_fn;
    return type;
}

// protected WindowListItem() :59
void WindowListItem__ctor_1_fn(WindowListItem* __this)
{
    __this->ctor_1();
}

// public static T Create<T>(Fuse.Reactive.WindowListItem.IDataWatcher owner, object id, object data) :61
void WindowListItem__Create_fn(uType* __type, uObject* owner, uObject* id, uObject* data, WindowListItem** __retval)
{
    *__retval = WindowListItem::Create(__type, owner, id, data);
}

// public object get_CurrentData() :72
void WindowListItem__get_CurrentData_fn(WindowListItem* __this, uObject** __retval)
{
    *__retval = __this->CurrentData();
}

// public object get_Data() :24
void WindowListItem__get_Data_fn(WindowListItem* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public void set_Data(object value) :25
void WindowListItem__set_Data_fn(WindowListItem* __this, uObject* value)
{
    __this->Data(value);
}

// public override sealed void Dispose() :78
void WindowListItem__Dispose_fn(WindowListItem* __this)
{
    __this->_curData = NULL;
    __this->_data = NULL;
    __this->_owner = NULL;
    __this->Id(NULL);
    ::g::Fuse::Reactive::ValueObserver__Dispose_fn(__this);
}

// public generated object get_Id() :57
void WindowListItem__get_Id_fn(WindowListItem* __this, uObject** __retval)
{
    *__retval = __this->Id();
}

// private generated void set_Id(object value) :57
void WindowListItem__set_Id_fn(WindowListItem* __this, uObject* value)
{
    __this->Id(value);
}

// protected override sealed void LostData() :51
void WindowListItem__LostData_fn(WindowListItem* __this)
{
    __this->PushData(NULL);
}

// protected override sealed void PushData(object newValue) :44
void WindowListItem__PushData_fn(WindowListItem* __this, uObject* newValue)
{
    uObject* oldData = __this->CurrentData();
    __this->_curData = newValue;

    if (__this->_owner != NULL)
        WindowListItem__IDataWatcher::OnCurrentDataChanged(uInterface(uPtr(__this->_owner), WindowListItem__IDataWatcher_typeof()), __this, oldData);
}

// protected WindowListItem() [instance] :59
void WindowListItem::ctor_1()
{
    ctor_();
}

// public object get_CurrentData() [instance] :72
uObject* WindowListItem::CurrentData()
{
    return _curData;
}

// public object get_Data() [instance] :24
uObject* WindowListItem::Data()
{
    return _data;
}

// public void set_Data(object value) [instance] :25
void WindowListItem::Data(uObject* value)
{
    uObject* oldData = CurrentData();
    Unsubscribe();
    _data = value;
    _curData = _data;
    uObject* obs = uAs<uObject*>(_data, ::TYPES[32/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        SubscribeNoPush(obs);
        _curData = Value();
    }

    if (_owner != NULL)
        WindowListItem__IDataWatcher::OnCurrentDataChanged(uInterface(uPtr(_owner), WindowListItem__IDataWatcher_typeof()), this, oldData);
}

// public generated object get_Id() [instance] :57
uObject* WindowListItem::Id()
{
    return _Id;
}

// private generated void set_Id(object value) [instance] :57
void WindowListItem::Id(uObject* value)
{
    _Id = value;
}

// public static T Create<T>(Fuse.Reactive.WindowListItem.IDataWatcher owner, object id, object data) [static] :61
WindowListItem* WindowListItem::Create(uType* __type, uObject* owner, uObject* id, uObject* data)
{
    WindowListItem* lwi = (WindowListItem*)__type->U(0)->New();
    lwi->Data(data);
    lwi->Id(id);
    lwi->_owner = owner;
    return lwi;
}
// }

}}} // ::g::Fuse::Reactive
