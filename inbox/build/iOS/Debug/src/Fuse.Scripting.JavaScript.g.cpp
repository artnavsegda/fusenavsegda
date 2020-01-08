// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.IArray.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Marshal.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.IPropertyObserver.h>
#include <Fuse.Reactive.IPropertySubscription.h>
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Reactive.JavaScript.Dependency.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Dependency.h>
#include <Fuse.Scripting.DependencyType.h>
#include <Fuse.Scripting.DiagnosticSubject.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.FunctionMirror.h>
#include <Fuse.Scripting.IRaw.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Scripting.IThreadWorker.h>
#include <Fuse.Scripting.JavaScript.ArrayMirror.h>
#include <Fuse.Scripting.JavaScript.ClassInstance.h>
#include <Fuse.Scripting.JavaScript.DateTimeConverterHelpers.h>
#include <Fuse.Scripting.JavaScript.IMirror.h>
#include <Fuse.Scripting.JavaScript.JSContext.h>
#include <Fuse.Scripting.JavaScript.JSContext.MethodClosure.h>
#include <Fuse.Scripting.JavaScript.JSContext.PropertyClosure.h>
#include <Fuse.Scripting.JavaScript.JSContext.ReadonlyPropertyClosure.h>
#include <Fuse.Scripting.JavaScript.LazyObservableProperty.h>
#include <Fuse.Scripting.JavaScript.ModuleInstance.h>
#include <Fuse.Scripting.JavaScript.ObjectMirror.h>
#include <Fuse.Scripting.JavaScript.Observable.Add.h>
#include <Fuse.Scripting.JavaScript.Observable.Clear.h>
#include <Fuse.Scripting.JavaScript.Observable.Failed.h>
#include <Fuse.Scripting.JavaScript.Observable.h>
#include <Fuse.Scripting.JavaScript.Observable.InsertAll.h>
#include <Fuse.Scripting.JavaScript.Observable.InsertAt.h>
#include <Fuse.Scripting.JavaScript.Observable.NewAll.h>
#include <Fuse.Scripting.JavaScript.Observable.NewAt.h>
#include <Fuse.Scripting.JavaScript.Observable.Operation.h>
#include <Fuse.Scripting.JavaScript.Observable.RemoveAt.h>
#include <Fuse.Scripting.JavaScript.Observable.RemoveRange.h>
#include <Fuse.Scripting.JavaScript.Observable.Set.h>
#include <Fuse.Scripting.JavaScript.Observable.Subscription.ClearExclusiv-a1671db.h>
#include <Fuse.Scripting.JavaScript.Observable.Subscription.h>
#include <Fuse.Scripting.JavaScript.Observable.Subscription.ReplaceAllExc-4db3ed33.h>
#include <Fuse.Scripting.JavaScript.Observable.Subscription.SetExclusiveOperation.h>
#include <Fuse.Scripting.JavaScript.ObservableProperty.h>
#include <Fuse.Scripting.JavaScript.ObservableProperty.PushCapture.h>
#include <Fuse.Scripting.JavaScript.ObservableProperty.ResolveDefaultValueClosure.h>
#include <Fuse.Scripting.JavaScript.RootableScriptModule.h>
#include <Fuse.Scripting.JavaScript.ScriptModuleNames.h>
#include <Fuse.Scripting.JavaScript.ThreadWorker.ContextIgnoringAction.h>
#include <Fuse.Scripting.JavaScript.ThreadWorker.ExceptionClosure.h>
#include <Fuse.Scripting.JavaScript.ThreadWorker.h>
#include <Fuse.Scripting.JavaScript.TreeArray.ArraySubscription.h>
#include <Fuse.Scripting.JavaScript.TreeArray.ArraySubscription.ReplaceAl-3a15604a.h>
#include <Fuse.Scripting.JavaScript.TreeArray.ArraySubscription.SimpleArray.h>
#include <Fuse.Scripting.JavaScript.TreeArray.h>
#include <Fuse.Scripting.JavaScript.TreeObject.h>
#include <Fuse.Scripting.JavaScript.TreeObject.PropertySubscription.h>
#include <Fuse.Scripting.JavaScript.TreeObject.PropertySubscription.JSThreadSet.h>
#include <Fuse.Scripting.JavaScript.TreeObject.SetClosure.h>
#include <Fuse.Scripting.JavaScript.TreeObservable.AddOperation.h>
#include <Fuse.Scripting.JavaScript.TreeObservable.h>
#include <Fuse.Scripting.JavaScript.TreeObservable.InsertAtOperation.h>
#include <Fuse.Scripting.JavaScript.TreeObservable.Operation.h>
#include <Fuse.Scripting.JavaScript.TreeObservable.Operation.PerformClosure.h>
#include <Fuse.Scripting.JavaScript.TreeObservable.RemoveAtOperation.h>
#include <Fuse.Scripting.JavaScript.TreeObservable.SetOperation.h>
#include <Fuse.Scripting.JavaScript.TreeObservable.ValueOperation.h>
#include <Fuse.Scripting.JavaScript.TypeWrapper.h>
#include <Fuse.Scripting.JavaScriptCore.Context.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptMethodInline.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.ScriptProperty.h>
#include <Fuse.Scripting.ScriptReadonlyProperty.h>
#include <Fuse.Scripting.SubscriptionSubject.h>
#include <Fuse.Scripting.SubscriptionSubject.Subscription.h>
#include <Fuse.Scripting.ValueMirror.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.WrapException.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.KeyCollection.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.DateTime.h>
#include <Uno.DateTimeKind.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.EventWaitHandle.h>
#include <Uno.Threading.ManualResetEvent.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadStart.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
static uString* STRINGS[37];
static uType* TYPES[66];

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// private sealed class Observable.Add :547
// {
static void Observable__Add_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        uObject_typeof(), offsetof(Observable__Add, _value), 0);
}

::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__Add_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Add);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::Observable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::Observable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.Observable.Add", options);
    type->fp_build_ = Observable__Add_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*, uObject*))Observable__Add__OnPerform_fn;
    return type;
}

// public Add(Fuse.Scripting.JavaScript.Observable obs, object value) :551
void Observable__Add__ctor_1_fn(Observable__Add* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value)
{
    __this->ctor_1(obs, value);
}

// public Add New(Fuse.Scripting.JavaScript.Observable obs, object value) :551
void Observable__Add__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value, Observable__Add** __retval)
{
    *__retval = Observable__Add::New1(obs, value);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription> sub) :556
void Observable__Add__OnPerform_fn(Observable__Add* __this, uObject* sub)
{
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret3;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(__this->Observable())->_values), __this->_value);

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Scripting.JavaScript.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnAdd(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_value);
}

// public Add(Fuse.Scripting.JavaScript.Observable obs, object value) [instance] :551
void Observable__Add::ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value)
{
    ctor_(obs);
    _value = value;
}

// public Add New(Fuse.Scripting.JavaScript.Observable obs, object value) [static] :551
Observable__Add* Observable__Add::New1(::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value)
{
    Observable__Add* obj1 = (Observable__Add*)uNew(Observable__Add_typeof());
    obj1->ctor_1(obs, value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObservable.uno
// ----------------------------------------------------------------------------------------------------

// private sealed class TreeObservable.AddOperation :212
// {
static void TreeObservable__AddOperation_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Scripting::JavaScript::TreeArray_typeof();
    type->SetFields(3);
}

::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type* TreeObservable__AddOperation_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::TreeObservable__ValueOperation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TreeObservable__AddOperation);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.TreeObservable.AddOperation", options);
    type->fp_build_ = TreeObservable__AddOperation_build;
    type->fp_Perform1 = (void(*)(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation*, uObject*))TreeObservable__AddOperation__Perform1_fn;
    type->fp_get_SpecialArgCount = (void(*)(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation*, int32_t*))TreeObservable__AddOperation__get_SpecialArgCount_fn;
    return type;
}

// public AddOperation(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) :214
void TreeObservable__AddOperation__ctor_2_fn(TreeObservable__AddOperation* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    __this->ctor_2(context, inst, args);
}

// public AddOperation New(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) :214
void TreeObservable__AddOperation__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args, TreeObservable__AddOperation** __retval)
{
    *__retval = TreeObservable__AddOperation::New1(context, inst, args);
}

// protected override sealed void Perform(object dc) :219
void TreeObservable__AddOperation__Perform1_fn(TreeObservable__AddOperation* __this, uObject* dc)
{
    ::g::Fuse::Scripting::JavaScript::TreeArray* arr = uAs< ::g::Fuse::Scripting::JavaScript::TreeArray*>(dc, ::TYPES[3/*Fuse.Scripting.JavaScript.TreeArray*/]);

    if (arr != NULL)
        uPtr(arr)->Add(__this->WrappedValue);
}

// protected override sealed int get_SpecialArgCount() :218
void TreeObservable__AddOperation__get_SpecialArgCount_fn(TreeObservable__AddOperation* __this, int32_t* __retval)
{
    return *__retval = 1, void();
}

// public AddOperation(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) [instance] :214
void TreeObservable__AddOperation::ctor_2(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    ctor_1(context, inst, args);
}

// public AddOperation New(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) [static] :214
TreeObservable__AddOperation* TreeObservable__AddOperation::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    TreeObservable__AddOperation* obj1 = (TreeObservable__AddOperation*)uNew(TreeObservable__AddOperation_typeof());
    obj1->ctor_2(context, inst, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ArrayMirror.uno
// ----------------------------------------------------------------------------------

// internal class ArrayMirror :6
// {
static void ArrayMirror_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Scripting::JavaScript::IMirror_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::ValueMirror_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IRaw_typeof(), offsetof(::g::Fuse::Scripting::ListMirror_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(::g::Fuse::Scripting::ListMirror_type, interface1));
    type->SetFields(2,
        ::TYPES[4/*Uno.Collections.List<object>*/], offsetof(ArrayMirror, _items), 0,
        ::g::Uno::Bool_typeof(), offsetof(ArrayMirror, _hasUnsubscribed), 0);
}

::g::Fuse::Scripting::ListMirror_type* ArrayMirror_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ListMirror_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ArrayMirror);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ListMirror_type);
    type = (::g::Fuse::Scripting::ListMirror_type*)uClassType::New("Fuse.Scripting.JavaScript.ArrayMirror", options);
    type->fp_build_ = ArrayMirror_build;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::ListMirror*, int32_t*, uObject**))ArrayMirror__get_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::ListMirror*, int32_t*))ArrayMirror__get_Length_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::ValueMirror*))ArrayMirror__Unsubscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int32_t*))ArrayMirror__get_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))ArrayMirror__get_Item_fn;
    type->interface0.fp_get_ReflectedRaw = (void(*)(uObject*, uObject**))::g::Fuse::Scripting::ValueMirror__get_ReflectedRaw_fn;
    return type;
}

// protected ArrayMirror(Fuse.Scripting.Array obj) :11
void ArrayMirror__ctor_3_fn(ArrayMirror* __this, ::g::Fuse::Scripting::Array* obj)
{
    __this->ctor_3(obj);
}

// internal ArrayMirror(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.IMirror mirror, Fuse.Scripting.Array arr) :13
void ArrayMirror__ctor_4_fn(ArrayMirror* __this, ::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Array* arr)
{
    __this->ctor_4(context, mirror, arr);
}

// public override sealed object get_Item(int index) :43
void ArrayMirror__get_Item_fn(ArrayMirror* __this, int32_t* index, uObject** __retval)
{
    uObject* ret4;
    int32_t index_ = *index;
    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_items), uCRef<int32_t>(index_), &ret4), ret4), void();
}

// internal object[] get_ItemsReadonly() :26
void ArrayMirror__get_ItemsReadonly_fn(ArrayMirror* __this, uArray** __retval)
{
    *__retval = __this->ItemsReadonly();
}

// public override sealed int get_Length() :48
void ArrayMirror__get_Length_fn(ArrayMirror* __this, int32_t* __retval)
{
    return *__retval = uPtr(__this->_items)->Count(), void();
}

// internal ArrayMirror New(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.IMirror mirror, Fuse.Scripting.Array arr) :13
void ArrayMirror__New2_fn(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Array* arr, ArrayMirror** __retval)
{
    *__retval = ArrayMirror::New2(context, mirror, arr);
}

// internal void Set(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.IMirror mirror, Fuse.Scripting.Array arr) :18
void ArrayMirror__Set_fn(ArrayMirror* __this, ::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Array* arr)
{
    __this->Set(context, mirror, arr);
}

// public override sealed void Unsubscribe() :29
void ArrayMirror__Unsubscribe_fn(ArrayMirror* __this)
{
    uObject* ret3;

    if (__this->_hasUnsubscribed)
        return;

    __this->_hasUnsubscribed = true;

    for (int32_t i = 0; i < uPtr(__this->_items)->Count(); i++)
    {
        ::g::Fuse::Scripting::ValueMirror* d = uAs< ::g::Fuse::Scripting::ValueMirror*>((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_items), uCRef<int32_t>(i), &ret3), ret3), ::TYPES[6/*Fuse.Scripting.ValueMirror*/]);

        if (d != NULL)
            uPtr(d)->Unsubscribe();
    }
}

// protected ArrayMirror(Fuse.Scripting.Array obj) [instance] :11
void ArrayMirror::ctor_3(::g::Fuse::Scripting::Array* obj)
{
    ctor_2(obj);
}

// internal ArrayMirror(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.IMirror mirror, Fuse.Scripting.Array arr) [instance] :13
void ArrayMirror::ctor_4(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Array* arr)
{
    ctor_2(arr);
    Set(context, mirror, arr);
}

// internal object[] get_ItemsReadonly() [instance] :26
uArray* ArrayMirror::ItemsReadonly()
{
    return (uArray*)uPtr(_items)->ToArray();
}

// internal void Set(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.IMirror mirror, Fuse.Scripting.Array arr) [instance] :18
void ArrayMirror::Set(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Array* arr)
{
    _items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[4/*Uno.Collections.List<object>*/], uPtr(arr)->Length()));

    for (int32_t i = 0; i < arr->Length(); i++)
        ::g::Uno::Collections::List__Add_fn(uPtr(_items), ::g::Fuse::Scripting::JavaScript::IMirror::Reflect(uInterface(uPtr(mirror), ::TYPES[5/*Fuse.Scripting.JavaScript.IMirror*/]), context, uPtr(arr)->Item(i)));
}

// internal ArrayMirror New(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.IMirror mirror, Fuse.Scripting.Array arr) [static] :13
ArrayMirror* ArrayMirror::New2(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Array* arr)
{
    ArrayMirror* obj2 = (ArrayMirror*)uNew(ArrayMirror_typeof());
    obj2->ctor_4(context, mirror, arr);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeArray.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class TreeArray.ArraySubscription :18
// {
static void TreeArray__ArraySubscription_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TreeArray__ArraySubscription_type, interface0),
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(TreeArray__ArraySubscription_type, interface1));
    type->SetFields(3,
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(TreeArray__ArraySubscription, _observer), 0);
}

TreeArray__ArraySubscription_type* TreeArray__ArraySubscription_typeof()
{
    static uSStrong<TreeArray__ArraySubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::SubscriptionSubject__Subscription_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TreeArray__ArraySubscription);
    options.TypeSize = sizeof(TreeArray__ArraySubscription_type);
    type = (TreeArray__ArraySubscription_type*)uClassType::New("Fuse.Scripting.JavaScript.TreeArray.ArraySubscription", options);
    type->fp_build_ = TreeArray__ArraySubscription_build;
    type->interface1.fp_SetExclusive = (void(*)(uObject*, uObject*))TreeArray__ArraySubscription__FuseReactiveISubscriptionSetExclusive_fn;
    type->interface1.fp_ReplaceAllExclusive = (void(*)(uObject*, uObject*))TreeArray__ArraySubscription__FuseReactiveISubscriptionReplaceAllExclusive_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::SubscriptionSubject__Subscription__Dispose_fn;
    return type;
}

// public ArraySubscription(Fuse.Scripting.JavaScript.ArrayMirror am, Fuse.Reactive.IObserver observer) :22
void TreeArray__ArraySubscription__ctor_1_fn(TreeArray__ArraySubscription* __this, ::g::Fuse::Scripting::JavaScript::ArrayMirror* am, uObject* observer)
{
    __this->ctor_1(am, observer);
}

// private void Fuse.Reactive.ISubscription.ReplaceAllExclusive(Fuse.IArray values) :137
void TreeArray__ArraySubscription__FuseReactiveISubscriptionReplaceAllExclusive_fn(TreeArray__ArraySubscription* __this, uObject* values)
{
    __this->ReplaceAllExclusive(values);
}

// private void Fuse.Reactive.ISubscription.SetExclusive(object newValue) :127
void TreeArray__ArraySubscription__FuseReactiveISubscriptionSetExclusive_fn(TreeArray__ArraySubscription* __this, uObject* newValue)
{
    __this->ReplaceAllExclusive((uObject*)TreeArray__ArraySubscription__SimpleArray::New1(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 1, newValue)));
}

// public ArraySubscription New(Fuse.Scripting.JavaScript.ArrayMirror am, Fuse.Reactive.IObserver observer) :22
void TreeArray__ArraySubscription__New1_fn(::g::Fuse::Scripting::JavaScript::ArrayMirror* am, uObject* observer, TreeArray__ArraySubscription** __retval)
{
    *__retval = TreeArray__ArraySubscription::New1(am, observer);
}

// public void OnAdd(object newValue) :34
void TreeArray__ArraySubscription__OnAdd_fn(TreeArray__ArraySubscription* __this, uObject* newValue)
{
    __this->OnAdd(newValue);
}

// public void OnInsertAt(int index, object newValue) :41
void TreeArray__ArraySubscription__OnInsertAt_fn(TreeArray__ArraySubscription* __this, int32_t* index, uObject* newValue)
{
    __this->OnInsertAt(*index, newValue);
}

// public void OnRemoveAt(int index) :48
void TreeArray__ArraySubscription__OnRemoveAt_fn(TreeArray__ArraySubscription* __this, int32_t* index)
{
    __this->OnRemoveAt(*index);
}

// public void OnReplaceAll(Fuse.IArray values, Fuse.Scripting.JavaScript.TreeArray.ArraySubscription exclude) :55
void TreeArray__ArraySubscription__OnReplaceAll_fn(TreeArray__ArraySubscription* __this, uObject* values, TreeArray__ArraySubscription* exclude)
{
    __this->OnReplaceAll(values, exclude);
}

// public void OnReplaceAt(int index, object newValue) :27
void TreeArray__ArraySubscription__OnReplaceAt_fn(TreeArray__ArraySubscription* __this, int32_t* index, uObject* newValue)
{
    __this->OnReplaceAt(*index, newValue);
}

// private void ReplaceAllExclusive(Fuse.IArray values) :106
void TreeArray__ArraySubscription__ReplaceAllExclusive_fn(TreeArray__ArraySubscription* __this, uObject* values)
{
    __this->ReplaceAllExclusive(values);
}

// public ArraySubscription(Fuse.Scripting.JavaScript.ArrayMirror am, Fuse.Reactive.IObserver observer) [instance] :22
void TreeArray__ArraySubscription::ctor_1(::g::Fuse::Scripting::JavaScript::ArrayMirror* am, uObject* observer)
{
    ctor_(am);
    _observer = observer;
}

// public void OnAdd(object newValue) [instance] :34
void TreeArray__ArraySubscription::OnAdd(uObject* newValue)
{
    ::g::Fuse::Reactive::IObserver::OnAdd(uInterface(uPtr(_observer), ::TYPES[2/*Fuse.Reactive.IObserver*/]), newValue);
    TreeArray__ArraySubscription* next = uAs<TreeArray__ArraySubscription*>(Next(), __type);

    if (next != NULL)
        uPtr(next)->OnAdd(newValue);
}

// public void OnInsertAt(int index, object newValue) [instance] :41
void TreeArray__ArraySubscription::OnInsertAt(int32_t index, uObject* newValue)
{
    ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(_observer), ::TYPES[2/*Fuse.Reactive.IObserver*/]), index, newValue);
    TreeArray__ArraySubscription* next = uAs<TreeArray__ArraySubscription*>(Next(), __type);

    if (next != NULL)
        uPtr(next)->OnInsertAt(index, newValue);
}

// public void OnRemoveAt(int index) [instance] :48
void TreeArray__ArraySubscription::OnRemoveAt(int32_t index)
{
    ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(_observer), ::TYPES[2/*Fuse.Reactive.IObserver*/]), index);
    TreeArray__ArraySubscription* next = uAs<TreeArray__ArraySubscription*>(Next(), __type);

    if (next != NULL)
        uPtr(next)->OnRemoveAt(index);
}

// public void OnReplaceAll(Fuse.IArray values, Fuse.Scripting.JavaScript.TreeArray.ArraySubscription exclude) [instance] :55
void TreeArray__ArraySubscription::OnReplaceAll(uObject* values, TreeArray__ArraySubscription* exclude)
{
    if (this != exclude)
        ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(_observer), ::TYPES[2/*Fuse.Reactive.IObserver*/]), values);

    TreeArray__ArraySubscription* next = uAs<TreeArray__ArraySubscription*>(Next(), __type);

    if (next != NULL)
        uPtr(next)->OnReplaceAll(values, exclude);
}

// public void OnReplaceAt(int index, object newValue) [instance] :27
void TreeArray__ArraySubscription::OnReplaceAt(int32_t index, uObject* newValue)
{
    ::g::Fuse::Reactive::IObserver::OnNewAt(uInterface(uPtr(_observer), ::TYPES[2/*Fuse.Reactive.IObserver*/]), index, newValue);
    TreeArray__ArraySubscription* next = uAs<TreeArray__ArraySubscription*>(Next(), __type);

    if (next != NULL)
        uPtr(next)->OnReplaceAt(index, newValue);
}

// private void ReplaceAllExclusive(Fuse.IArray values) [instance] :106
void TreeArray__ArraySubscription::ReplaceAllExclusive(uObject* values)
{
    ::g::Fuse::Scripting::JavaScript::TreeArray* ta = uAs< ::g::Fuse::Scripting::JavaScript::TreeArray*>(SubscriptionSubject(), ::TYPES[3/*Fuse.Scripting.JavaScript.TreeArray*/]);
    ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker = ::g::Fuse::Reactive::JavaScript::Worker_;
    TreeArray__ArraySubscription__ReplaceAllOperation* replaceAll = TreeArray__ArraySubscription__ReplaceAllOperation::New1(uCast< ::g::Fuse::Scripting::Array*>(uPtr(ta)->Raw(), ::TYPES[20/*Fuse.Scripting.Array*/]), values);
    uPtr(worker)->Invoke1(uDelegate::New(::TYPES[9/*Uno.Action<Fuse.Scripting.Context>*/], (void*)TreeArray__ArraySubscription__ReplaceAllOperation__Perform_fn, replaceAll));
    ta->ReplaceAll(values, this);
}

// public ArraySubscription New(Fuse.Scripting.JavaScript.ArrayMirror am, Fuse.Reactive.IObserver observer) [static] :22
TreeArray__ArraySubscription* TreeArray__ArraySubscription::New1(::g::Fuse::Scripting::JavaScript::ArrayMirror* am, uObject* observer)
{
    TreeArray__ArraySubscription* obj1 = (TreeArray__ArraySubscription*)uNew(TreeArray__ArraySubscription_typeof());
    obj1->ctor_1(am, observer);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ClassInstance.uno
// ------------------------------------------------------------------------------------

// internal sealed class ClassInstance :10
// {
static void ClassInstance_build(uType* type)
{
    ::STRINGS[0] = uString::Const("_tempMethod");
    ::TYPES[7] = ::g::Fuse::INotifyUnrooted_typeof();
    ::TYPES[8] = ::g::Uno::Action_typeof();
    ::TYPES[9] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Property_typeof(), ::g::Fuse::Scripting::JavaScript::ObservableProperty_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Uno::UX::Property_typeof(), ::g::Fuse::Scripting::JavaScript::ObservableProperty_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScript::ThreadWorker_typeof(), offsetof(ClassInstance, _worker), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(ClassInstance, _rootTable), 0,
        uObject_typeof(), offsetof(ClassInstance, _obj), 0,
        ::TYPES[11/*Fuse.Scripting.Object*/], offsetof(ClassInstance, _self), 0,
        ::TYPES[10/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.JavaScript.ObservableProperty>*/], offsetof(ClassInstance, _properties), 0);
}

uType* ClassInstance_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ClassInstance);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.ClassInstance", options);
    type->fp_build_ = ClassInstance_build;
    return type;
}

// internal ClassInstance(Fuse.Scripting.JavaScript.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) :29
void ClassInstance__ctor__fn(ClassInstance* __this, ::g::Fuse::Scripting::JavaScript::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    __this->ctor_(context, obj, rootTable);
}

// public void CallMethod(Fuse.Scripting.Context context, Fuse.Scripting.Function method, object[] args) :37
void ClassInstance__CallMethod_fn(ClassInstance* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* method, uArray* args)
{
    __this->CallMethod(context, method, args);
}

// private void DispatchUnroot() :74
void ClassInstance__DispatchUnroot_fn(ClassInstance* __this)
{
    __this->DispatchUnroot();
}

// private void EnsureHasProperties() :69
void ClassInstance__EnsureHasProperties_fn(ClassInstance* __this)
{
    __this->EnsureHasProperties();
}

// public void EnsureRooted(Fuse.Scripting.Context context) :45
void ClassInstance__EnsureRooted_fn(ClassInstance* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->EnsureRooted(context);
}

// internal Fuse.Scripting.Object GetPropertyObservable(Fuse.Scripting.Context context, Uno.UX.Property p) :81
void ClassInstance__GetPropertyObservable_fn(ClassInstance* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->GetPropertyObservable(context, p);
}

// internal ClassInstance New(Fuse.Scripting.JavaScript.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) :29
void ClassInstance__New1_fn(::g::Fuse::Scripting::JavaScript::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ClassInstance** __retval)
{
    *__retval = ClassInstance::New1(context, obj, rootTable);
}

// private void Unroot(Fuse.Scripting.Context context) :94
void ClassInstance__Unroot_fn(ClassInstance* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Unroot(context);
}

// internal ClassInstance(Fuse.Scripting.JavaScript.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) [instance] :29
void ClassInstance::ctor_(::g::Fuse::Scripting::JavaScript::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    _worker = context;
    _rootTable = rootTable;
    _obj = obj;
}

// public void CallMethod(Fuse.Scripting.Context context, Fuse.Scripting.Function method, object[] args) [instance] :37
void ClassInstance::CallMethod(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* method, uArray* args)
{
    uPtr(_self)->Item(::STRINGS[0/*"_tempMethod"*/], method);
    uPtr(_self)->CallMethod(context, ::STRINGS[0/*"_tempMethod"*/], args);
}

// private void DispatchUnroot() [instance] :74
void ClassInstance::DispatchUnroot()
{
    uObject* n = (uObject*)uPtr(_rootTable)->This();
    ::g::Fuse::INotifyUnrooted::remove_Unrooted(uInterface(uPtr(n), ::TYPES[7/*Fuse.INotifyUnrooted*/]), uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)ClassInstance__DispatchUnroot_fn, this));
    uPtr(_worker)->Invoke1(uDelegate::New(::TYPES[9/*Uno.Action<Fuse.Scripting.Context>*/], (void*)ClassInstance__Unroot_fn, this));
}

// private void EnsureHasProperties() [instance] :69
void ClassInstance::EnsureHasProperties()
{
    if (_properties == NULL)
        _properties = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[10/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.JavaScript.ObservableProperty>*/]));
}

// public void EnsureRooted(Fuse.Scripting.Context context) [instance] :45
void ClassInstance::EnsureRooted(::g::Fuse::Scripting::Context* context)
{
    ::g::Uno::UX::Property* ret4;
    bool ret5;

    if (_self != NULL)
        return;

    uObject* n = uAs<uObject*>(_obj, ::TYPES[7/*Fuse.INotifyUnrooted*/]);

    if (n != NULL)
        ::g::Fuse::INotifyUnrooted::add_Unrooted(uInterface(uPtr(n), ::TYPES[7/*Fuse.INotifyUnrooted*/]), uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)ClassInstance__DispatchUnroot_fn, this));

    _self = uAs< ::g::Fuse::Scripting::Object*>(uPtr(context)->Unwrap(_obj), ::TYPES[11/*Fuse.Scripting.Object*/]);

    if (_properties == NULL)
    {
        if (_rootTable != NULL)
        {
            EnsureHasProperties();

            for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(_rootTable)->Properties()), ::TYPES[12/*Uno.Collections.ICollection<Uno.UX.Property>*/])); i++)
            {
                ::g::Uno::UX::Property* p = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(_rootTable)->Properties()), ::TYPES[13/*Uno.Collections.IList<Uno.UX.Property>*/]), uCRef<int32_t>(i), &ret4), ret4);

                if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_properties), p, &ret5), ret5))
                    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_properties), p, ::g::Fuse::Scripting::JavaScript::LazyObservableProperty::New2(_worker, _self, p, context));
            }
        }
    }
}

// internal Fuse.Scripting.Object GetPropertyObservable(Fuse.Scripting.Context context, Uno.UX.Property p) [instance] :81
::g::Fuse::Scripting::Object* ClassInstance::GetPropertyObservable(::g::Fuse::Scripting::Context* context, ::g::Uno::UX::Property* p)
{
    bool ret7;
    EnsureHasProperties();
    ::g::Fuse::Scripting::JavaScript::ObservableProperty* op;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_properties), p, (void**)(&op), &ret7), ret7))
    {
        op = ::g::Fuse::Scripting::JavaScript::ObservableProperty::New1(_worker, _self, p);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_properties), p, op);
    }

    return uPtr(uPtr(op)->GetObservable(context))->Object();
}

// private void Unroot(Fuse.Scripting.Context context) [instance] :94
void ClassInstance::Unroot(::g::Fuse::Scripting::Context* context)
{
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Scripting::JavaScript::ObservableProperty*> > ret8;

    if (_self == NULL)
        return;

    if (_properties != NULL)
    {
        ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Scripting::JavaScript::ObservableProperty*> > enum2 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(_properties)->Values()), &ret8), ret8);

        {
            try
            {
                {
                    while (enum2.MoveNext(::TYPES[14/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.JavaScript.ObservableProperty>.ValueCollection.Enumerator*/]))
                    {
                        ::g::Fuse::Scripting::JavaScript::ObservableProperty* p = enum2.Current(::TYPES[14/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.JavaScript.ObservableProperty>.ValueCollection.Enumerator*/]);
                        uPtr(p)->Reset();
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum2.Dispose(::TYPES[14/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.JavaScript.ObservableProperty>.ValueCollection.Enumerator*/]);
                }
                                throw __t;
                goto __after_finally_0;
            }

            {
                enum2.Dispose(::TYPES[14/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.JavaScript.ObservableProperty>.ValueCollection.Enumerator*/]);
            }
            __after_finally_0:;
        }
    }

    _self = NULL;
}

// internal ClassInstance New(Fuse.Scripting.JavaScript.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) [static] :29
ClassInstance* ClassInstance::New1(::g::Fuse::Scripting::JavaScript::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    ClassInstance* obj3 = (ClassInstance*)uNew(ClassInstance_typeof());
    obj3->ctor_(context, obj, rootTable);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// private sealed class Observable.Clear :442
// {
static void Observable__Clear_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__Clear, _origin), 0);
}

::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__Clear_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Clear);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::Observable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::Observable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.Observable.Clear", options);
    type->fp_build_ = Observable__Clear_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*, uObject*))Observable__Clear__OnPerform_fn;
    return type;
}

// public Clear(Fuse.Scripting.JavaScript.Observable obs, int origin) :446
void Observable__Clear__ctor_1_fn(Observable__Clear* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* origin)
{
    __this->ctor_1(obs, *origin);
}

// public Clear New(Fuse.Scripting.JavaScript.Observable obs, int origin) :446
void Observable__Clear__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* origin, Observable__Clear** __retval)
{
    *__retval = Observable__Clear::New1(obs, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription> sub) :451
void Observable__Clear__OnPerform_fn(Observable__Clear* __this, uObject* sub)
{
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Scripting.JavaScript.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]));
}

// public Clear(Fuse.Scripting.JavaScript.Observable obs, int origin) [instance] :446
void Observable__Clear::ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t origin)
{
    ctor_(obs);
    _origin = origin;
}

// public Clear New(Fuse.Scripting.JavaScript.Observable obs, int origin) [static] :446
Observable__Clear* Observable__Clear::New1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t origin)
{
    Observable__Clear* obj1 = (Observable__Clear*)uNew(Observable__Clear_typeof());
    obj1->ctor_1(obs, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// private sealed class Observable.Subscription.ClearExclusiveOperation :185
// {
static void Observable__Subscription__ClearExclusiveOperation_build(uType* type)
{
    ::STRINGS[1] = uString::Const("clear");
    ::TYPES[15] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(Observable__Subscription__ClearExclusiveOperation, Object), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__Subscription__ClearExclusiveOperation, Origin), 0);
}

uType* Observable__Subscription__ClearExclusiveOperation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Observable__Subscription__ClearExclusiveOperation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.Observable.Subscription.ClearExclusiveOperation", options);
    type->fp_build_ = Observable__Subscription__ClearExclusiveOperation_build;
    return type;
}

// public ClearExclusiveOperation(Fuse.Scripting.Object obj, int origin) :187
void Observable__Subscription__ClearExclusiveOperation__ctor__fn(Observable__Subscription__ClearExclusiveOperation* __this, ::g::Fuse::Scripting::Object* obj, int32_t* origin)
{
    __this->ctor_(obj, *origin);
}

// public ClearExclusiveOperation New(Fuse.Scripting.Object obj, int origin) :187
void Observable__Subscription__ClearExclusiveOperation__New1_fn(::g::Fuse::Scripting::Object* obj, int32_t* origin, Observable__Subscription__ClearExclusiveOperation** __retval)
{
    *__retval = Observable__Subscription__ClearExclusiveOperation::New1(obj, *origin);
}

// public void Perform(Fuse.Scripting.Context context) :197
void Observable__Subscription__ClearExclusiveOperation__Perform_fn(Observable__Subscription__ClearExclusiveOperation* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Perform(context);
}

// public ClearExclusiveOperation(Fuse.Scripting.Object obj, int origin) [instance] :187
void Observable__Subscription__ClearExclusiveOperation::ctor_(::g::Fuse::Scripting::Object* obj, int32_t origin)
{
    Object = obj;
    Origin = origin;
}

// public void Perform(Fuse.Scripting.Context context) [instance] :197
void Observable__Subscription__ClearExclusiveOperation::Perform(::g::Fuse::Scripting::Context* context)
{
    uPtr(Object)->CallMethod(context, ::STRINGS[1/*"clear"*/], uArray::Init<uObject*>(::TYPES[15/*object[]*/], 1, uBox<int32_t>(::TYPES[63/*int*/], Origin)));
}

// public ClearExclusiveOperation New(Fuse.Scripting.Object obj, int origin) [static] :187
Observable__Subscription__ClearExclusiveOperation* Observable__Subscription__ClearExclusiveOperation::New1(::g::Fuse::Scripting::Object* obj, int32_t origin)
{
    Observable__Subscription__ClearExclusiveOperation* obj1 = (Observable__Subscription__ClearExclusiveOperation*)uNew(Observable__Subscription__ClearExclusiveOperation_typeof());
    obj1->ctor_(obj, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ThreadWorker.uno
// -----------------------------------------------------------------------------------

// private sealed class ThreadWorker.ContextIgnoringAction :185
// {
static void ThreadWorker__ContextIgnoringAction_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(ThreadWorker__ContextIgnoringAction, _action), 0);
}

uType* ThreadWorker__ContextIgnoringAction_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ThreadWorker__ContextIgnoringAction);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.ThreadWorker.ContextIgnoringAction", options);
    type->fp_build_ = ThreadWorker__ContextIgnoringAction_build;
    return type;
}

// public ContextIgnoringAction(Uno.Action action) :189
void ThreadWorker__ContextIgnoringAction__ctor__fn(ThreadWorker__ContextIgnoringAction* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ContextIgnoringAction New(Uno.Action action) :189
void ThreadWorker__ContextIgnoringAction__New1_fn(uDelegate* action, ThreadWorker__ContextIgnoringAction** __retval)
{
    *__retval = ThreadWorker__ContextIgnoringAction::New1(action);
}

// public void Run(Fuse.Scripting.Context context) :194
void ThreadWorker__ContextIgnoringAction__Run_fn(ThreadWorker__ContextIgnoringAction* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Run(context);
}

// public ContextIgnoringAction(Uno.Action action) [instance] :189
void ThreadWorker__ContextIgnoringAction::ctor_(uDelegate* action)
{
    _action = action;
}

// public void Run(Fuse.Scripting.Context context) [instance] :194
void ThreadWorker__ContextIgnoringAction::Run(::g::Fuse::Scripting::Context* context)
{
    uPtr(_action)->InvokeVoid();
}

// public ContextIgnoringAction New(Uno.Action action) [static] :189
ThreadWorker__ContextIgnoringAction* ThreadWorker__ContextIgnoringAction::New1(uDelegate* action)
{
    ThreadWorker__ContextIgnoringAction* obj1 = (ThreadWorker__ContextIgnoringAction*)uNew(ThreadWorker__ContextIgnoringAction_typeof());
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/DateTimeConverterHelpers.uno
// -----------------------------------------------------------------------------------------------

// internal static class DateTimeConverterHelpers :11
// {
static void DateTimeConverterHelpers_build(uType* type)
{
    ::STRINGS[2] = uString::Const("getTime");
    ::TYPES[15] = uObject_typeof()->Array();
}

uClassType* DateTimeConverterHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JavaScript.DateTimeConverterHelpers", options);
    type->fp_build_ = DateTimeConverterHelpers_build;
    return type;
}

// public static object ConvertDateTimeToJSDate(Fuse.Scripting.Context context, Uno.DateTime dt, Fuse.Scripting.Function dateCtor) :25
void DateTimeConverterHelpers__ConvertDateTimeToJSDate_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::DateTime* dt, ::g::Fuse::Scripting::Function* dateCtor, uObject** __retval)
{
    *__retval = DateTimeConverterHelpers::ConvertDateTimeToJSDate(context, *dt, dateCtor);
}

// public static Uno.DateTime ConvertDateToDateTime(Fuse.Scripting.Context context, Fuse.Scripting.Object date) :16
void DateTimeConverterHelpers__ConvertDateToDateTime_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* date, ::g::Uno::DateTime* __retval)
{
    *__retval = DateTimeConverterHelpers::ConvertDateToDateTime(context, date);
}

// public static object ConvertDateTimeToJSDate(Fuse.Scripting.Context context, Uno.DateTime dt, Fuse.Scripting.Function dateCtor) [static] :25
uObject* DateTimeConverterHelpers::ConvertDateTimeToJSDate(::g::Fuse::Scripting::Context* context, ::g::Uno::DateTime dt, ::g::Fuse::Scripting::Function* dateCtor)
{
    int64_t dotNetTicks = dt.Ticks();
    int64_t dotNetTicksRelativeToUnixEpoch = dotNetTicks - 621355968000000000LL;
    int64_t jsTicks = dotNetTicksRelativeToUnixEpoch / 10000LL;
    return uPtr(dateCtor)->Call(context, uArray::Init<uObject*>(::TYPES[15/*object[]*/], 1, uBox(::g::Uno::Double_typeof(), (double)jsTicks)));
}

// public static Uno.DateTime ConvertDateToDateTime(Fuse.Scripting.Context context, Fuse.Scripting.Object date) [static] :16
::g::Uno::DateTime DateTimeConverterHelpers::ConvertDateToDateTime(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* date)
{
    int64_t jsTicks = (int64_t)uUnbox<double>(::g::Uno::Double_typeof(), uPtr(context)->Wrap(uPtr(date)->CallMethod(context, ::STRINGS[2/*"getTime"*/], uArray::New(::TYPES[15/*object[]*/], 0))));
    int64_t dotNetTicksRelativeToUnixEpoch = jsTicks * 10000LL;
    int64_t dotNetTicks = dotNetTicksRelativeToUnixEpoch + 621355968000000000LL;
    return ::g::Uno::DateTime__New1(dotNetTicks, 1);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ThreadWorker.uno
// -----------------------------------------------------------------------------------

// private sealed class ThreadWorker.ExceptionClosure :133
// {
static void ThreadWorker__ExceptionClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Exception_typeof(), offsetof(ThreadWorker__ExceptionClosure, _exception), 0);
}

uType* ThreadWorker__ExceptionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ThreadWorker__ExceptionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.ThreadWorker.ExceptionClosure", options);
    type->fp_build_ = ThreadWorker__ExceptionClosure_build;
    return type;
}

// public ExceptionClosure(Uno.Exception exception) :137
void ThreadWorker__ExceptionClosure__ctor__fn(ThreadWorker__ExceptionClosure* __this, ::g::Uno::Exception* exception)
{
    __this->ctor_(exception);
}

// public ExceptionClosure New(Uno.Exception exception) :137
void ThreadWorker__ExceptionClosure__New1_fn(::g::Uno::Exception* exception, ThreadWorker__ExceptionClosure** __retval)
{
    *__retval = ThreadWorker__ExceptionClosure::New1(exception);
}

// public void Run() :142
void ThreadWorker__ExceptionClosure__Run_fn(ThreadWorker__ExceptionClosure* __this)
{
    __this->Run();
}

// public ExceptionClosure(Uno.Exception exception) [instance] :137
void ThreadWorker__ExceptionClosure::ctor_(::g::Uno::Exception* exception)
{
    _exception = exception;
}

// public void Run() [instance] :142
void ThreadWorker__ExceptionClosure::Run()
{
    U_THROW(::g::Fuse::WrapException::New4(_exception));
}

// public ExceptionClosure New(Uno.Exception exception) [static] :137
ThreadWorker__ExceptionClosure* ThreadWorker__ExceptionClosure::New1(::g::Uno::Exception* exception)
{
    ThreadWorker__ExceptionClosure* obj1 = (ThreadWorker__ExceptionClosure*)uNew(ThreadWorker__ExceptionClosure_typeof());
    obj1->ctor_(exception);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// private sealed class Observable.Failed :464
// {
static void Observable__Failed_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(Observable__Failed, _message), 0);
}

::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__Failed_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Failed);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::Observable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::Observable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.Observable.Failed", options);
    type->fp_build_ = Observable__Failed_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*, uObject*))Observable__Failed__OnPerform_fn;
    return type;
}

// public Failed(Fuse.Scripting.JavaScript.Observable obs, string message) :468
void Observable__Failed__ctor_1_fn(Observable__Failed* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, uString* message)
{
    __this->ctor_1(obs, message);
}

// public Failed New(Fuse.Scripting.JavaScript.Observable obs, string message) :468
void Observable__Failed__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, uString* message, Observable__Failed** __retval)
{
    *__retval = Observable__Failed::New1(obs, message);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription> sub) :473
void Observable__Failed__OnPerform_fn(Observable__Failed* __this, uObject* sub)
{
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Scripting.JavaScript.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnFailed(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_message);
}

// public Failed(Fuse.Scripting.JavaScript.Observable obs, string message) [instance] :468
void Observable__Failed::ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, uString* message)
{
    ctor_(obs);
    _message = message;
}

// public Failed New(Fuse.Scripting.JavaScript.Observable obs, string message) [static] :468
Observable__Failed* Observable__Failed::New1(::g::Fuse::Scripting::JavaScript::Observable* obs, uString* message)
{
    Observable__Failed* obj1 = (Observable__Failed*)uNew(Observable__Failed_typeof());
    obj1->ctor_1(obs, message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ThreadWorker.uno
// -----------------------------------------------------------------------------------

// internal abstract interface IMirror :10
// {
uInterfaceType* IMirror_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.JavaScript.IMirror", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// private sealed class Observable.InsertAll :646
// {
static void Observable__InsertAll_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__InsertAll, _index), 0,
        ::g::Fuse::Scripting::JavaScript::ArrayMirror_typeof(), offsetof(Observable__InsertAll, _items), 0);
}

::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__InsertAll_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__InsertAll);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::Observable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::Observable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.Observable.InsertAll", options);
    type->fp_build_ = Observable__InsertAll_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*, uObject*))Observable__InsertAll__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*))Observable__InsertAll__Unsubscribe_fn;
    return type;
}

// public InsertAll(Fuse.Scripting.JavaScript.Observable obs, int index, Fuse.Scripting.JavaScript.ArrayMirror items) :651
void Observable__InsertAll__ctor_1_fn(Observable__InsertAll* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, ::g::Fuse::Scripting::JavaScript::ArrayMirror* items)
{
    __this->ctor_1(obs, *index, items);
}

// public InsertAll New(Fuse.Scripting.JavaScript.Observable obs, int index, Fuse.Scripting.JavaScript.ArrayMirror items) :651
void Observable__InsertAll__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, ::g::Fuse::Scripting::JavaScript::ArrayMirror* items, Observable__InsertAll** __retval)
{
    *__retval = Observable__InsertAll::New1(obs, *index, items);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription> sub) :662
void Observable__InsertAll__OnPerform_fn(Observable__InsertAll* __this, uObject* sub)
{
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret3;

    for (int32_t i = 0; i < uPtr(__this->_items)->Length(); i++)
    {
        ::g::Uno::Collections::List__Insert_fn(uPtr(uPtr(__this->Observable())->_values), uCRef<int32_t>(__this->_index + i), uPtr(__this->_items)->Item(i));

        for (int32_t j = 0; j < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Scripting.JavaScript.Observable.Subscription>*/])); ++j)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(j), &ret2), ret2))->ShouldSend(-1))
                ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(j), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index + i, uPtr(__this->_items)->Item(i));
    }
}

// protected override sealed void Unsubscribe() :657
void Observable__InsertAll__Unsubscribe_fn(Observable__InsertAll* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_items);
}

// public InsertAll(Fuse.Scripting.JavaScript.Observable obs, int index, Fuse.Scripting.JavaScript.ArrayMirror items) [instance] :651
void Observable__InsertAll::ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, ::g::Fuse::Scripting::JavaScript::ArrayMirror* items)
{
    ctor_(obs);
    _index = index;
    _items = items;
}

// public InsertAll New(Fuse.Scripting.JavaScript.Observable obs, int index, Fuse.Scripting.JavaScript.ArrayMirror items) [static] :651
Observable__InsertAll* Observable__InsertAll::New1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, ::g::Fuse::Scripting::JavaScript::ArrayMirror* items)
{
    Observable__InsertAll* obj1 = (Observable__InsertAll*)uNew(Observable__InsertAll_typeof());
    obj1->ctor_1(obs, index, items);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// private sealed class Observable.InsertAt :618
// {
static void Observable__InsertAt_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__InsertAt, _index), 0,
        uObject_typeof(), offsetof(Observable__InsertAt, _value), 0);
}

::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__InsertAt_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__InsertAt);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::Observable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::Observable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.Observable.InsertAt", options);
    type->fp_build_ = Observable__InsertAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*, uObject*))Observable__InsertAt__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*))Observable__InsertAt__Unsubscribe_fn;
    return type;
}

// public InsertAt(Fuse.Scripting.JavaScript.Observable obs, int index, object value) :623
void Observable__InsertAt__ctor_1_fn(Observable__InsertAt* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, uObject* value)
{
    __this->ctor_1(obs, *index, value);
}

// public InsertAt New(Fuse.Scripting.JavaScript.Observable obs, int index, object value) :623
void Observable__InsertAt__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, uObject* value, Observable__InsertAt** __retval)
{
    *__retval = Observable__InsertAt::New1(obs, *index, value);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription> sub) :634
void Observable__InsertAt__OnPerform_fn(Observable__InsertAt* __this, uObject* sub)
{
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret3;
    ::g::Uno::Collections::List__Insert_fn(uPtr(uPtr(__this->Observable())->_values), uCRef<int32_t>(__this->_index), __this->_value);

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Scripting.JavaScript.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index, __this->_value);
}

// protected override sealed void Unsubscribe() :629
void Observable__InsertAt__Unsubscribe_fn(Observable__InsertAt* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_value);
}

// public InsertAt(Fuse.Scripting.JavaScript.Observable obs, int index, object value) [instance] :623
void Observable__InsertAt::ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, uObject* value)
{
    ctor_(obs);
    _index = index;
    _value = value;
}

// public InsertAt New(Fuse.Scripting.JavaScript.Observable obs, int index, object value) [static] :623
Observable__InsertAt* Observable__InsertAt::New1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, uObject* value)
{
    Observable__InsertAt* obj1 = (Observable__InsertAt*)uNew(Observable__InsertAt_typeof());
    obj1->ctor_1(obs, index, value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObservable.uno
// ----------------------------------------------------------------------------------------------------

// private sealed class TreeObservable.InsertAtOperation :226
// {
static void TreeObservable__InsertAtOperation_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Scripting::JavaScript::TreeArray_typeof();
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof());
    type->SetFields(3,
        ::g::Uno::Int_typeof(), offsetof(TreeObservable__InsertAtOperation, _index), 0);
}

::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type* TreeObservable__InsertAtOperation_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::TreeObservable__ValueOperation_typeof();
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TreeObservable__InsertAtOperation);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.TreeObservable.InsertAtOperation", options);
    type->fp_build_ = TreeObservable__InsertAtOperation_build;
    type->fp_Perform1 = (void(*)(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation*, uObject*))TreeObservable__InsertAtOperation__Perform1_fn;
    type->fp_get_SpecialArgCount = (void(*)(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation*, int32_t*))TreeObservable__InsertAtOperation__get_SpecialArgCount_fn;
    return type;
}

// public InsertAtOperation(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) :228
void TreeObservable__InsertAtOperation__ctor_2_fn(TreeObservable__InsertAtOperation* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    __this->ctor_2(context, inst, args);
}

// public InsertAtOperation New(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) :228
void TreeObservable__InsertAtOperation__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args, TreeObservable__InsertAtOperation** __retval)
{
    *__retval = TreeObservable__InsertAtOperation::New1(context, inst, args);
}

// protected override sealed void Perform(object dc) :236
void TreeObservable__InsertAtOperation__Perform1_fn(TreeObservable__InsertAtOperation* __this, uObject* dc)
{
    ::g::Fuse::Scripting::JavaScript::TreeArray* arr = uAs< ::g::Fuse::Scripting::JavaScript::TreeArray*>(dc, ::TYPES[3/*Fuse.Scripting.JavaScript.TreeArray*/]);

    if (arr != NULL)
        uPtr(arr)->InsertAt(__this->_index, __this->WrappedValue);
}

// protected override sealed int get_SpecialArgCount() :232
void TreeObservable__InsertAtOperation__get_SpecialArgCount_fn(TreeObservable__InsertAtOperation* __this, int32_t* __retval)
{
    return *__retval = 2, void();
}

// public InsertAtOperation(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) [instance] :228
void TreeObservable__InsertAtOperation::ctor_2(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    ctor_1(context, inst, args);
    _index = ::g::Fuse::Marshal::ToInt(uPtr(Arguments)->Strong<uObject*>(uPtr(Arguments)->Length() - 2));
}

// public InsertAtOperation New(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) [static] :228
TreeObservable__InsertAtOperation* TreeObservable__InsertAtOperation::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    TreeObservable__InsertAtOperation* obj1 = (TreeObservable__InsertAtOperation*)uNew(TreeObservable__InsertAtOperation_typeof());
    obj1->ctor_2(context, inst, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Context.uno
// ------------------------------------------------------------------------------

// public abstract class JSContext :10
// {
// static JSContext() :27
static void JSContext__cctor__fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    ::g::Fuse::Scripting::ScriptClass::Register(::TYPES[29/*object*/], uArray::New(::g::Fuse::Scripting::ScriptMember_typeof()->Array(), 0));
}

static void JSContext_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Properties_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(JSContext_type, interface0),
        ::g::Fuse::Scripting::JavaScript::IMirror_typeof(), offsetof(JSContext_type, interface1));
    type->SetFields(5,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Scripting::ScriptClass_typeof(), ::g::Fuse::Scripting::Function_typeof(), NULL), offsetof(JSContext, _registeredClasses), 0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(JSContext, _classInstanceProperty), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(JSContext, _setSuperclass), 0,
        ::g::Uno::Int_typeof(), offsetof(JSContext, _reflectionDepth), 0,
        ::g::Fuse::Reactive::FuseJS::Builtins_typeof(), offsetof(JSContext, _FuseJS), 0);
}

JSContext_type* JSContext_typeof()
{
    static uSStrong<JSContext_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Context_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(JSContext);
    options.TypeSize = sizeof(JSContext_type);
    type = (JSContext_type*)uClassType::New("Fuse.Scripting.JavaScript.JSContext", options);
    type->fp_build_ = JSContext_build;
    type->fp_cctor_ = JSContext__cctor__fn;
    type->fp_Reflect = (void(*)(::g::Fuse::Scripting::Context*, uObject*, uObject**))JSContext__Reflect_fn;
    type->fp_get_ThreadWorker = (void(*)(::g::Fuse::Scripting::Context*, uObject**))JSContext__get_ThreadWorker_fn;
    type->fp_Unwrap = (void(*)(::g::Fuse::Scripting::Context*, uObject*, uObject**))JSContext__Unwrap_fn;
    type->fp_Wrap = (void(*)(::g::Fuse::Scripting::Context*, uObject*, uObject**))JSContext__Wrap_fn;
    type->interface1.fp_Reflect = (void(*)(uObject*, ::g::Fuse::Scripting::Context*, uObject*, uObject**))JSContext__FuseScriptingJavaScriptIMirrorReflect_fn;
    return type;
}

// protected JSContext() :33
void JSContext__ctor_1_fn(JSContext* __this)
{
    __this->ctor_1();
}

// internal static Fuse.Scripting.JavaScript.JSContext Create() :35
void JSContext__Create_fn(JSContext** __retval)
{
    *__retval = JSContext::Create();
}

// private object CreateMirror(object obj) :99
void JSContext__CreateMirror_fn(JSContext* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->CreateMirror(obj);
}

// private static Uno.UX.NameTable FindRootTable(Uno.UX.NameTable names) :233
void JSContext__FindRootTable_fn(::g::Uno::UX::NameTable* names, ::g::Uno::UX::NameTable** __retval)
{
    *__retval = JSContext::FindRootTable(names);
}

// private object Fuse.Scripting.JavaScript.IMirror.Reflect(Fuse.Scripting.Context context, object obj) :91
void JSContext__FuseScriptingJavaScriptIMirrorReflect_fn(JSContext* __this, ::g::Fuse::Scripting::Context* context, uObject* obj, uObject** __retval)
{
    if (context != __this)
        ::g::Fuse::Diagnostics::InternalError(uString::Const("IMirror.Reflect with inconsistent context"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Context.uno"), 94, uString::Const("Fuse.Scripting.JavaScript.IMirror.Reflect"));

    return *__retval = __this->Reflect(obj), void();
}

// internal generated Fuse.Reactive.FuseJS.Builtins get_FuseJS() :17
void JSContext__get_FuseJS_fn(JSContext* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval)
{
    *__retval = __this->FuseJS();
}

// private generated void set_FuseJS(Fuse.Reactive.FuseJS.Builtins value) :17
void JSContext__set_FuseJS_fn(JSContext* __this, ::g::Fuse::Reactive::FuseJS::Builtins* value)
{
    __this->FuseJS(value);
}

// internal Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) :143
void JSContext__GetClass_fn(JSContext* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->GetClass(sc);
}

// internal Fuse.Scripting.JavaScript.ClassInstance GetClassInstance(object obj, Uno.UX.NameTable rootTable) :211
void JSContext__GetClassInstance_fn(JSContext* __this, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ::g::Fuse::Scripting::JavaScript::ClassInstance** __retval)
{
    *__retval = __this->GetClassInstance(obj, rootTable);
}

// internal Fuse.Scripting.JavaScript.ClassInstance GetClassInstance(Uno.UX.NameTable scope) :203
void JSContext__GetClassInstance1_fn(JSContext* __this, ::g::Uno::UX::NameTable* scope, ::g::Fuse::Scripting::JavaScript::ClassInstance** __retval)
{
    *__retval = __this->GetClassInstance1(scope);
}

// public override sealed object Reflect(object obj) :61
void JSContext__Reflect_fn(JSContext* __this, uObject* obj, uObject** __retval)
{
    ::g::Fuse::Scripting::External* e = uAs< ::g::Fuse::Scripting::External*>(obj, ::TYPES[19/*Fuse.Scripting.External*/]);

    if (e != NULL)
        return *__retval = uPtr(e)->Object, void();

    ::g::Fuse::Scripting::Object* sobj = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[11/*Fuse.Scripting.Object*/]);

    if (sobj != NULL)
    {
        if (uPtr(sobj)->ContainsKey(::STRINGS[36/*"external_ob...*/]))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(::STRINGS[36/*"external_ob...*/]), ::TYPES[19/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return *__retval = uPtr(ext)->Object, void();
        }
    }

    uObject* res = NULL;
    __this->_reflectionDepth++;

    {
        try
        {
            {
                res = __this->CreateMirror(obj);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                __this->_reflectionDepth--;
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            __this->_reflectionDepth--;
        }
        __after_finally_1:;
    }

    return *__retval = res, void();
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) :154
void JSContext__RegisterClass_fn(JSContext* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->RegisterClass(sc);
}

// public override sealed Fuse.Scripting.IThreadWorker get_ThreadWorker() :21
void JSContext__get_ThreadWorker_fn(JSContext* __this, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::JavaScript::Worker_, void();
}

// public override sealed object Unwrap(object obj) :56
void JSContext__Unwrap_fn(JSContext* __this, uObject* obj, uObject** __retval)
{
    return *__retval = ::g::Fuse::Scripting::JavaScript::TypeWrapper::Unwrap(__this, obj), void();
}

// public override sealed object Wrap(object obj) :51
void JSContext__Wrap_fn(JSContext* __this, uObject* obj, uObject** __retval)
{
    return *__retval = ::g::Fuse::Scripting::JavaScript::TypeWrapper::Wrap(__this, obj), void();
}

// protected JSContext() [instance] :33
void JSContext::ctor_1()
{
    _registeredClasses = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Scripting::ScriptClass_typeof(), ::TYPES[16/*Fuse.Scripting.Function*/], NULL)));
    _classInstanceProperty = ::g::Fuse::Properties::CreateHandle();
    ctor_();
}

// private object CreateMirror(object obj) [instance] :99
uObject* JSContext::CreateMirror(uObject* obj)
{
    if (_reflectionDepth > 50)
    {
        ::g::Fuse::Diagnostics::UserWarning(uString::Const("JavaScript data model contains circular references or is too deep. Some data may not display correctly."), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Context.uno"), 103, uString::Const("CreateMirror"));
        return NULL;
    }

    ::g::Fuse::Scripting::Array* a = uAs< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[20/*Fuse.Scripting.Array*/]);

    if (a != NULL)
        return ::g::Fuse::Scripting::JavaScript::ArrayMirror::New2(this, (uObject*)this, a);

    ::g::Fuse::Scripting::Function* f = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[16/*Fuse.Scripting.Function*/]);

    if (f != NULL)
        return ::g::Fuse::Scripting::FunctionMirror::New2(f);

    ::g::Fuse::Scripting::Object* o = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[11/*Fuse.Scripting.Object*/]);

    if (o != NULL)
    {
        if (uPtr(o)->InstanceOf(this, uPtr(FuseJS())->Observable))
            return ::g::Fuse::Scripting::JavaScript::Observable::New1(this, uCast< ::g::Fuse::Scripting::JavaScript::ThreadWorker*>(ThreadWorker(), ::g::Fuse::Scripting::JavaScript::ThreadWorker_typeof()), o, false);
        else if (uPtr(o)->InstanceOf(this, uPtr(FuseJS())->Date))
            return uBox(::TYPES[61/*Uno.DateTime*/], ::g::Fuse::Scripting::JavaScript::DateTimeConverterHelpers::ConvertDateToDateTime(this, o));
        else if (uPtr(o)->InstanceOf(this, uPtr(FuseJS())->TreeObservable))
            return ::g::Fuse::Scripting::JavaScript::TreeObservable::New4(this, o);
        else
            return ::g::Fuse::Scripting::JavaScript::ObjectMirror::New1(this, (uObject*)this, o);
    }

    return obj;
}

// internal generated Fuse.Reactive.FuseJS.Builtins get_FuseJS() [instance] :17
::g::Fuse::Reactive::FuseJS::Builtins* JSContext::FuseJS()
{
    return _FuseJS;
}

// private generated void set_FuseJS(Fuse.Reactive.FuseJS.Builtins value) [instance] :17
void JSContext::FuseJS(::g::Fuse::Reactive::FuseJS::Builtins* value)
{
    _FuseJS = value;
}

// internal Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) [instance] :143
::g::Fuse::Scripting::Function* JSContext::GetClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    bool ret1;
    ::g::Fuse::Scripting::Function* cl;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_registeredClasses), sc, (void**)(&cl), &ret1), ret1))
    {
        cl = RegisterClass(sc);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_registeredClasses), sc, cl);
    }

    return cl;
}

// internal Fuse.Scripting.JavaScript.ClassInstance GetClassInstance(object obj, Uno.UX.NameTable rootTable) [instance] :211
::g::Fuse::Scripting::JavaScript::ClassInstance* JSContext::GetClassInstance(uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    uObject* n = uAs<uObject*>(obj, ::g::Fuse::IProperties_typeof());

    if (n != NULL)
    {
        ::g::Fuse::Scripting::JavaScript::ClassInstance* ni = uAs< ::g::Fuse::Scripting::JavaScript::ClassInstance*>(uPtr(::g::Fuse::IProperties::Properties(uInterface(uPtr(n), ::g::Fuse::IProperties_typeof())))->Get(_classInstanceProperty), ::g::Fuse::Scripting::JavaScript::ClassInstance_typeof());

        if (ni == NULL)
        {
            ni = ::g::Fuse::Scripting::JavaScript::ClassInstance::New1(uCast< ::g::Fuse::Scripting::JavaScript::ThreadWorker*>(ThreadWorker(), ::g::Fuse::Scripting::JavaScript::ThreadWorker_typeof()), obj, rootTable);
            uPtr(::g::Fuse::IProperties::Properties(uInterface(uPtr(n), ::g::Fuse::IProperties_typeof())))->Set(_classInstanceProperty, ni);
        }

        return ni;
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Cannot use object of type '"), ::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(uPtr(uPtr(rootTable)->This()))))), uString::Const("' as 'this' in JavaScript module; must be 'IProperties' or 'App'"))));
}

// internal Fuse.Scripting.JavaScript.ClassInstance GetClassInstance(Uno.UX.NameTable scope) [instance] :203
::g::Fuse::Scripting::JavaScript::ClassInstance* JSContext::GetClassInstance1(::g::Uno::UX::NameTable* scope)
{
    ::g::Uno::UX::NameTable* rootTable = JSContext::FindRootTable(scope);
    return GetClassInstance(uPtr(rootTable)->This(), rootTable);
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) [instance] :154
::g::Fuse::Scripting::Function* JSContext::RegisterClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    ::g::Fuse::Scripting::Function* cl = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(uPtr(sc)->Type())), uString::Const(" (ScriptClass)")), uString::Const("(function(external_object) { this.external_object = external_object; })")), ::TYPES[16/*Fuse.Scripting.Function*/]);

    if (sc->SuperType() != NULL)
    {
        ::g::Fuse::Scripting::Function* super = GetClass(uPtr(sc)->SuperType());

        if (_setSuperclass == NULL)
            _setSuperclass = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(uString::Const("(set-superclass)"), uString::Const("(function(cl, superclass) { cl.prototype = new superclass(); cl.prototype.constructor = cl; })")), ::TYPES[16/*Fuse.Scripting.Function*/]);

        uPtr(_setSuperclass)->Call(this, uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, cl, super));
    }

    for (int32_t i = 0; i < uPtr(sc->Members())->Length(); i++)
    {
        ::g::Fuse::Scripting::ScriptMethodInline* inlineMethod = uAs< ::g::Fuse::Scripting::ScriptMethodInline*>(uPtr(uPtr(sc)->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::g::Fuse::Scripting::ScriptMethodInline_typeof());

        if (inlineMethod != NULL)
        {
            ::g::Fuse::Scripting::Function* m = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(uPtr(sc)->Type())), uString::Const(".")), uPtr(inlineMethod)->Name), ::STRINGS[4/*" (ScriptMet...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("(function(cl, Observable) { cl.prototype."), uPtr(inlineMethod)->Name), uString::Const(" = ")), uPtr(inlineMethod)->Code), uString::Const("; })"))), ::TYPES[16/*Fuse.Scripting.Function*/]);
            uPtr(m)->Call(this, uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, cl, (::g::Fuse::Scripting::Function*)uPtr(FuseJS())->Observable));
            continue;
        }

        ::g::Fuse::Scripting::ScriptMethod* method = uAs< ::g::Fuse::Scripting::ScriptMethod*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::g::Fuse::Scripting::ScriptMethod_typeof());

        if (method != NULL)
        {
            JSContext__MethodClosure::New1(this, cl, method);
            continue;
        }

        ::g::Fuse::Scripting::ScriptProperty* property = uAs< ::g::Fuse::Scripting::ScriptProperty*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::g::Fuse::Scripting::ScriptProperty_typeof());

        if (property != NULL)
        {
            JSContext__PropertyClosure::New1(this, cl, property);
            continue;
        }

        ::g::Fuse::Scripting::ScriptReadonlyProperty* readonlyProperty = uAs< ::g::Fuse::Scripting::ScriptReadonlyProperty*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::g::Fuse::Scripting::ScriptReadonlyProperty_typeof());

        if (readonlyProperty != NULL)
        {
            JSContext__ReadonlyPropertyClosure::New1(this, cl, readonlyProperty);
            continue;
        }
    }

    return cl;
}

// internal static Fuse.Scripting.JavaScript.JSContext Create() [static] :35
JSContext* JSContext::Create()
{
    JSContext_typeof()->Init();
    JSContext* result;
    result = ::g::Fuse::Scripting::JavaScriptCore::Context::New1();
    result->FuseJS(::g::Fuse::Reactive::FuseJS::Builtins::New1(result));
    return result;
}

// private static Uno.UX.NameTable FindRootTable(Uno.UX.NameTable names) [static] :233
::g::Uno::UX::NameTable* JSContext::FindRootTable(::g::Uno::UX::NameTable* names)
{
    JSContext_typeof()->Init();
    ::g::Uno::UX::NameTable* nt = names;

    while (nt != NULL)
    {
        if (uPtr(nt)->This() != NULL)
            return nt;

        nt = uPtr(nt)->ParentTable;
    }

    U_THROW(::g::Uno::Exception::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObject.uno
// ------------------------------------------------------------------------------------------------

// private sealed class TreeObject.PropertySubscription.JSThreadSet :27
// {
static void TreeObject__PropertySubscription__JSThreadSet_build(uType* type)
{
    ::STRINGS[3] = uString::Const("__fuse_requestChange");
    ::TYPES[16] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[15] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(TreeObject__PropertySubscription__JSThreadSet, _obj), 0,
        ::g::Uno::String_typeof(), offsetof(TreeObject__PropertySubscription__JSThreadSet, _key), 0,
        uObject_typeof(), offsetof(TreeObject__PropertySubscription__JSThreadSet, _value), 0);
}

uType* TreeObject__PropertySubscription__JSThreadSet_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TreeObject__PropertySubscription__JSThreadSet);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.TreeObject.PropertySubscription.JSThreadSet", options);
    type->fp_build_ = TreeObject__PropertySubscription__JSThreadSet_build;
    return type;
}

// public JSThreadSet(Fuse.Scripting.Object obj, string key, object value) :32
void TreeObject__PropertySubscription__JSThreadSet__ctor__fn(TreeObject__PropertySubscription__JSThreadSet* __this, ::g::Fuse::Scripting::Object* obj, uString* key, uObject* value)
{
    __this->ctor_(obj, key, value);
}

// public JSThreadSet New(Fuse.Scripting.Object obj, string key, object value) :32
void TreeObject__PropertySubscription__JSThreadSet__New1_fn(::g::Fuse::Scripting::Object* obj, uString* key, uObject* value, TreeObject__PropertySubscription__JSThreadSet** __retval)
{
    *__retval = TreeObject__PropertySubscription__JSThreadSet::New1(obj, key, value);
}

// public void Perform(Fuse.Scripting.Context context) :38
void TreeObject__PropertySubscription__JSThreadSet__Perform_fn(TreeObject__PropertySubscription__JSThreadSet* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Perform(context);
}

// public JSThreadSet(Fuse.Scripting.Object obj, string key, object value) [instance] :32
void TreeObject__PropertySubscription__JSThreadSet::ctor_(::g::Fuse::Scripting::Object* obj, uString* key, uObject* value)
{
    _obj = obj;
    _key = key;
    _value = value;
}

// public void Perform(Fuse.Scripting.Context context) [instance] :38
void TreeObject__PropertySubscription__JSThreadSet::Perform(::g::Fuse::Scripting::Context* context)
{
    uObject* val = uPtr(context)->Unwrap(_value);

    if (uPtr(_obj)->ContainsKey(::STRINGS[3/*"__fuse_requ...*/]))
        uPtr(uCast< ::g::Fuse::Scripting::Function*>(uPtr(_obj)->Item(::STRINGS[3/*"__fuse_requ...*/]), ::TYPES[16/*Fuse.Scripting.Function*/]))->Call(context, uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, (uString*)_key, val));
    else
        uPtr(_obj)->Item(_key, val);
}

// public JSThreadSet New(Fuse.Scripting.Object obj, string key, object value) [static] :32
TreeObject__PropertySubscription__JSThreadSet* TreeObject__PropertySubscription__JSThreadSet::New1(::g::Fuse::Scripting::Object* obj, uString* key, uObject* value)
{
    TreeObject__PropertySubscription__JSThreadSet* obj1 = (TreeObject__PropertySubscription__JSThreadSet*)uNew(TreeObject__PropertySubscription__JSThreadSet_typeof());
    obj1->ctor_(obj, key, value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ObservableProperty.uno
// -----------------------------------------------------------------------------------------

// internal sealed class LazyObservableProperty :7
// {
static void LazyObservableProperty_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[18] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Scripting::JavaScript::ObservableProperty_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Scripting::JavaScript::ObservableProperty_type, interface1));
    type->SetFields(5);
}

::g::Fuse::Scripting::JavaScript::ObservableProperty_type* LazyObservableProperty_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::ObservableProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::ObservableProperty_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LazyObservableProperty);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::ObservableProperty_type);
    type = (::g::Fuse::Scripting::JavaScript::ObservableProperty_type*)uClassType::New("Fuse.Scripting.JavaScript.LazyObservableProperty", options);
    type->fp_build_ = LazyObservableProperty_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Scripting::JavaScript::ObservableProperty__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Scripting::JavaScript::ObservableProperty__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))::g::Fuse::Scripting::JavaScript::ObservableProperty__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Scripting::JavaScript::ObservableProperty__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Scripting::JavaScript::ObservableProperty__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Scripting::JavaScript::ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))::g::Fuse::Scripting::JavaScript::ObservableProperty__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Scripting::JavaScript::ObservableProperty__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Scripting::JavaScript::ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public LazyObservableProperty(Fuse.Scripting.JavaScript.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p, Fuse.Scripting.Context c) :9
void LazyObservableProperty__ctor_1_fn(LazyObservableProperty* __this, ::g::Fuse::Scripting::JavaScript::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Context* c)
{
    __this->ctor_1(w, obj, p, c);
}

// private object Get(Fuse.Scripting.Context context, object[] args) :14
void LazyObservableProperty__Get_fn(LazyObservableProperty* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Get(context, args);
}

// public LazyObservableProperty New(Fuse.Scripting.JavaScript.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p, Fuse.Scripting.Context c) :9
void LazyObservableProperty__New2_fn(::g::Fuse::Scripting::JavaScript::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Context* c, LazyObservableProperty** __retval)
{
    *__retval = LazyObservableProperty::New2(w, obj, p, c);
}

// public LazyObservableProperty(Fuse.Scripting.JavaScript.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p, Fuse.Scripting.Context c) [instance] :9
void LazyObservableProperty::ctor_1(::g::Fuse::Scripting::JavaScript::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Context* c)
{
    ctor_(w, obj, p);
    uPtr(c)->ObjectDefineProperty(obj, uPtr(p)->Name().ToString(::TYPES[17/*Uno.UX.Selector*/]), uDelegate::New(::TYPES[18/*Fuse.Scripting.Callback*/], (void*)LazyObservableProperty__Get_fn, this), NULL, false, false);
}

// private object Get(Fuse.Scripting.Context context, object[] args) [instance] :14
uObject* LazyObservableProperty::Get(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return uPtr(context)->Unwrap(GetObservable(context));
}

// public LazyObservableProperty New(Fuse.Scripting.JavaScript.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p, Fuse.Scripting.Context c) [static] :9
LazyObservableProperty* LazyObservableProperty::New2(::g::Fuse::Scripting::JavaScript::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Context* c)
{
    LazyObservableProperty* obj1 = (LazyObservableProperty*)uNew(LazyObservableProperty_typeof());
    obj1->ctor_1(w, obj, p, c);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Context.uno
// ------------------------------------------------------------------------------

// private sealed class JSContext.MethodClosure :305
// {
// static generated MethodClosure() :305
static void JSContext__MethodClosure__cctor__fn(uType* __type)
{
    JSContext__MethodClosure::_emptyArgs_ = uArray::New(::TYPES[15/*object[]*/], 0);
}

static void JSContext__MethodClosure_build(uType* type)
{
    ::STRINGS[4] = uString::Const(" (ScriptMethod)");
    ::STRINGS[5] = uString::Const("(function (cl, callback) { cl.prototype.");
    ::STRINGS[6] = uString::Const(" = function() { return callback(this.external_object, Array.prototype.slice.call(arguments)); }})");
    ::TYPES[15] = uObject_typeof()->Array();
    ::TYPES[16] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[18] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[20] = ::g::Fuse::Scripting::Array_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::ScriptMethod_typeof(), offsetof(JSContext__MethodClosure, _m), 0,
        ::TYPES[15/*object[]*/], (uintptr_t)&JSContext__MethodClosure::_emptyArgs_, uFieldFlagsStatic);
}

uType* JSContext__MethodClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(JSContext__MethodClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.JSContext.MethodClosure", options);
    type->fp_build_ = JSContext__MethodClosure_build;
    type->fp_cctor_ = JSContext__MethodClosure__cctor__fn;
    return type;
}

// public MethodClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m) :308
void JSContext__MethodClosure__ctor__fn(JSContext__MethodClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m)
{
    __this->ctor_(context, cl, m);
}

// private object Callback(Fuse.Scripting.Context context, object[] args) :320
void JSContext__MethodClosure__Callback_fn(JSContext__MethodClosure* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Callback(context, args);
}

// private static object[] CopyArgs(Fuse.Scripting.Context context, Fuse.Scripting.Array args) :328
void JSContext__MethodClosure__CopyArgs_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Array* args, uArray** __retval)
{
    *__retval = JSContext__MethodClosure::CopyArgs(context, args);
}

// public MethodClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m) :308
void JSContext__MethodClosure__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, JSContext__MethodClosure** __retval)
{
    *__retval = JSContext__MethodClosure::New1(context, cl, m);
}

uSStrong<uArray*> JSContext__MethodClosure::_emptyArgs_;

// public MethodClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m) [instance] :308
void JSContext__MethodClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m)
{
    _m = m;
    ::g::Fuse::Scripting::Function* factory = uCast< ::g::Fuse::Scripting::Function*>(uPtr(context)->Evaluate(::g::Uno::String::op_Addition2(uPtr(m)->Name, ::STRINGS[4/*" (ScriptMet...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[5/*"(function (...*/], uPtr(m)->Name), ::STRINGS[6/*" = function...*/])), ::TYPES[16/*Fuse.Scripting.Function*/]);
    uPtr(factory)->Call(context, uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, cl, uDelegate::New(::TYPES[18/*Fuse.Scripting.Callback*/], (void*)JSContext__MethodClosure__Callback_fn, this)));
}

// private object Callback(Fuse.Scripting.Context context, object[] args) [instance] :320
uObject* JSContext__MethodClosure::Callback(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uObject* self = uPtr(uCast< ::g::Fuse::Scripting::External*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[19/*Fuse.Scripting.External*/]))->Object;
    uArray* realArgs = JSContext__MethodClosure::CopyArgs(context, uCast< ::g::Fuse::Scripting::Array*>(args->Strong<uObject*>(1), ::TYPES[20/*Fuse.Scripting.Array*/]));
    uObject* res = uPtr(context)->Unwrap(uPtr(_m)->Call(context, self, realArgs));
    return res;
}

// private static object[] CopyArgs(Fuse.Scripting.Context context, Fuse.Scripting.Array args) [static] :328
uArray* JSContext__MethodClosure::CopyArgs(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Array* args)
{
    JSContext__MethodClosure_typeof()->Init();
    uArray* res = uArray::New(::TYPES[15/*object[]*/], uPtr(args)->Length());

    for (int32_t i = 0; i < res->Length(); i++)
        uPtr(res)->Strong<uObject*>(i) = uPtr(context)->Wrap(uPtr(args)->Item(i));

    return res;
}

// public MethodClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m) [static] :308
JSContext__MethodClosure* JSContext__MethodClosure::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m)
{
    JSContext__MethodClosure* obj1 = (JSContext__MethodClosure*)uNew(JSContext__MethodClosure_typeof());
    obj1->ctor_(context, cl, m);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ModuleInstance.uno
// -------------------------------------------------------------------------------------

// internal sealed class ModuleInstance :7
// {
// static generated ModuleInstance() :7
static void ModuleInstance__cctor__fn(uType* __type)
{
    ModuleInstance::_resetHookMutex_ = ::g::Uno::Object::New();
}

static void ModuleInstance_build(uType* type)
{
    ::TYPES[21] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::JavaScript__Dependency_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::JavaScript__Dependency_typeof(), NULL);
    ::TYPES[24] = ::g::Fuse::Scripting::IThreadWorker_typeof();
    ::TYPES[9] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), NULL);
    ::TYPES[25] = ::g::Fuse::Scripting::JavaScript::JSContext_typeof();
    ::TYPES[26] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Scripting::Dependency_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Collections::Dictionary__KeyCollection__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Action_typeof();
    ::TYPES[29] = uObject_typeof();
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof(),
        ::g::Fuse::Scripting::ScriptModule_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(1,
        ::TYPES[24/*Fuse.Scripting.IThreadWorker*/], offsetof(ModuleInstance, _worker), 0,
        ::g::Fuse::Reactive::JavaScript_typeof(), offsetof(ModuleInstance, _js), 0,
        ::TYPES[21/*Uno.Collections.Dictionary<string, object>*/], offsetof(ModuleInstance, _deps), 0,
        ::TYPES[29/*object*/], offsetof(ModuleInstance, _dc), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(ModuleInstance, _moduleResult), 0,
        ::g::Fuse::Scripting::DiagnosticSubject_typeof(), offsetof(ModuleInstance, _diagnostic1), 0,
        ::TYPES[29/*object*/], (uintptr_t)&ModuleInstance::_resetHookMutex_, uFieldFlagsStatic);
}

uType* ModuleInstance_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::DiagnosticSubject_typeof();
    options.FieldCount = 8;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(ModuleInstance);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.ModuleInstance", options);
    type->fp_build_ = ModuleInstance_build;
    type->fp_cctor_ = ModuleInstance__cctor__fn;
    return type;
}

// public ModuleInstance(Fuse.Scripting.IThreadWorker worker, Fuse.Reactive.JavaScript js) :14
void ModuleInstance__ctor_1_fn(ModuleInstance* __this, uObject* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    __this->ctor_1(worker, js);
}

// public void Dispose() :77
void ModuleInstance__Dispose_fn(ModuleInstance* __this)
{
    __this->Dispose();
}

// private void Evaluate(Fuse.Scripting.Context context) :25
void ModuleInstance__Evaluate_fn(ModuleInstance* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Evaluate(context);
}

// private void EvaluateModule(Fuse.Scripting.Context context) :92
void ModuleInstance__EvaluateModule_fn(ModuleInstance* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->EvaluateModule(context);
}

// public ModuleInstance New(Fuse.Scripting.IThreadWorker worker, Fuse.Reactive.JavaScript js) :14
void ModuleInstance__New2_fn(uObject* worker, ::g::Fuse::Reactive::JavaScript* js, ModuleInstance** __retval)
{
    *__retval = ModuleInstance::New2(worker, js);
}

// internal bool ReflectExports() :66
void ModuleInstance__ReflectExports_fn(ModuleInstance* __this, bool* __retval)
{
    *__retval = __this->ReflectExports();
}

// private void ReflectExportsJS(Fuse.Scripting.Context context) :50
void ModuleInstance__ReflectExportsJS_fn(ModuleInstance* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ReflectExportsJS(context);
}

// private void SetDataContext() :60
void ModuleInstance__SetDataContext_fn(ModuleInstance* __this)
{
    __this->SetDataContext();
}

uSStrong<uObject*> ModuleInstance::_resetHookMutex_;

// public ModuleInstance(Fuse.Scripting.IThreadWorker worker, Fuse.Reactive.JavaScript js) [instance] :14
void ModuleInstance::ctor_1(uObject* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    ::g::Fuse::Reactive::JavaScript__Dependency* ret5;
    ::g::Fuse::Reactive::JavaScript__Dependency* ret6;
    _deps = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[21/*Uno.Collections.Dictionary<string, object>*/]));
    _diagnostic1 = ::g::Fuse::Scripting::DiagnosticSubject::New1();
    ctor_();

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(js)->Dependencies()), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Reactive.JavaScript.Dependency>*/])); i++)
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_deps), uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(js)->Dependencies()), ::TYPES[23/*Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency>*/]), uCRef<int32_t>(i), &ret5), ret5))->Name(), uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(js)->Dependencies()), ::TYPES[23/*Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency>*/]), uCRef<int32_t>(i), &ret6), ret6))->Value);

    _js = js;
    _worker = worker;
    ::g::Fuse::Scripting::IThreadWorker::Invoke1(uInterface(uPtr(_worker), ::TYPES[24/*Fuse.Scripting.IThreadWorker*/]), uDelegate::New(::TYPES[9/*Uno.Action<Fuse.Scripting.Context>*/], (void*)ModuleInstance__Evaluate_fn, this));
}

// public void Dispose() [instance] :77
void ModuleInstance::Dispose()
{
    ClearDiagnostic();

    if (_moduleResult != NULL)
    {
        uPtr(_moduleResult)->Dispose();
        _moduleResult = NULL;
    }
}

// private void Evaluate(Fuse.Scripting.Context context) [instance] :25
void ModuleInstance::Evaluate(::g::Fuse::Scripting::Context* context)
{
    ::g::Fuse::Scripting::Dependency collection2;
    ::g::Fuse::Scripting::Dependency collection3;
    ::g::Uno::Collections::Dictionary__KeyCollection__Enumerator<uStrong<uString*> > ret7;
    uObject* ret8;
    uObject* ret9;
    ::g::Fuse::Scripting::JavaScript::JSContext* ctx = uCast< ::g::Fuse::Scripting::JavaScript::JSContext*>(context, ::TYPES[25/*Fuse.Scripting.JavaScript.JSContext*/]);
    ::g::Uno::Collections::Dictionary* deps = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[26/*Uno.Collections.Dictionary<string, Fuse.Scripting.Dependency>*/]);
    ::g::Uno::Collections::Dictionary__KeyCollection__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::Dictionary__KeyCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__KeyCollection*)uPtr(_deps)->Keys()), &ret7), ret7);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[27/*Uno.Collections.Dictionary<string, object>.KeyCollection.Enumerator*/]))
                {
                    uString* key = enum1.Current(::TYPES[27/*Uno.Collections.Dictionary<string, object>.KeyCollection.Enumerator*/]);
                    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(deps), key, uCRef((collection2 = uDefault< ::g::Fuse::Scripting::Dependency>(), collection2.Type = 0, collection2.Value = uPtr(ctx)->Unwrap((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_deps), key, &ret8), ret8)), collection2)));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[27/*Uno.Collections.Dictionary<string, object>.KeyCollection.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            enum1.Dispose(::TYPES[27/*Uno.Collections.Dictionary<string, object>.KeyCollection.Enumerator*/]);
        }
        __after_finally_2:;
    }

    ::g::Uno::UX::NameTable* nt = uPtr(_js)->_nameTable;

    while (nt != NULL)
    {
        for (int32_t i = 0; i < uPtr(uPtr(nt)->Entries)->Length(); ++i)
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(deps), uPtr(uPtr(nt)->Entries)->Strong<uString*>(i), uCRef((collection3 = uDefault< ::g::Fuse::Scripting::Dependency>(), collection3.Type = 1, collection3.Value = uPtr(ctx)->Unwrap((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(nt)->Objects()), ::TYPES[28/*Uno.Collections.IList<object>*/]), uCRef<int32_t>(i), &ret9), ret9)), collection3)));

        nt = uPtr(nt)->ParentTable;
    }

    uPtr(uPtr(_js)->ScriptModule())->Dependencies = deps;
    EvaluateModule(context);
    ReflectExportsJS(context);
}

// private void EvaluateModule(Fuse.Scripting.Context context) [instance] :92
void ModuleInstance::EvaluateModule(::g::Fuse::Scripting::Context* context)
{
    ::g::Fuse::Scripting::Context* ctx = context;
    uPtr(_diagnostic1)->ClearDiagnostic();
    uString* globalId = ::g::Uno::UX::Resource::GetGlobalKey(this);
    ::g::Uno::Threading::Monitor::Enter(ModuleInstance::_resetHookMutex_);

    {
        try
        {
            {
                ::g::Fuse::Scripting::ModuleResult* newModuleResult = uPtr(uPtr(_js)->ScriptModule())->Evaluate1(ctx, globalId);
                uPtr(newModuleResult)->AddDependency(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)::g::Fuse::Reactive::JavaScript__DispatchEvaluate_fn, uPtr(_js)));

                if (newModuleResult->Error() == NULL)
                    _moduleResult = newModuleResult;
                else
                {
                    ::g::Fuse::Scripting::ScriptException* se = uPtr(newModuleResult)->Error();

                    if (!::g::Uno::String::Contains(uPtr(uPtr(se)->Message()), ::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage()))
                        uPtr(_diagnostic1)->SetDiagnostic(se);

                    newModuleResult->Dispose();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(ModuleInstance::_resetHookMutex_);
            }
                        throw __t;
            goto __after_finally_3;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(ModuleInstance::_resetHookMutex_);
        }
        __after_finally_3:;
    }
}

// internal bool ReflectExports() [instance] :66
bool ModuleInstance::ReflectExports()
{
    if (_moduleResult == NULL)
        return false;

    ::g::Fuse::Scripting::IThreadWorker::Invoke1(uInterface(uPtr(_worker), ::TYPES[24/*Fuse.Scripting.IThreadWorker*/]), uDelegate::New(::TYPES[9/*Uno.Action<Fuse.Scripting.Context>*/], (void*)ModuleInstance__ReflectExportsJS_fn, this));
    return true;
}

// private void ReflectExportsJS(Fuse.Scripting.Context context) [instance] :50
void ModuleInstance::ReflectExportsJS(::g::Fuse::Scripting::Context* context)
{
    _dc = uPtr(uCast< ::g::Fuse::Scripting::JavaScript::JSContext*>(context, ::TYPES[25/*Fuse.Scripting.JavaScript.JSContext*/]))->Reflect((_moduleResult == NULL) ? uCast<uObject*>(NULL, ::TYPES[29/*object*/]) : (uObject*)uPtr(_moduleResult)->GetExports(context));
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)ModuleInstance__SetDataContext_fn, this));
}

// private void SetDataContext() [instance] :60
void ModuleInstance::SetDataContext()
{
    if (_moduleResult != NULL)
        uPtr(_js)->SetDataContext(_dc);
}

// public ModuleInstance New(Fuse.Scripting.IThreadWorker worker, Fuse.Reactive.JavaScript js) [static] :14
ModuleInstance* ModuleInstance::New2(uObject* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    ModuleInstance* obj4 = (ModuleInstance*)uNew(ModuleInstance_typeof());
    obj4->ctor_1(worker, js);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// private sealed class Observable.NewAll :516
// {
static void Observable__NewAll_build(uType* type)
{
    ::TYPES[30] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Fuse::Scripting::JavaScript::ArrayMirror_typeof(), offsetof(Observable__NewAll, _newValues), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__NewAll, _origin), 0);
}

::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__NewAll_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__NewAll);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::Observable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::Observable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.Observable.NewAll", options);
    type->fp_build_ = Observable__NewAll_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*, uObject*))Observable__NewAll__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*))Observable__NewAll__Unsubscribe_fn;
    return type;
}

// public NewAll(Fuse.Scripting.JavaScript.Observable obs, Fuse.Scripting.JavaScript.ArrayMirror newValues, int origin) :521
void Observable__NewAll__ctor_1_fn(Observable__NewAll* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, ::g::Fuse::Scripting::JavaScript::ArrayMirror* newValues, int32_t* origin)
{
    __this->ctor_1(obs, newValues, *origin);
}

// public NewAll New(Fuse.Scripting.JavaScript.Observable obs, Fuse.Scripting.JavaScript.ArrayMirror newValues, int origin) :521
void Observable__NewAll__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, ::g::Fuse::Scripting::JavaScript::ArrayMirror* newValues, int32_t* origin, Observable__NewAll** __retval)
{
    *__retval = Observable__NewAll::New1(obs, newValues, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription> sub) :532
void Observable__NewAll__OnPerform_fn(Observable__NewAll* __this, uObject* sub)
{
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();
    uPtr(uPtr(__this->Observable())->_values)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[30/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<object>*/], uPtr(__this->_newValues)->ItemsReadonly())));

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Scripting.JavaScript.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), (uObject*)__this->_newValues);
}

// protected override sealed void Unsubscribe() :527
void Observable__NewAll__Unsubscribe_fn(Observable__NewAll* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_newValues);
}

// public NewAll(Fuse.Scripting.JavaScript.Observable obs, Fuse.Scripting.JavaScript.ArrayMirror newValues, int origin) [instance] :521
void Observable__NewAll::ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, ::g::Fuse::Scripting::JavaScript::ArrayMirror* newValues, int32_t origin)
{
    ctor_(obs);
    _newValues = newValues;
    _origin = origin;
}

// public NewAll New(Fuse.Scripting.JavaScript.Observable obs, Fuse.Scripting.JavaScript.ArrayMirror newValues, int origin) [static] :521
Observable__NewAll* Observable__NewAll::New1(::g::Fuse::Scripting::JavaScript::Observable* obs, ::g::Fuse::Scripting::JavaScript::ArrayMirror* newValues, int32_t origin)
{
    Observable__NewAll* obj1 = (Observable__NewAll*)uNew(Observable__NewAll_typeof());
    obj1->ctor_1(obs, newValues, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// private sealed class Observable.NewAt :486
// {
static void Observable__NewAt_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__NewAt, _index), 0,
        uObject_typeof(), offsetof(Observable__NewAt, _value), 0);
}

::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__NewAt_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__NewAt);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::Observable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::Observable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.Observable.NewAt", options);
    type->fp_build_ = Observable__NewAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*, uObject*))Observable__NewAt__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*))Observable__NewAt__Unsubscribe_fn;
    return type;
}

// public NewAt(Fuse.Scripting.JavaScript.Observable obs, int index, object newValue) :491
void Observable__NewAt__ctor_1_fn(Observable__NewAt* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, uObject* newValue)
{
    __this->ctor_1(obs, *index, newValue);
}

// public NewAt New(Fuse.Scripting.JavaScript.Observable obs, int index, object newValue) :491
void Observable__NewAt__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, uObject* newValue, Observable__NewAt** __retval)
{
    *__retval = Observable__NewAt::New1(obs, *index, newValue);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription> sub) :503
void Observable__NewAt__OnPerform_fn(Observable__NewAt* __this, uObject* sub)
{
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret3;
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
    uPtr(__this->Observable())->SetValue(__this->_index, __this->_value);

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Scripting.JavaScript.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnNewAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index, __this->_value);
}

// protected override sealed void Unsubscribe() :497
void Observable__NewAt__Unsubscribe_fn(Observable__NewAt* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_value);
}

// public NewAt(Fuse.Scripting.JavaScript.Observable obs, int index, object newValue) [instance] :491
void Observable__NewAt::ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, uObject* newValue)
{
    ctor_(obs);
    _index = index;
    _value = newValue;
}

// public NewAt New(Fuse.Scripting.JavaScript.Observable obs, int index, object newValue) [static] :491
Observable__NewAt* Observable__NewAt::New1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, uObject* newValue)
{
    Observable__NewAt* obj1 = (Observable__NewAt*)uNew(Observable__NewAt_typeof());
    obj1->ctor_1(obs, index, newValue);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ObjectMirror.uno
// -----------------------------------------------------------------------------------

// internal class ObjectMirror :6
// {
static void ObjectMirror_build(uType* type)
{
    ::TYPES[21] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Scripting::JavaScript::IMirror_typeof();
    ::TYPES[31] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Scripting::ValueMirror_typeof();
    ::TYPES[32] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[33] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(6/*ToArray<string>*/, ::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Scripting::IRaw_typeof(), offsetof(ObjectMirror_type, interface0),
        ::g::Fuse::IObject_typeof(), offsetof(ObjectMirror_type, interface1));
    type->SetFields(2,
        ::TYPES[21/*Uno.Collections.Dictionary<string, object>*/], offsetof(ObjectMirror, _props), 0,
        ::g::Uno::Bool_typeof(), offsetof(ObjectMirror, _hasUnsubscribed), 0);
}

ObjectMirror_type* ObjectMirror_typeof()
{
    static uSStrong<ObjectMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ValueMirror_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ObjectMirror);
    options.TypeSize = sizeof(ObjectMirror_type);
    type = (ObjectMirror_type*)uClassType::New("Fuse.Scripting.JavaScript.ObjectMirror", options);
    type->fp_build_ = ObjectMirror_build;
    type->fp_Set = ObjectMirror__Set_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::ValueMirror*))ObjectMirror__Unsubscribe_fn;
    type->interface1.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))ObjectMirror__ContainsKey_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, uString*, uObject**))ObjectMirror__get_Item_fn;
    type->interface1.fp_get_Keys = (void(*)(uObject*, uArray**))ObjectMirror__get_Keys_fn;
    type->interface0.fp_get_ReflectedRaw = (void(*)(uObject*, uObject**))::g::Fuse::Scripting::ValueMirror__get_ReflectedRaw_fn;
    return type;
}

// internal ObjectMirror(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.IMirror mirror, Fuse.Scripting.Object obj) :13
void ObjectMirror__ctor_2_fn(ObjectMirror* __this, ::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_2(context, mirror, obj);
}

// protected ObjectMirror(Fuse.Scripting.Object obj) :11
void ObjectMirror__ctor_3_fn(ObjectMirror* __this, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_3(obj);
}

// public bool ContainsKey(string key) :42
void ObjectMirror__ContainsKey_fn(ObjectMirror* __this, uString* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// public object get_Item(string key) :49
void ObjectMirror__get_Item_fn(ObjectMirror* __this, uString* key, uObject** __retval)
{
    *__retval = __this->Item(key);
}

// public string[] get_Keys() :54
void ObjectMirror__get_Keys_fn(ObjectMirror* __this, uArray** __retval)
{
    *__retval = __this->Keys();
}

// internal ObjectMirror New(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.IMirror mirror, Fuse.Scripting.Object obj) :13
void ObjectMirror__New1_fn(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Object* obj, ObjectMirror** __retval)
{
    *__retval = ObjectMirror::New1(context, mirror, obj);
}

// internal virtual void Set(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.IMirror mirror, Fuse.Scripting.Object obj) :18
void ObjectMirror__Set_fn(ObjectMirror* __this, ::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Object* obj)
{
    uPtr(__this->_props)->Clear();
    uArray* k = uPtr(obj)->Keys();

    for (int32_t i = 0; i < uPtr(k)->Length(); i++)
    {
        uString* s = uPtr(k)->Strong<uString*>(i);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(__this->_props), s, ::g::Fuse::Scripting::JavaScript::IMirror::Reflect(uInterface(uPtr(mirror), ::TYPES[5/*Fuse.Scripting.JavaScript.IMirror*/]), context, uPtr(obj)->Item(s)));
    }
}

// public override void Unsubscribe() :30
void ObjectMirror__Unsubscribe_fn(ObjectMirror* __this)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret5;

    if (__this->_hasUnsubscribed)
        return;

    __this->_hasUnsubscribed = true;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_props), &ret5), ret5);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[31/*Uno.Collections.Dictionary<string, object>.Enumerator*/]))
                {
                    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > p = enum1.Current(::TYPES[31/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
                    ::g::Fuse::Scripting::ValueMirror* d = uAs< ::g::Fuse::Scripting::ValueMirror*>(p.Value(::TYPES[32/*Uno.Collections.KeyValuePair<string, object>*/]), ::TYPES[6/*Fuse.Scripting.ValueMirror*/]);

                    if (d != NULL)
                        uPtr(d)->Unsubscribe();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[31/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_4;
        }

        {
            enum1.Dispose(::TYPES[31/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
        }
        __after_finally_4:;
    }
}

// internal ObjectMirror(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.IMirror mirror, Fuse.Scripting.Object obj) [instance] :13
void ObjectMirror::ctor_2(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Object* obj)
{
    _props = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[21/*Uno.Collections.Dictionary<string, object>*/]));
    ctor_1(obj);
    Set(context, mirror, obj);
}

// protected ObjectMirror(Fuse.Scripting.Object obj) [instance] :11
void ObjectMirror::ctor_3(::g::Fuse::Scripting::Object* obj)
{
    _props = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[21/*Uno.Collections.Dictionary<string, object>*/]));
    ctor_1(obj);
}

// public bool ContainsKey(string key) [instance] :42
bool ObjectMirror::ContainsKey(uString* key)
{
    bool ret4;
    return (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_props), key, &ret4), ret4);
}

// public object get_Item(string key) [instance] :49
uObject* ObjectMirror::Item(uString* key)
{
    uObject* ret6;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_props), key, &ret6), ret6);
}

// public string[] get_Keys() [instance] :54
uArray* ObjectMirror::Keys()
{
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[33/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)((::g::Uno::Collections::Dictionary__KeyCollection*)uPtr(_props)->Keys()));
}

// internal ObjectMirror New(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.IMirror mirror, Fuse.Scripting.Object obj) [static] :13
ObjectMirror* ObjectMirror::New1(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Object* obj)
{
    ObjectMirror* obj3 = (ObjectMirror*)uNew(ObjectMirror_typeof());
    obj3->ctor_2(context, mirror, obj);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// internal sealed class Observable :6
// {
static void Observable_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IRaw_typeof(), offsetof(Observable_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(Observable_type, interface1),
        ::g::Fuse::Reactive::IObservable_typeof(), offsetof(Observable_type, interface2),
        ::g::Fuse::Reactive::IObservableArray_typeof(), offsetof(Observable_type, interface3));
    type->SetFields(2,
        ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), offsetof(Observable, _values), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(Observable__Subscription_typeof(), NULL), offsetof(Observable, _observers), 0,
        ::g::Uno::Bool_typeof(), offsetof(Observable, _usingObservers), 0,
        ::g::Fuse::Scripting::IThreadWorker_typeof(), offsetof(Observable, _worker), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(Observable, _observable), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(Observable, _observeChange), 0,
        ::g::Uno::Bool_typeof(), offsetof(Observable, _isUnsubscribed), 0);
}

Observable_type* Observable_typeof()
{
    static uSStrong<Observable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ListMirror_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Observable);
    options.TypeSize = sizeof(Observable_type);
    type = (Observable_type*)uClassType::New("Fuse.Scripting.JavaScript.Observable", options);
    type->fp_build_ = Observable_build;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::ListMirror*, int32_t*, uObject**))Observable__get_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::ListMirror*, int32_t*))Observable__get_Length_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::ValueMirror*))Observable__Unsubscribe_fn;
    type->interface3.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))Observable__FuseReactiveIObservableArraySubscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int32_t*))Observable__get_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))Observable__get_Item_fn;
    type->interface0.fp_get_ReflectedRaw = (void(*)(uObject*, uObject**))::g::Fuse::Scripting::ValueMirror__get_ReflectedRaw_fn;
    return type;
}

// internal Observable(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.ThreadWorker worker, Fuse.Scripting.Object obj, bool suppressCallback) :255
void Observable__ctor_3_fn(Observable* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool* suppressCallback)
{
    __this->ctor_3(context, worker, obj, *suppressCallback);
}

// internal static Fuse.Scripting.JavaScript.Observable Create(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.ThreadWorker worker) :263
void Observable__Create_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, Observable** __retval)
{
    *__retval = Observable::Create(context, worker);
}

// private Uno.IDisposable Fuse.Reactive.IObservableArray.Subscribe(Fuse.Reactive.IObserver observer) :243
void Observable__FuseReactiveIObservableArraySubscribe_fn(Observable* __this, uObject* observer, uObject** __retval)
{
    return *__retval = __this->Subscribe(observer), void();
}

// public bool get_IsUnsubscribed() :334
void Observable__get_IsUnsubscribed_fn(Observable* __this, bool* __retval)
{
    *__retval = __this->IsUnsubscribed();
}

// public override sealed object get_Item(int index) :13
void Observable__get_Item_fn(Observable* __this, int32_t* index, uObject** __retval)
{
    uObject* ret4;
    int32_t index_ = *index;
    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_values), uCRef<int32_t>(index_), &ret4), ret4), void();
}

// public override sealed int get_Length() :9
void Observable__get_Length_fn(Observable* __this, int32_t* __retval)
{
    return *__retval = uPtr(__this->_values)->Count(), void();
}

// internal Observable New(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.ThreadWorker worker, Fuse.Scripting.Object obj, bool suppressCallback) :255
void Observable__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool* suppressCallback, Observable** __retval)
{
    *__retval = Observable::New1(context, worker, obj, *suppressCallback);
}

// internal Fuse.Scripting.Object get_Object() :251
void Observable__get_Object_fn(Observable* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Object();
}

// private object ObserveChange(Fuse.Scripting.Context context, object[] args) :278
void Observable__ObserveChange_fn(Observable* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ObserveChange(context, args);
}

// private void ObserversCleanup() :25
void Observable__ObserversCleanup_fn(Observable* __this)
{
    __this->ObserversCleanup();
}

// private void RemoveSubscriber(Fuse.Scripting.Context context) :357
void Observable__RemoveSubscriber_fn(Observable* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->RemoveSubscriber(context);
}

// public void SetValue(int index, object value) :17
void Observable__SetValue_fn(Observable* __this, int32_t* index, uObject* value)
{
    __this->SetValue(*index, value);
}

// public Fuse.Reactive.ISubscription Subscribe(Fuse.Reactive.IObserver observer) :233
void Observable__Subscribe_fn(Observable* __this, uObject* observer, uObject** __retval)
{
    *__retval = __this->Subscribe(observer);
}

// internal Fuse.Scripting.JavaScript.Observable.Subscription SubscribeInternal(Fuse.Reactive.IObserver observer) :238
void Observable__SubscribeInternal_fn(Observable* __this, uObject* observer, Observable__Subscription** __retval)
{
    *__retval = __this->SubscribeInternal(observer);
}

// private int ToInt(object obj) :269
void Observable__ToInt_fn(Observable* __this, uObject* obj, int32_t* __retval)
{
    *__retval = __this->ToInt(obj);
}

// public override sealed void Unsubscribe() :337
void Observable__Unsubscribe_fn(Observable* __this)
{
    __this->UnsubscribeValues();

    if (!__this->_isUnsubscribed)
    {
        __this->_isUnsubscribed = true;
        ::g::Fuse::Scripting::IThreadWorker::Invoke1(uInterface(uPtr(__this->_worker), ::TYPES[24/*Fuse.Scripting.IThreadWorker*/]), uDelegate::New(::TYPES[9/*Uno.Action<Fuse.Scripting.Context>*/], (void*)Observable__RemoveSubscriber_fn, __this));
    }
}

// private void UnsubscribeValues() :348
void Observable__UnsubscribeValues_fn(Observable* __this)
{
    __this->UnsubscribeValues();
}

// internal Observable(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.ThreadWorker worker, Fuse.Scripting.Object obj, bool suppressCallback) [instance] :255
void Observable::ctor_3(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool suppressCallback)
{
    _values = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<object>*/]));
    _observers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(Observable__Subscription_typeof(), NULL)));
    ctor_2(obj);
    _worker = (uObject*)worker;
    _observable = obj;
    _observeChange = uPtr(context)->CallbackToFunction(uDelegate::New(::TYPES[18/*Fuse.Scripting.Callback*/], (void*)Observable__ObserveChange_fn, this));
    uPtr(obj)->CallMethod(context, uString::Const("addSubscriber"), uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, (::g::Fuse::Scripting::Function*)_observeChange, uBox(::g::Uno::Bool_typeof(), suppressCallback)));
}

// public bool get_IsUnsubscribed() [instance] :334
bool Observable::IsUnsubscribed()
{
    return _isUnsubscribed;
}

// internal Fuse.Scripting.Object get_Object() [instance] :251
::g::Fuse::Scripting::Object* Observable::Object()
{
    return _observable;
}

// private object ObserveChange(Fuse.Scripting.Context context, object[] args) [instance] :278
uObject* Observable::ObserveChange(::g::Fuse::Scripting::Context* context, uArray* args)
{
    ::g::Fuse::Scripting::JavaScript::JSContext* ctx = uCast< ::g::Fuse::Scripting::JavaScript::JSContext*>(context, ::TYPES[25/*Fuse.Scripting.JavaScript.JSContext*/]);
    uString* op = uAs<uString*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[53/*string*/]);
    int32_t origin = ToInt(args->Strong<uObject*>(2));

    if (::g::Uno::String::op_Equality(op, uString::Const("set")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__Set::New1(this, uPtr(ctx)->Reflect(uPtr(args)->Strong<uObject*>(3)), origin)));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[1/*"clear"*/]))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__Clear::New1(this, origin)));
    else if (::g::Uno::String::op_Equality(op, uString::Const("newAt")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__NewAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uPtr(ctx)->Reflect(uPtr(args)->Strong<uObject*>(4)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("newAll")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__NewAll::New1(this, uCast< ::g::Fuse::Scripting::JavaScript::ArrayMirror*>(uPtr(ctx)->Reflect(uPtr(args)->Strong<uObject*>(3)), ::g::Fuse::Scripting::JavaScript::ArrayMirror_typeof()), origin)));
    else if (::g::Uno::String::op_Equality(op, uString::Const("add")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__Add::New1(this, uPtr(ctx)->Reflect(uPtr(args)->Strong<uObject*>(3)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("removeAt")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__RemoveAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("insertAt")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__InsertAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uPtr(ctx)->Reflect(uPtr(args)->Strong<uObject*>(4)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("removeRange")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__RemoveRange::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), ToInt(uPtr(args)->Strong<uObject*>(4)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("insertAll")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__InsertAll::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uCast< ::g::Fuse::Scripting::JavaScript::ArrayMirror*>(uPtr(ctx)->Reflect(uPtr(args)->Strong<uObject*>(4)), ::g::Fuse::Scripting::JavaScript::ArrayMirror_typeof()))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("failed")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__Failed::New1(this, uAs<uString*>(uPtr(args)->Strong<uObject*>(3), ::TYPES[53/*string*/]))));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(uString::Const("Unhandled observable operation: "), op)));

    return NULL;
}

// private void ObserversCleanup() [instance] :25
void Observable::ObserversCleanup()
{
    Observable__Subscription* ret2;

    if (_usingObservers)
        return;

    for (int32_t i = uPtr(_observers)->Count() - 1; i >= 0; --i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observers), uCRef<int32_t>(i), &ret2), ret2))->Removed())
            uPtr(_observers)->RemoveAt(i);
}

// private void RemoveSubscriber(Fuse.Scripting.Context context) [instance] :357
void Observable::RemoveSubscriber(::g::Fuse::Scripting::Context* context)
{
    uPtr(_observable)->CallMethod(context, uString::Const("removeSubscriber"), uArray::Init<uObject*>(::TYPES[15/*object[]*/], 1, (::g::Fuse::Scripting::Function*)_observeChange));
    _observeChange = NULL;
    _observable = NULL;
}

// public void SetValue(int index, object value) [instance] :17
void Observable::SetValue(int32_t index, uObject* value)
{
    ::g::Uno::Collections::List__set_Item_fn(uPtr(_values), uCRef<int32_t>(index), value);
}

// public Fuse.Reactive.ISubscription Subscribe(Fuse.Reactive.IObserver observer) [instance] :233
uObject* Observable::Subscribe(uObject* observer)
{
    return (uObject*)SubscribeInternal(observer);
}

// internal Fuse.Scripting.JavaScript.Observable.Subscription SubscribeInternal(Fuse.Reactive.IObserver observer) [instance] :238
Observable__Subscription* Observable::SubscribeInternal(uObject* observer)
{
    return Observable__Subscription::New2(this, observer);
}

// private int ToInt(object obj) [instance] :269
int32_t Observable::ToInt(uObject* obj)
{
    if (uIs(obj, ::TYPES[63/*int*/]))
        return uUnbox<int32_t>(::TYPES[63/*int*/], obj);

    if (uIs(obj, ::g::Uno::Double_typeof()))
        return (int32_t)uUnbox<double>(::g::Uno::Double_typeof(), obj);

    return -1;
}

// private void UnsubscribeValues() [instance] :348
void Observable::UnsubscribeValues()
{
    uObject* ret3;

    for (int32_t i = 0; i < uPtr(_values)->Count(); i++)
    {
        ::g::Fuse::Scripting::ValueMirror* vm = uAs< ::g::Fuse::Scripting::ValueMirror*>((::g::Uno::Collections::List__get_Item_fn(uPtr(_values), uCRef<int32_t>(i), &ret3), ret3), ::TYPES[6/*Fuse.Scripting.ValueMirror*/]);

        if (vm != NULL)
            uPtr(vm)->Unsubscribe();
    }
}

// internal static Fuse.Scripting.JavaScript.Observable Create(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.ThreadWorker worker) [static] :263
Observable* Observable::Create(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker)
{
    ::g::Fuse::Scripting::JavaScript::JSContext* jsContext = uCast< ::g::Fuse::Scripting::JavaScript::JSContext*>(context, ::TYPES[25/*Fuse.Scripting.JavaScript.JSContext*/]);
    return Observable::New1(context, worker, uCast< ::g::Fuse::Scripting::Object*>(uPtr(uPtr(uPtr(jsContext)->FuseJS())->Observable)->Call(context, uArray::New(::TYPES[15/*object[]*/], 0)), ::TYPES[11/*Fuse.Scripting.Object*/]), true);
}

// internal Observable New(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.ThreadWorker worker, Fuse.Scripting.Object obj, bool suppressCallback) [static] :255
Observable* Observable::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool suppressCallback)
{
    Observable* obj1 = (Observable*)uNew(Observable_typeof());
    obj1->ctor_3(context, worker, obj, suppressCallback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ObservableProperty.uno
// -----------------------------------------------------------------------------------------

// internal class ObservableProperty :26
// {
static void ObservableProperty_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(ObservableProperty_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(ObservableProperty_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScript::ThreadWorker_typeof(), offsetof(ObservableProperty, _worker), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(ObservableProperty, _property), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(ObservableProperty, _obj), 0,
        ::g::Fuse::Scripting::JavaScript::Observable_typeof(), offsetof(ObservableProperty, _observable), 0,
        ::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), offsetof(ObservableProperty, _subscription), 0);
}

ObservableProperty_type* ObservableProperty_typeof()
{
    static uSStrong<ObservableProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ObservableProperty);
    options.TypeSize = sizeof(ObservableProperty_type);
    type = (ObservableProperty_type*)uClassType::New("Fuse.Scripting.JavaScript.ObservableProperty", options);
    type->fp_build_ = ObservableProperty_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))ObservableProperty__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))ObservableProperty__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))ObservableProperty__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))ObservableProperty__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public ObservableProperty(Fuse.Scripting.JavaScript.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :32
void ObservableProperty__ctor__fn(ObservableProperty* __this, ::g::Fuse::Scripting::JavaScript::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    __this->ctor_(w, obj, p);
}

// private object DefaultValueCallback(Fuse.Scripting.Context context, object[] args) :56
void ObservableProperty__DefaultValueCallback_fn(ObservableProperty* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DefaultValueCallback(context, args);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :183
void ObservableProperty__FuseReactiveIObserverOnAdd_fn(ObservableProperty* __this, uObject* addedValue)
{
}

// private void Fuse.Reactive.IObserver.OnClear() :165
void ObservableProperty__FuseReactiveIObserverOnClear_fn(ObservableProperty* __this)
{
    if (::g::Uno::Type::IsClass(uPtr(uPtr(__this->_property)->PropertyType())))
        uPtr(__this->_property)->SetAsObject1(NULL, (uObject*)__this);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :195
void ObservableProperty__FuseReactiveIObserverOnFailed_fn(ObservableProperty* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :191
void ObservableProperty__FuseReactiveIObserverOnInsertAt_fn(ObservableProperty* __this, int32_t* index, uObject* value)
{
    int32_t index_ = *index;

    if (index_ == 0)
        __this->Set(value);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :171
void ObservableProperty__FuseReactiveIObserverOnNewAll_fn(ObservableProperty* __this, uObject* values)
{
    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[35/*Fuse.IArray*/])) == 1)
        __this->Set(::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[35/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue) :175
void ObservableProperty__FuseReactiveIObserverOnNewAt_fn(ObservableProperty* __this, int32_t* index, uObject* newValue)
{
    int32_t index_ = *index;

    if (index_ == 0)
        __this->Set(newValue);
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :187
void ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn(ObservableProperty* __this, int32_t* index)
{
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :179
void ObservableProperty__FuseReactiveIObserverOnSet_fn(ObservableProperty* __this, uObject* newValue)
{
    __this->Set(newValue);
}

// internal Fuse.Scripting.JavaScript.Observable GetObservable(Fuse.Scripting.Context context) :44
void ObservableProperty__GetObservable_fn(ObservableProperty* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::Observable** __retval)
{
    *__retval = __this->GetObservable(context);
}

// public ObservableProperty New(Fuse.Scripting.JavaScript.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :32
void ObservableProperty__New1_fn(::g::Fuse::Scripting::JavaScript::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ObservableProperty** __retval)
{
    *__retval = ObservableProperty::New1(w, obj, p);
}

// private void PushValue(Fuse.Scripting.Context context, object val) :237
void ObservableProperty__PushValue_fn(ObservableProperty* __this, ::g::Fuse::Scripting::Context* context, uObject* val)
{
    __this->PushValue(context, val);
}

// private void PushValueOnJSThread(object value) :215
void ObservableProperty__PushValueOnJSThread_fn(ObservableProperty* __this, uObject* value)
{
    __this->PushValueOnJSThread(value);
}

// public void Reset() :149
void ObservableProperty__Reset_fn(ObservableProperty* __this)
{
    __this->Reset();
}

// private void Set(object value) :200
void ObservableProperty__Set_fn(ObservableProperty* __this, uObject* value)
{
    __this->Set(value);
}

// private void Subscribe(Fuse.Scripting.Context context) :142
void ObservableProperty__Subscribe_fn(ObservableProperty* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Subscribe(context);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :207
void ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(ObservableProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Inequality(prop_, uPtr(__this->_property)->Name()))
        return;

    if (obj != uPtr(__this->_property)->Object())
        return;

    if (__this->_subscription == NULL)
        return;

    __this->PushValueOnJSThread(uPtr(__this->_property)->GetAsObject1());
}

// public ObservableProperty(Fuse.Scripting.JavaScript.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [instance] :32
void ObservableProperty::ctor_(::g::Fuse::Scripting::JavaScript::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    _obj = obj;
    _worker = w;
    _property = p;
}

// private object DefaultValueCallback(Fuse.Scripting.Context context, object[] args) [instance] :56
uObject* ObservableProperty::DefaultValueCallback(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uObject* value = uPtr(args)->Strong<uObject*>(0);
    uObject* marshalledValue;

    if (!::g::Fuse::Marshal::TryConvertTo(uPtr(_property)->PropertyType(), value, &marshalledValue, NULL))
        return NULL;

    ObservableProperty__ResolveDefaultValueClosure* resolveClosure = ObservableProperty__ResolveDefaultValueClosure::New1(this, marshalledValue);
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)ObservableProperty__ResolveDefaultValueClosure__Perform_fn, resolveClosure));
    return NULL;
}

// internal Fuse.Scripting.JavaScript.Observable GetObservable(Fuse.Scripting.Context context) [instance] :44
::g::Fuse::Scripting::JavaScript::Observable* ObservableProperty::GetObservable(::g::Fuse::Scripting::Context* context)
{
    if (_observable == NULL)
    {
        _observable = ::g::Fuse::Scripting::JavaScript::Observable::Create(context, _worker);
        uPtr(uPtr(_observable)->Object())->Item(uString::Const("_defaultValueCallback"), uDelegate::New(::TYPES[18/*Fuse.Scripting.Callback*/], (void*)ObservableProperty__DefaultValueCallback_fn, this));
        Subscribe(context);
    }

    return _observable;
}

// private void PushValue(Fuse.Scripting.Context context, object val) [instance] :237
void ObservableProperty::PushValue(::g::Fuse::Scripting::Context* context, uObject* val)
{
    if (_subscription == NULL)
        return;

    if (val != NULL)
        uPtr(_subscription)->SetExclusive(context, val);
    else
        uPtr(_subscription)->ClearExclusive(context);
}

// private void PushValueOnJSThread(object value) [instance] :215
void ObservableProperty::PushValueOnJSThread(uObject* value)
{
    uPtr(_worker)->Invoke1(uDelegate::New(::TYPES[9/*Uno.Action<Fuse.Scripting.Context>*/], (void*)ObservableProperty__PushCapture__Run_fn, ObservableProperty__PushCapture::New1(uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::TYPES[29/*object*/], NULL), (void*)ObservableProperty__PushValue_fn, this), value)));
}

// public void Reset() [instance] :149
void ObservableProperty::Reset()
{
    if (_subscription != NULL)
    {
        uPtr(_subscription)->Dispose();
        _subscription = NULL;
        uPtr(_property)->RemoveListener((uObject*)this);
    }

    if (_observable != NULL)
    {
        uPtr(_observable)->Unsubscribe();
        _observable = NULL;
    }
}

// private void Set(object value) [instance] :200
void ObservableProperty::Set(uObject* value)
{
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(_property)->PropertyType(), value, &res, this))
        uPtr(_property)->SetAsObject1(res, (uObject*)this);
}

// private void Subscribe(Fuse.Scripting.Context context) [instance] :142
void ObservableProperty::Subscribe(::g::Fuse::Scripting::Context* context)
{
    _subscription = uPtr(_observable)->SubscribeInternal((uObject*)this);
    PushValue(context, uPtr(_property)->GetAsObject1());
    uPtr(_property)->AddListener((uObject*)this);
}

// public ObservableProperty New(Fuse.Scripting.JavaScript.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [static] :32
ObservableProperty* ObservableProperty::New1(::g::Fuse::Scripting::JavaScript::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    ObservableProperty* obj1 = (ObservableProperty*)uNew(ObservableProperty_typeof());
    obj1->ctor_(w, obj, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// public abstract class Observable.Operation :364
// {
static void Observable__Operation_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScript::Observable_typeof(), offsetof(Observable__Operation, _observable), 0,
        ::g::Uno::Bool_typeof(), offsetof(Observable__Operation, _isPerformed), 0);
}

Observable__Operation_type* Observable__Operation_typeof()
{
    static uSStrong<Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Observable__Operation);
    options.TypeSize = sizeof(Observable__Operation_type);
    type = (Observable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.Observable.Operation", options);
    type->fp_build_ = Observable__Operation_build;
    type->fp_Unsubscribe = Observable__Operation__Unsubscribe_fn;
    return type;
}

// protected Operation(Fuse.Scripting.JavaScript.Observable observable) :370
void Observable__Operation__ctor__fn(Observable__Operation* __this, ::g::Fuse::Scripting::JavaScript::Observable* observable)
{
    __this->ctor_(observable);
}

// protected Fuse.Scripting.JavaScript.Observable get_Observable() :375
void Observable__Operation__get_Observable_fn(Observable__Operation* __this, ::g::Fuse::Scripting::JavaScript::Observable** __retval)
{
    *__retval = __this->Observable();
}

// public void Perform() :377
void Observable__Operation__Perform_fn(Observable__Operation* __this)
{
    __this->Perform();
}

// protected virtual void Unsubscribe() :399
void Observable__Operation__Unsubscribe_fn(Observable__Operation* __this)
{
}

// protected Operation(Fuse.Scripting.JavaScript.Observable observable) [instance] :370
void Observable__Operation::ctor_(::g::Fuse::Scripting::JavaScript::Observable* observable)
{
    _observable = observable;
}

// protected Fuse.Scripting.JavaScript.Observable get_Observable() [instance] :375
::g::Fuse::Scripting::JavaScript::Observable* Observable__Operation::Observable()
{
    return _observable;
}

// public void Perform() [instance] :377
void Observable__Operation::Perform()
{
    if (uPtr(_observable)->IsUnsubscribed())
    {
        Unsubscribe();
        return;
    }

    {
        try
        {
            {
                uPtr(_observable)->_usingObservers = true;
                OnPerform((uObject*)uPtr(Observable())->_observers);
                uPtr(_observable)->ObserversCleanup();
            }
        }

        catch (const uThrowable& __t)
        {
            {
                uPtr(_observable)->_usingObservers = false;
            }
                        throw __t;
            goto __after_finally_5;
        }

        {
            uPtr(_observable)->_usingObservers = false;
        }
        __after_finally_5:;
    }

    _isPerformed = true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObservable.uno
// ----------------------------------------------------------------------------------------------------

// private abstract class TreeObservable.Operation :115
// {
static void TreeObservable__Operation_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScript::TreeObservable_typeof(), offsetof(TreeObservable__Operation, TreeObservable), 0,
        uObject_typeof()->Array(), offsetof(TreeObservable__Operation, Arguments), 0);
}

TreeObservable__Operation_type* TreeObservable__Operation_typeof()
{
    static uSStrong<TreeObservable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TreeObservable__Operation);
    options.TypeSize = sizeof(TreeObservable__Operation_type);
    type = (TreeObservable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.TreeObservable.Operation", options);
    type->fp_build_ = TreeObservable__Operation_build;
    return type;
}

// protected Operation(Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) :119
void TreeObservable__Operation__ctor__fn(TreeObservable__Operation* __this, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    __this->ctor_(inst, args);
}

// public void Perform(Fuse.Scripting.Context context) :125
void TreeObservable__Operation__Perform_fn(TreeObservable__Operation* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Perform(context);
}

// private void Perform(object dc, int pos) :157
void TreeObservable__Operation__Perform2_fn(TreeObservable__Operation* __this, uObject* dc, int32_t* pos)
{
    __this->Perform2(dc, *pos);
}

// protected Operation(Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) [instance] :119
void TreeObservable__Operation::ctor_(::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    Arguments = args;
    TreeObservable = inst;
}

// public void Perform(Fuse.Scripting.Context context) [instance] :125
void TreeObservable__Operation::Perform(::g::Fuse::Scripting::Context* context)
{
    if ((uPtr(Arguments)->Length() - SpecialArgCount()) < 0)
    {
        uPtr(TreeObservable)->Set(context, (uObject*)TreeObservable, uCast< ::g::Fuse::Scripting::Object*>(uPtr(Arguments)->Strong<uObject*>(0), ::TYPES[11/*Fuse.Scripting.Object*/]));
        return;
    }

    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)TreeObservable__Operation__PerformClosure__Perform_fn, TreeObservable__Operation__PerformClosure::New1(this, TreeObservable)));
}

// private void Perform(object dc, int pos) [instance] :157
void TreeObservable__Operation::Perform2(uObject* dc, int32_t pos)
{
    if (pos == (uPtr(Arguments)->Length() - SpecialArgCount()))
    {
        Perform1(dc);
        return;
    }

    ::g::Fuse::Scripting::JavaScript::TreeObject* obj = uAs< ::g::Fuse::Scripting::JavaScript::TreeObject*>(dc, ::TYPES[52/*Fuse.Scripting.JavaScript.TreeObject*/]);

    if (obj != NULL)
    {
        uString* key = ::g::Uno::Object::ToString(uPtr(uPtr(Arguments)->Strong<uObject*>(pos)));
        Perform2(uPtr(obj)->Item(key), pos + 1);
        return;
    }

    ::g::Fuse::Scripting::JavaScript::TreeArray* arr = uAs< ::g::Fuse::Scripting::JavaScript::TreeArray*>(dc, ::TYPES[3/*Fuse.Scripting.JavaScript.TreeArray*/]);

    if (arr != NULL)
    {
        int32_t index = ::g::Fuse::Marshal::ToInt(uPtr(Arguments)->Strong<uObject*>(pos));
        Perform2(uPtr(arr)->Item(index), pos + 1);
        return;
    }

    U_THROW(::g::Fuse::Scripting::Error::New4(uString::Const("Unable to update data context. Path doesn't match exports")));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObservable.uno
// ----------------------------------------------------------------------------------------------------

// private sealed class TreeObservable.Operation.PerformClosure :140
// {
static void TreeObservable__Operation__PerformClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_typeof(), offsetof(TreeObservable__Operation__PerformClosure, _operation), 0,
        uObject_typeof(), offsetof(TreeObservable__Operation__PerformClosure, _dc), 0);
}

uType* TreeObservable__Operation__PerformClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TreeObservable__Operation__PerformClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.TreeObservable.Operation.PerformClosure", options);
    type->fp_build_ = TreeObservable__Operation__PerformClosure_build;
    return type;
}

// public PerformClosure(Fuse.Scripting.JavaScript.TreeObservable.Operation operation, object dc) :145
void TreeObservable__Operation__PerformClosure__ctor__fn(TreeObservable__Operation__PerformClosure* __this, ::g::Fuse::Scripting::JavaScript::TreeObservable__Operation* operation, uObject* dc)
{
    __this->ctor_(operation, dc);
}

// public PerformClosure New(Fuse.Scripting.JavaScript.TreeObservable.Operation operation, object dc) :145
void TreeObservable__Operation__PerformClosure__New1_fn(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation* operation, uObject* dc, TreeObservable__Operation__PerformClosure** __retval)
{
    *__retval = TreeObservable__Operation__PerformClosure::New1(operation, dc);
}

// public void Perform() :151
void TreeObservable__Operation__PerformClosure__Perform_fn(TreeObservable__Operation__PerformClosure* __this)
{
    __this->Perform();
}

// public PerformClosure(Fuse.Scripting.JavaScript.TreeObservable.Operation operation, object dc) [instance] :145
void TreeObservable__Operation__PerformClosure::ctor_(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation* operation, uObject* dc)
{
    _operation = operation;
    _dc = dc;
}

// public void Perform() [instance] :151
void TreeObservable__Operation__PerformClosure::Perform()
{
    uPtr(_operation)->Perform2(_dc, 0);
}

// public PerformClosure New(Fuse.Scripting.JavaScript.TreeObservable.Operation operation, object dc) [static] :145
TreeObservable__Operation__PerformClosure* TreeObservable__Operation__PerformClosure::New1(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation* operation, uObject* dc)
{
    TreeObservable__Operation__PerformClosure* obj1 = (TreeObservable__Operation__PerformClosure*)uNew(TreeObservable__Operation__PerformClosure_typeof());
    obj1->ctor_(operation, dc);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Context.uno
// ------------------------------------------------------------------------------

// private sealed class JSContext.PropertyClosure :266
// {
static void JSContext__PropertyClosure_build(uType* type)
{
    ::STRINGS[7] = uString::Const("this._raw_");
    ::STRINGS[8] = uString::Const("this._");
    ::STRINGS[9] = uString::Const(" (ScriptProperty)");
    ::STRINGS[10] = uString::Const("(function(cl, getObservable) { Object.defineProperty(cl.prototype, '");
    ::STRINGS[11] = uString::Const("', ");
    ::STRINGS[12] = uString::Const("{");
    ::STRINGS[13] = uString::Const("get: function() { ");
    ::STRINGS[14] = uString::Const("var obs = getObservable(this); ");
    ::STRINGS[15] = uString::Const("if (");
    ::STRINGS[16] = uString::Const(" != obs) {");
    ::STRINGS[17] = uString::Const(" = obs;");
    ::STRINGS[18] = uString::Const(" = obs");
    ::STRINGS[19] = uString::Const(";");
    ::STRINGS[20] = uString::Const("}");
    ::STRINGS[21] = uString::Const("return ");
    ::STRINGS[22] = uString::Const("})");
    ::TYPES[16] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[15] = uObject_typeof()->Array();
    ::TYPES[18] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[34] = ::g::Uno::UX::PropertyObject_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::JavaScript::JSContext_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::ScriptProperty_typeof(), offsetof(JSContext__PropertyClosure, _p), 0);
}

uType* JSContext__PropertyClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(JSContext__PropertyClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.JSContext.PropertyClosure", options);
    type->fp_build_ = JSContext__PropertyClosure_build;
    return type;
}

// public PropertyClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p) :270
void JSContext__PropertyClosure__ctor__fn(JSContext__PropertyClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p)
{
    __this->ctor_(context, cl, p);
}

// private object GetObservable(Fuse.Scripting.Context context, object[] args) :297
void JSContext__PropertyClosure__GetObservable_fn(JSContext__PropertyClosure* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->GetObservable(context, args);
}

// public PropertyClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p) :270
void JSContext__PropertyClosure__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, JSContext__PropertyClosure** __retval)
{
    *__retval = JSContext__PropertyClosure::New1(context, cl, p);
}

// public PropertyClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p) [instance] :270
void JSContext__PropertyClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p)
{
    _p = p;
    uString* rawField = ::g::Uno::String::op_Addition2(::STRINGS[7/*"this._raw_"*/], uPtr(p)->Name);
    uString* propField = ::g::Uno::String::op_Addition2(::STRINGS[8/*"this._"*/], p->Name);
    ::g::Fuse::Scripting::Function* definer = uCast< ::g::Fuse::Scripting::Function*>(uPtr(context)->Evaluate(::g::Uno::String::op_Addition2(p->Name, ::STRINGS[9/*" (ScriptPro...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[10/*"(function(c...*/], p->Name), ::STRINGS[11/*"', "*/]), ::STRINGS[12/*"{"*/]), ::STRINGS[13/*"get: functi...*/]), ::STRINGS[14/*"var obs = g...*/]), ::STRINGS[15/*"if ("*/]), rawField), ::STRINGS[16/*" != obs) {"*/]), rawField), ::STRINGS[17/*" = obs;"*/]), propField), ::STRINGS[18/*" = obs"*/]), p->Modifier), ::STRINGS[19/*";"*/]), ::STRINGS[20/*"}"*/]), ::STRINGS[21/*"return "*/]), propField), ::STRINGS[20/*"}"*/]), ::STRINGS[22/*"})"*/]), ::STRINGS[22/*"})"*/])), ::TYPES[16/*Fuse.Scripting.Function*/]);
    uPtr(definer)->Call(context, uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, cl, uDelegate::New(::TYPES[18/*Fuse.Scripting.Callback*/], (void*)JSContext__PropertyClosure__GetObservable_fn, this)));
}

// private object GetObservable(Fuse.Scripting.Context context, object[] args) [instance] :297
uObject* JSContext__PropertyClosure::GetObservable(::g::Fuse::Scripting::Context* context, uArray* args)
{
    ::g::Uno::UX::PropertyObject* obj = uAs< ::g::Uno::UX::PropertyObject*>(uPtr(context)->Wrap(uPtr(args)->Strong<uObject*>(0)), ::TYPES[34/*Uno.UX.PropertyObject*/]);
    ::g::Fuse::Scripting::JavaScript::ClassInstance* ci = uCast< ::g::Fuse::Scripting::JavaScript::JSContext*>(context, ::TYPES[25/*Fuse.Scripting.JavaScript.JSContext*/])->GetClassInstance(obj, NULL);
    return uPtr(ci)->GetPropertyObservable(context, uPtr(_p)->GetProperty(obj));
}

// public PropertyClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p) [static] :270
JSContext__PropertyClosure* JSContext__PropertyClosure::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p)
{
    JSContext__PropertyClosure* obj1 = (JSContext__PropertyClosure*)uNew(JSContext__PropertyClosure_typeof());
    obj1->ctor_(context, cl, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObject.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class TreeObject.PropertySubscription :18
// {
static void TreeObject__PropertySubscription_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TreeObject__PropertySubscription_type, interface0),
        ::g::Fuse::Reactive::IPropertySubscription_typeof(), offsetof(TreeObject__PropertySubscription_type, interface1));
    type->SetFields(3,
        ::g::Fuse::Reactive::IPropertyObserver_typeof(), offsetof(TreeObject__PropertySubscription, _observer), 0);
}

TreeObject__PropertySubscription_type* TreeObject__PropertySubscription_typeof()
{
    static uSStrong<TreeObject__PropertySubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::SubscriptionSubject__Subscription_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TreeObject__PropertySubscription);
    options.TypeSize = sizeof(TreeObject__PropertySubscription_type);
    type = (TreeObject__PropertySubscription_type*)uClassType::New("Fuse.Scripting.JavaScript.TreeObject.PropertySubscription", options);
    type->fp_build_ = TreeObject__PropertySubscription_build;
    type->interface1.fp_TrySetExclusive = (void(*)(uObject*, uString*, uObject*, bool*))TreeObject__PropertySubscription__FuseReactiveIPropertySubscriptionTrySetExclusive_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::SubscriptionSubject__Subscription__Dispose_fn;
    return type;
}

// public PropertySubscription(Fuse.Scripting.JavaScript.TreeObject om, Fuse.Reactive.IPropertyObserver observer) :22
void TreeObject__PropertySubscription__ctor_1_fn(TreeObject__PropertySubscription* __this, ::g::Fuse::Scripting::JavaScript::TreeObject* om, uObject* observer)
{
    __this->ctor_1(om, observer);
}

// private bool Fuse.Reactive.IPropertySubscription.TrySetExclusive(string key, object newValue) :51
void TreeObject__PropertySubscription__FuseReactiveIPropertySubscriptionTrySetExclusive_fn(TreeObject__PropertySubscription* __this, uString* key, uObject* newValue, bool* __retval)
{
    ::g::Fuse::Scripting::JavaScript::TreeObject* t = uCast< ::g::Fuse::Scripting::JavaScript::TreeObject*>(__this->SubscriptionSubject(), ::TYPES[52/*Fuse.Scripting.JavaScript.TreeObject*/]);
    uPtr(::g::Fuse::Reactive::JavaScript::Worker_)->Invoke1(uDelegate::New(::TYPES[9/*Uno.Action<Fuse.Scripting.Context>*/], (void*)TreeObject__PropertySubscription__JSThreadSet__Perform_fn, TreeObject__PropertySubscription__JSThreadSet::New1(uCast< ::g::Fuse::Scripting::Object*>(uPtr(t)->Raw(), ::TYPES[11/*Fuse.Scripting.Object*/]), key, newValue)));
    t->Set1(key, newValue, __this);
    return *__retval = true, void();
}

// public PropertySubscription New(Fuse.Scripting.JavaScript.TreeObject om, Fuse.Reactive.IPropertyObserver observer) :22
void TreeObject__PropertySubscription__New1_fn(::g::Fuse::Scripting::JavaScript::TreeObject* om, uObject* observer, TreeObject__PropertySubscription** __retval)
{
    *__retval = TreeObject__PropertySubscription::New1(om, observer);
}

// public void OnPropertyChanged(string key, object newValue, Fuse.Scripting.JavaScript.TreeObject.PropertySubscription exclude) :63
void TreeObject__PropertySubscription__OnPropertyChanged_fn(TreeObject__PropertySubscription* __this, uString* key, uObject* newValue, TreeObject__PropertySubscription* exclude)
{
    __this->OnPropertyChanged(key, newValue, exclude);
}

// public PropertySubscription(Fuse.Scripting.JavaScript.TreeObject om, Fuse.Reactive.IPropertyObserver observer) [instance] :22
void TreeObject__PropertySubscription::ctor_1(::g::Fuse::Scripting::JavaScript::TreeObject* om, uObject* observer)
{
    ctor_(om);
    _observer = observer;
}

// public void OnPropertyChanged(string key, object newValue, Fuse.Scripting.JavaScript.TreeObject.PropertySubscription exclude) [instance] :63
void TreeObject__PropertySubscription::OnPropertyChanged(uString* key, uObject* newValue, TreeObject__PropertySubscription* exclude)
{
    if (exclude != this)
        ::g::Fuse::Reactive::IPropertyObserver::OnPropertyChanged(uInterface(uPtr(_observer), ::g::Fuse::Reactive::IPropertyObserver_typeof()), (uObject*)this, key, newValue);

    TreeObject__PropertySubscription* next = uAs<TreeObject__PropertySubscription*>(Next(), __type);

    if (next != NULL)
        uPtr(next)->OnPropertyChanged(key, newValue, exclude);
}

// public PropertySubscription New(Fuse.Scripting.JavaScript.TreeObject om, Fuse.Reactive.IPropertyObserver observer) [static] :22
TreeObject__PropertySubscription* TreeObject__PropertySubscription::New1(::g::Fuse::Scripting::JavaScript::TreeObject* om, uObject* observer)
{
    TreeObject__PropertySubscription* obj1 = (TreeObject__PropertySubscription*)uNew(TreeObject__PropertySubscription_typeof());
    obj1->ctor_1(om, observer);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ObservableProperty.uno
// -----------------------------------------------------------------------------------------

// private sealed class ObservableProperty.PushCapture :220
// {
static void ObservableProperty__PushCapture_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof(), NULL), offsetof(ObservableProperty__PushCapture, _push), 0,
        uObject_typeof(), offsetof(ObservableProperty__PushCapture, _arg), 0);
}

uType* ObservableProperty__PushCapture_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ObservableProperty__PushCapture);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.ObservableProperty.PushCapture", options);
    type->fp_build_ = ObservableProperty__PushCapture_build;
    return type;
}

// public PushCapture(Uno.Action<Fuse.Scripting.Context, object> push, object arg) :225
void ObservableProperty__PushCapture__ctor__fn(ObservableProperty__PushCapture* __this, uDelegate* push, uObject* arg)
{
    __this->ctor_(push, arg);
}

// public PushCapture New(Uno.Action<Fuse.Scripting.Context, object> push, object arg) :225
void ObservableProperty__PushCapture__New1_fn(uDelegate* push, uObject* arg, ObservableProperty__PushCapture** __retval)
{
    *__retval = ObservableProperty__PushCapture::New1(push, arg);
}

// public void Run(Fuse.Scripting.Context context) :231
void ObservableProperty__PushCapture__Run_fn(ObservableProperty__PushCapture* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Run(context);
}

// public PushCapture(Uno.Action<Fuse.Scripting.Context, object> push, object arg) [instance] :225
void ObservableProperty__PushCapture::ctor_(uDelegate* push, uObject* arg)
{
    _push = push;
    _arg = arg;
}

// public void Run(Fuse.Scripting.Context context) [instance] :231
void ObservableProperty__PushCapture::Run(::g::Fuse::Scripting::Context* context)
{
    uPtr(_push)->Invoke(2, context, (uObject*)_arg);
}

// public PushCapture New(Uno.Action<Fuse.Scripting.Context, object> push, object arg) [static] :225
ObservableProperty__PushCapture* ObservableProperty__PushCapture::New1(uDelegate* push, uObject* arg)
{
    ObservableProperty__PushCapture* obj1 = (ObservableProperty__PushCapture*)uNew(ObservableProperty__PushCapture_typeof());
    obj1->ctor_(push, arg);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Context.uno
// ------------------------------------------------------------------------------

// private sealed class JSContext.ReadonlyPropertyClosure :244
// {
static void JSContext__ReadonlyPropertyClosure_build(uType* type)
{
    ::STRINGS[23] = uString::Const(" (ScriptReadonlyProperty)");
    ::STRINGS[24] = uString::Const("(function(cl,propValue){Object.defineProperty(cl.prototype,'");
    ::STRINGS[25] = uString::Const("',");
    ::STRINGS[12] = uString::Const("{");
    ::STRINGS[26] = uString::Const("value: propValue,");
    ::STRINGS[27] = uString::Const("writable: false,");
    ::STRINGS[28] = uString::Const("enumerable: true,");
    ::STRINGS[29] = uString::Const("configurable: false");
    ::STRINGS[20] = uString::Const("}");
    ::STRINGS[30] = uString::Const(");");
    ::STRINGS[22] = uString::Const("})");
    ::TYPES[16] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[15] = uObject_typeof()->Array();
}

uType* JSContext__ReadonlyPropertyClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(JSContext__ReadonlyPropertyClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.JSContext.ReadonlyPropertyClosure", options);
    type->fp_build_ = JSContext__ReadonlyPropertyClosure_build;
    return type;
}

// public ReadonlyPropertyClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function cl, Fuse.Scripting.ScriptReadonlyProperty constant) :246
void JSContext__ReadonlyPropertyClosure__ctor__fn(JSContext__ReadonlyPropertyClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant)
{
    __this->ctor_(context, cl, constant);
}

// public ReadonlyPropertyClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function cl, Fuse.Scripting.ScriptReadonlyProperty constant) :246
void JSContext__ReadonlyPropertyClosure__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant, JSContext__ReadonlyPropertyClosure** __retval)
{
    *__retval = JSContext__ReadonlyPropertyClosure::New1(context, cl, constant);
}

// public ReadonlyPropertyClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function cl, Fuse.Scripting.ScriptReadonlyProperty constant) [instance] :246
void JSContext__ReadonlyPropertyClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant)
{
    ::g::Fuse::Scripting::Function* definer = uCast< ::g::Fuse::Scripting::Function*>(uPtr(context)->Evaluate(::g::Uno::String::op_Addition2(uPtr(constant)->Name, ::STRINGS[23/*" (ScriptRea...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[24/*"(function(c...*/], uPtr(constant)->Name), ::STRINGS[25/*"',"*/]), ::STRINGS[12/*"{"*/]), ::STRINGS[26/*"value: prop...*/]), ::STRINGS[27/*"writable: f...*/]), ::STRINGS[28/*"enumerable:...*/]), ::STRINGS[29/*"configurabl...*/]), ::STRINGS[20/*"}"*/]), ::STRINGS[30/*");"*/]), ::STRINGS[22/*"})"*/])), ::TYPES[16/*Fuse.Scripting.Function*/]);
    uPtr(definer)->Call(context, uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, cl, (uObject*)context->Unwrap(constant->Value)));
}

// public ReadonlyPropertyClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function cl, Fuse.Scripting.ScriptReadonlyProperty constant) [static] :246
JSContext__ReadonlyPropertyClosure* JSContext__ReadonlyPropertyClosure::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant)
{
    JSContext__ReadonlyPropertyClosure* obj1 = (JSContext__ReadonlyPropertyClosure*)uNew(JSContext__ReadonlyPropertyClosure_typeof());
    obj1->ctor_(context, cl, constant);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// private sealed class Observable.RemoveAt :568
// {
static void Observable__RemoveAt_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__RemoveAt, _index), 0);
}

::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__RemoveAt_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__RemoveAt);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::Observable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::Observable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.Observable.RemoveAt", options);
    type->fp_build_ = Observable__RemoveAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*, uObject*))Observable__RemoveAt__OnPerform_fn;
    return type;
}

// public RemoveAt(Fuse.Scripting.JavaScript.Observable obs, int index) :572
void Observable__RemoveAt__ctor_1_fn(Observable__RemoveAt* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index)
{
    __this->ctor_1(obs, *index);
}

// public RemoveAt New(Fuse.Scripting.JavaScript.Observable obs, int index) :572
void Observable__RemoveAt__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, Observable__RemoveAt** __retval)
{
    *__retval = Observable__RemoveAt::New1(obs, *index);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription> sub) :577
void Observable__RemoveAt__OnPerform_fn(Observable__RemoveAt* __this, uObject* sub)
{
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret3;
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
    uPtr(uPtr(__this->Observable())->_values)->RemoveAt(__this->_index);

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Scripting.JavaScript.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index);
}

// public RemoveAt(Fuse.Scripting.JavaScript.Observable obs, int index) [instance] :572
void Observable__RemoveAt::ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index)
{
    ctor_(obs);
    _index = index;
}

// public RemoveAt New(Fuse.Scripting.JavaScript.Observable obs, int index) [static] :572
Observable__RemoveAt* Observable__RemoveAt::New1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index)
{
    Observable__RemoveAt* obj1 = (Observable__RemoveAt*)uNew(Observable__RemoveAt_typeof());
    obj1->ctor_1(obs, index);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObservable.uno
// ----------------------------------------------------------------------------------------------------

// private sealed class TreeObservable.RemoveAtOperation :243
// {
static void TreeObservable__RemoveAtOperation_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Scripting::JavaScript::TreeArray_typeof();
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof());
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(TreeObservable__RemoveAtOperation, _index), 0);
}

::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type* TreeObservable__RemoveAtOperation_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_typeof();
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TreeObservable__RemoveAtOperation);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.TreeObservable.RemoveAtOperation", options);
    type->fp_build_ = TreeObservable__RemoveAtOperation_build;
    type->fp_Perform1 = (void(*)(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation*, uObject*))TreeObservable__RemoveAtOperation__Perform1_fn;
    type->fp_get_SpecialArgCount = (void(*)(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation*, int32_t*))TreeObservable__RemoveAtOperation__get_SpecialArgCount_fn;
    return type;
}

// public RemoveAtOperation(Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) :245
void TreeObservable__RemoveAtOperation__ctor_1_fn(TreeObservable__RemoveAtOperation* __this, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    __this->ctor_1(inst, args);
}

// public RemoveAtOperation New(Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) :245
void TreeObservable__RemoveAtOperation__New1_fn(::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args, TreeObservable__RemoveAtOperation** __retval)
{
    *__retval = TreeObservable__RemoveAtOperation::New1(inst, args);
}

// protected override sealed void Perform(object dc) :254
void TreeObservable__RemoveAtOperation__Perform1_fn(TreeObservable__RemoveAtOperation* __this, uObject* dc)
{
    ::g::Fuse::Scripting::JavaScript::TreeArray* arr = uAs< ::g::Fuse::Scripting::JavaScript::TreeArray*>(dc, ::TYPES[3/*Fuse.Scripting.JavaScript.TreeArray*/]);

    if (arr != NULL)
        uPtr(arr)->RemoveAt(__this->_index);
}

// protected override sealed int get_SpecialArgCount() :252
void TreeObservable__RemoveAtOperation__get_SpecialArgCount_fn(TreeObservable__RemoveAtOperation* __this, int32_t* __retval)
{
    return *__retval = 1, void();
}

// public RemoveAtOperation(Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) [instance] :245
void TreeObservable__RemoveAtOperation::ctor_1(::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    ctor_(inst, args);
    _index = ::g::Fuse::Marshal::ToInt(uPtr(Arguments)->Strong<uObject*>(uPtr(Arguments)->Length() - 1));
}

// public RemoveAtOperation New(Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) [static] :245
TreeObservable__RemoveAtOperation* TreeObservable__RemoveAtOperation::New1(::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    TreeObservable__RemoveAtOperation* obj1 = (TreeObservable__RemoveAtOperation*)uNew(TreeObservable__RemoveAtOperation_typeof());
    obj1->ctor_1(inst, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// private sealed class Observable.RemoveRange :590
// {
static void Observable__RemoveRange_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__RemoveRange, _index), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__RemoveRange, _count), 0);
}

::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__RemoveRange_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__RemoveRange);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::Observable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::Observable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.Observable.RemoveRange", options);
    type->fp_build_ = Observable__RemoveRange_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*, uObject*))Observable__RemoveRange__OnPerform_fn;
    return type;
}

// public RemoveRange(Fuse.Scripting.JavaScript.Observable obs, int index, int count) :595
void Observable__RemoveRange__ctor_1_fn(Observable__RemoveRange* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, int32_t* count)
{
    __this->ctor_1(obs, *index, *count);
}

// public RemoveRange New(Fuse.Scripting.JavaScript.Observable obs, int index, int count) :595
void Observable__RemoveRange__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, int32_t* count, Observable__RemoveRange** __retval)
{
    *__retval = Observable__RemoveRange::New1(obs, *index, *count);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription> sub) :601
void Observable__RemoveRange__OnPerform_fn(Observable__RemoveRange* __this, uObject* sub)
{
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret3;

    for (int32_t i = 0; i < __this->_count; i++)
    {
        ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
        uPtr(uPtr(__this->Observable())->_values)->RemoveAt(__this->_index);

        for (int32_t j = 0; j < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Scripting.JavaScript.Observable.Subscription>*/])); ++j)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(j), &ret2), ret2))->ShouldSend(-1))
                ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(j), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index);
    }
}

// public RemoveRange(Fuse.Scripting.JavaScript.Observable obs, int index, int count) [instance] :595
void Observable__RemoveRange::ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, int32_t count)
{
    ctor_(obs);
    _index = index;
    _count = count;
}

// public RemoveRange New(Fuse.Scripting.JavaScript.Observable obs, int index, int count) [static] :595
Observable__RemoveRange* Observable__RemoveRange::New1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, int32_t count)
{
    Observable__RemoveRange* obj1 = (Observable__RemoveRange*)uNew(Observable__RemoveRange_typeof());
    obj1->ctor_1(obs, index, count);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// private sealed class Observable.Subscription.ReplaceAllExclusiveOperation :140
// {
static void Observable__Subscription__ReplaceAllExclusiveOperation_build(uType* type)
{
    ::STRINGS[31] = uString::Const("replaceAllWithOrigin");
    ::TYPES[15] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Scripting::IThreadWorker_typeof(), offsetof(Observable__Subscription__ReplaceAllExclusiveOperation, Worker), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(Observable__Subscription__ReplaceAllExclusiveOperation, Object), 0,
        ::TYPES[15/*object[]*/], offsetof(Observable__Subscription__ReplaceAllExclusiveOperation, NewValues), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__Subscription__ReplaceAllExclusiveOperation, Origin), 0);
}

uType* Observable__Subscription__ReplaceAllExclusiveOperation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__Subscription__ReplaceAllExclusiveOperation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.Observable.Subscription.ReplaceAllExclusiveOperation", options);
    type->fp_build_ = Observable__Subscription__ReplaceAllExclusiveOperation_build;
    return type;
}

// public ReplaceAllExclusiveOperation(Fuse.Scripting.IThreadWorker worker, Fuse.Scripting.Object obj, object[] newValues, int origin) :142
void Observable__Subscription__ReplaceAllExclusiveOperation__ctor__fn(Observable__Subscription__ReplaceAllExclusiveOperation* __this, uObject* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int32_t* origin)
{
    __this->ctor_(worker, obj, newValues, *origin);
}

// public ReplaceAllExclusiveOperation New(Fuse.Scripting.IThreadWorker worker, Fuse.Scripting.Object obj, object[] newValues, int origin) :142
void Observable__Subscription__ReplaceAllExclusiveOperation__New1_fn(uObject* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int32_t* origin, Observable__Subscription__ReplaceAllExclusiveOperation** __retval)
{
    *__retval = Observable__Subscription__ReplaceAllExclusiveOperation::New1(worker, obj, newValues, *origin);
}

// public void Perform(Fuse.Scripting.Context context) :156
void Observable__Subscription__ReplaceAllExclusiveOperation__Perform_fn(Observable__Subscription__ReplaceAllExclusiveOperation* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Perform(context);
}

// public ReplaceAllExclusiveOperation(Fuse.Scripting.IThreadWorker worker, Fuse.Scripting.Object obj, object[] newValues, int origin) [instance] :142
void Observable__Subscription__ReplaceAllExclusiveOperation::ctor_(uObject* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int32_t origin)
{
    Worker = worker;
    Object = obj;
    NewValues = newValues;
    Origin = origin;
}

// public void Perform(Fuse.Scripting.Context context) [instance] :156
void Observable__Subscription__ReplaceAllExclusiveOperation::Perform(::g::Fuse::Scripting::Context* context)
{
    for (int32_t i = 0; i < uPtr(NewValues)->Length(); i++)
        uPtr(NewValues)->Strong<uObject*>(i) = uPtr(context)->Unwrap(uPtr(NewValues)->Strong<uObject*>(i));

    uPtr(Object)->CallMethod(context, ::STRINGS[31/*"replaceAllW...*/], uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, (::g::Fuse::Scripting::Array*)uPtr(context)->NewArray(NewValues), uBox<int32_t>(::TYPES[63/*int*/], Origin)));
}

// public ReplaceAllExclusiveOperation New(Fuse.Scripting.IThreadWorker worker, Fuse.Scripting.Object obj, object[] newValues, int origin) [static] :142
Observable__Subscription__ReplaceAllExclusiveOperation* Observable__Subscription__ReplaceAllExclusiveOperation::New1(uObject* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int32_t origin)
{
    Observable__Subscription__ReplaceAllExclusiveOperation* obj1 = (Observable__Subscription__ReplaceAllExclusiveOperation*)uNew(Observable__Subscription__ReplaceAllExclusiveOperation_typeof());
    obj1->ctor_(worker, obj, newValues, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeArray.uno
// -----------------------------------------------------------------------------------------------

// private sealed class TreeArray.ArraySubscription.ReplaceAllOperation :63
// {
static void TreeArray__ArraySubscription__ReplaceAllOperation_build(uType* type)
{
    ::STRINGS[32] = uString::Const("replaceAll");
    ::STRINGS[33] = uString::Const("(function(array, values) {if ('__fuse_replaceAll' in array) array.__fuse_replaceAll(values);else {array.length = 0;Array.prototype.push.apply(array, values);}})");
    ::TYPES[15] = uObject_typeof()->Array();
    ::TYPES[35] = ::g::Fuse::IArray_typeof();
    ::TYPES[16] = ::g::Fuse::Scripting::Function_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Array_typeof(), offsetof(TreeArray__ArraySubscription__ReplaceAllOperation, _target), 0,
        ::TYPES[35/*Fuse.IArray*/], offsetof(TreeArray__ArraySubscription__ReplaceAllOperation, _newValues), 0);
}

uType* TreeArray__ArraySubscription__ReplaceAllOperation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TreeArray__ArraySubscription__ReplaceAllOperation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.TreeArray.ArraySubscription.ReplaceAllOperation", options);
    type->fp_build_ = TreeArray__ArraySubscription__ReplaceAllOperation_build;
    return type;
}

// public ReplaceAllOperation(Fuse.Scripting.Array target, Fuse.IArray newValues) :68
void TreeArray__ArraySubscription__ReplaceAllOperation__ctor__fn(TreeArray__ArraySubscription__ReplaceAllOperation* __this, ::g::Fuse::Scripting::Array* target, uObject* newValues)
{
    __this->ctor_(target, newValues);
}

// public ReplaceAllOperation New(Fuse.Scripting.Array target, Fuse.IArray newValues) :68
void TreeArray__ArraySubscription__ReplaceAllOperation__New1_fn(::g::Fuse::Scripting::Array* target, uObject* newValues, TreeArray__ArraySubscription__ReplaceAllOperation** __retval)
{
    *__retval = TreeArray__ArraySubscription__ReplaceAllOperation::New1(target, newValues);
}

// public void Perform(Fuse.Scripting.Context context) :74
void TreeArray__ArraySubscription__ReplaceAllOperation__Perform_fn(TreeArray__ArraySubscription__ReplaceAllOperation* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Perform(context);
}

// public ReplaceAllOperation(Fuse.Scripting.Array target, Fuse.IArray newValues) [instance] :68
void TreeArray__ArraySubscription__ReplaceAllOperation::ctor_(::g::Fuse::Scripting::Array* target, uObject* newValues)
{
    _target = target;
    _newValues = newValues;
}

// public void Perform(Fuse.Scripting.Context context) [instance] :74
void TreeArray__ArraySubscription__ReplaceAllOperation::Perform(::g::Fuse::Scripting::Context* context)
{
    uArray* nv = uArray::New(::TYPES[15/*object[]*/], ::g::Fuse::IArray::Length(uInterface(uPtr(_newValues), ::TYPES[35/*Fuse.IArray*/])));

    for (int32_t i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(_newValues), ::TYPES[35/*Fuse.IArray*/])); ++i)
        uPtr(nv)->Strong<uObject*>(i) = uPtr(context)->Unwrap(::g::Fuse::IArray::Item(uInterface(uPtr(_newValues), ::TYPES[35/*Fuse.IArray*/]), i));

    ::g::Fuse::Scripting::Array* newValuesJs = uPtr(context)->NewArray(nv);
    ::g::Fuse::Scripting::Function* replaceAllFn = uCast< ::g::Fuse::Scripting::Function*>(context->Evaluate(::STRINGS[32/*"replaceAll"*/], ::STRINGS[33/*"(function(a...*/]), ::TYPES[16/*Fuse.Scripting.Function*/]);
    uPtr(replaceAllFn)->Call(context, uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, (::g::Fuse::Scripting::Array*)_target, newValuesJs));
}

// public ReplaceAllOperation New(Fuse.Scripting.Array target, Fuse.IArray newValues) [static] :68
TreeArray__ArraySubscription__ReplaceAllOperation* TreeArray__ArraySubscription__ReplaceAllOperation::New1(::g::Fuse::Scripting::Array* target, uObject* newValues)
{
    TreeArray__ArraySubscription__ReplaceAllOperation* obj1 = (TreeArray__ArraySubscription__ReplaceAllOperation*)uNew(TreeArray__ArraySubscription__ReplaceAllOperation_typeof());
    obj1->ctor_(target, newValues);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ObservableProperty.uno
// -----------------------------------------------------------------------------------------

// internal sealed class ObservableProperty.ResolveDefaultValueClosure :72
// {
static void ObservableProperty__ResolveDefaultValueClosure_build(uType* type)
{
    ::TYPES[36] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[37] = ::g::Uno::Type_typeof();
    ::TYPES[38] = type->MakeMethod(0/*IsDefault<bool>*/, ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[39] = type->MakeMethod(0/*IsDefault<int>*/, ::g::Uno::Int_typeof(), NULL);
    ::TYPES[40] = type->MakeMethod(0/*IsDefault<float>*/, ::g::Uno::Float_typeof(), NULL);
    ::TYPES[41] = type->MakeMethod(0/*IsDefault<double>*/, ::g::Uno::Double_typeof(), NULL);
    ::TYPES[42] = type->MakeMethod(0/*IsDefault<float2>*/, ::g::Uno::Float2_typeof(), NULL);
    ::TYPES[43] = type->MakeMethod(0/*IsDefault<float3>*/, ::g::Uno::Float3_typeof(), NULL);
    ::TYPES[44] = type->MakeMethod(0/*IsDefault<float4>*/, ::g::Uno::Float4_typeof(), NULL);
    ::TYPES[45] = type->MakeMethod(0/*IsDefault<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL);
    ::TYPES[46] = type->MakeMethod(0/*IsDefault<Uno.UX.Size2>*/, ::g::Uno::UX::Size2_typeof(), NULL);
    ::TYPES[47] = type->MakeMethod(0/*IsDefault<Uno.UX.Selector>*/, ::g::Uno::UX::Selector_typeof(), NULL);
    type->MethodTypes[0]->SetDependencies(
        ::TYPES[37/*Uno.Type*/]);
    type->SetFields(0,
        ::g::Uno::UX::Property_typeof(), offsetof(ObservableProperty__ResolveDefaultValueClosure, _property), 0,
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(ObservableProperty__ResolveDefaultValueClosure, _subscription), 0,
        uObject_typeof(), offsetof(ObservableProperty__ResolveDefaultValueClosure, _value), 0,
        ::TYPES[36/*Uno.Action<object>*/], offsetof(ObservableProperty__ResolveDefaultValueClosure, _pushValueOnJSThread), 0);
}

uType* ObservableProperty__ResolveDefaultValueClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(ObservableProperty__ResolveDefaultValueClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.ObservableProperty.ResolveDefaultValueClosure", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,1);
    type->fp_build_ = ObservableProperty__ResolveDefaultValueClosure_build;
    return type;
}

// public ResolveDefaultValueClosure(Fuse.Scripting.JavaScript.ObservableProperty op, object value) :79
void ObservableProperty__ResolveDefaultValueClosure__ctor__fn(ObservableProperty__ResolveDefaultValueClosure* __this, ::g::Fuse::Scripting::JavaScript::ObservableProperty* op, uObject* value)
{
    __this->ctor_(op, value);
}

// private static bool IsDefault<T>(object value, Uno.Type t) :135
void ObservableProperty__ResolveDefaultValueClosure__IsDefault_fn(uType* __type, uObject* value, uType* t, bool* __retval)
{
    *__retval = ObservableProperty__ResolveDefaultValueClosure::IsDefault(__type, value, t);
}

// private static bool IsDefaultValueForType(object value, Uno.Type t) :115
void ObservableProperty__ResolveDefaultValueClosure__IsDefaultValueForType_fn(uObject* value, uType* t, bool* __retval)
{
    *__retval = ObservableProperty__ResolveDefaultValueClosure::IsDefaultValueForType(value, t);
}

// public ResolveDefaultValueClosure New(Fuse.Scripting.JavaScript.ObservableProperty op, object value) :79
void ObservableProperty__ResolveDefaultValueClosure__New1_fn(::g::Fuse::Scripting::JavaScript::ObservableProperty* op, uObject* value, ObservableProperty__ResolveDefaultValueClosure** __retval)
{
    *__retval = ObservableProperty__ResolveDefaultValueClosure::New1(op, value);
}

// public void Perform() :88
void ObservableProperty__ResolveDefaultValueClosure__Perform_fn(ObservableProperty__ResolveDefaultValueClosure* __this)
{
    __this->Perform();
}

// public ResolveDefaultValueClosure(Fuse.Scripting.JavaScript.ObservableProperty op, object value) [instance] :79
void ObservableProperty__ResolveDefaultValueClosure::ctor_(::g::Fuse::Scripting::JavaScript::ObservableProperty* op, uObject* value)
{
    _property = uPtr(op)->_property;
    _subscription = (uObject*)op->_subscription;
    _pushValueOnJSThread = uDelegate::New(::TYPES[36/*Uno.Action<object>*/], (void*)::g::Fuse::Scripting::JavaScript::ObservableProperty__PushValueOnJSThread_fn, op);
    _value = value;
}

// public void Perform() [instance] :88
void ObservableProperty__ResolveDefaultValueClosure::Perform()
{
    if (ObservableProperty__ResolveDefaultValueClosure::IsDefaultValueForType(uPtr(_property)->GetAsObject1(), uPtr(_property)->PropertyType()))
    {
        uPtr(_property)->SetAsObject1(_value, NULL);
        uPtr(_pushValueOnJSThread)->InvokeVoid(_value);
    }
}

// private static bool IsDefault<T>(object value, Uno.Type t) [static] :135
bool ObservableProperty__ResolveDefaultValueClosure::IsDefault(uType* __type, uObject* value, uType* t)
{
    return ::g::Uno::Type::op_Equality(t, __type->U(0)) && ::g::Uno::Object::Equals(uPtr(value), uBoxPtr(__type->U(0), uT(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize))));
}

// private static bool IsDefaultValueForType(object value, Uno.Type t) [static] :115
bool ObservableProperty__ResolveDefaultValueClosure::IsDefaultValueForType(uObject* value, uType* t)
{
    if (value == NULL)
        return true;

    if (::g::Uno::Type::IsEnum(uPtr(t)))
        return uUnbox<int32_t>(::TYPES[63/*int*/], value) == 0;

    return ((((((((ObservableProperty__ResolveDefaultValueClosure::IsDefault(::TYPES[38/*Fuse.Scripting.JavaScript.ObservableProperty.ResolveDefaultValueClosure.IsDefault<bool>*/], value, t) || ObservableProperty__ResolveDefaultValueClosure::IsDefault(::TYPES[39/*Fuse.Scripting.JavaScript.ObservableProperty.ResolveDefaultValueClosure.IsDefault<int>*/], value, t)) || ObservableProperty__ResolveDefaultValueClosure::IsDefault(::TYPES[40/*Fuse.Scripting.JavaScript.ObservableProperty.ResolveDefaultValueClosure.IsDefault<float>*/], value, t)) || ObservableProperty__ResolveDefaultValueClosure::IsDefault(::TYPES[41/*Fuse.Scripting.JavaScript.ObservableProperty.ResolveDefaultValueClosure.IsDefault<double>*/], value, t)) || ObservableProperty__ResolveDefaultValueClosure::IsDefault(::TYPES[42/*Fuse.Scripting.JavaScript.ObservableProperty.ResolveDefaultValueClosure.IsDefault<float2>*/], value, t)) || ObservableProperty__ResolveDefaultValueClosure::IsDefault(::TYPES[43/*Fuse.Scripting.JavaScript.ObservableProperty.ResolveDefaultValueClosure.IsDefault<float3>*/], value, t)) || ObservableProperty__ResolveDefaultValueClosure::IsDefault(::TYPES[44/*Fuse.Scripting.JavaScript.ObservableProperty.ResolveDefaultValueClosure.IsDefault<float4>*/], value, t)) || ObservableProperty__ResolveDefaultValueClosure::IsDefault(::TYPES[45/*Fuse.Scripting.JavaScript.ObservableProperty.ResolveDefaultValueClosure.IsDefault<Uno.UX.Size>*/], value, t)) || ObservableProperty__ResolveDefaultValueClosure::IsDefault(::TYPES[46/*Fuse.Scripting.JavaScript.ObservableProperty.ResolveDefaultValueClosure.IsDefault<Uno.UX.Size2>*/], value, t)) || ObservableProperty__ResolveDefaultValueClosure::IsDefault(::TYPES[47/*Fuse.Scripting.JavaScript.ObservableProperty.ResolveDefaultValueClosure.IsDefault<Uno.UX.Selector>*/], value, t);
}

// public ResolveDefaultValueClosure New(Fuse.Scripting.JavaScript.ObservableProperty op, object value) [static] :79
ObservableProperty__ResolveDefaultValueClosure* ObservableProperty__ResolveDefaultValueClosure::New1(::g::Fuse::Scripting::JavaScript::ObservableProperty* op, uObject* value)
{
    ObservableProperty__ResolveDefaultValueClosure* obj1 = (ObservableProperty__ResolveDefaultValueClosure*)uNew(ObservableProperty__ResolveDefaultValueClosure_typeof());
    obj1->ctor_(op, value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/RootableScriptModule.uno
// -------------------------------------------------------------------------------------------

// internal sealed class RootableScriptModule :18
// {
static void RootableScriptModule_build(uType* type)
{
    ::STRINGS[34] = uString::Const(", ");
    ::TYPES[25] = ::g::Fuse::Scripting::JavaScript::JSContext_typeof();
    ::TYPES[48] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Scripting::Dependency_typeof(), NULL);
    ::TYPES[49] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Scripting::Dependency_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule_type, interface0));
    type->SetFields(9,
        ::g::Fuse::Scripting::JavaScript::ThreadWorker_typeof(), offsetof(RootableScriptModule, _worker), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(RootableScriptModule, _names), 0,
        ::g::Fuse::Scripting::JavaScript::ClassInstance_typeof(), offsetof(RootableScriptModule, _classInstance), 0,
        ::g::Fuse::Scripting::JavaScript::ScriptModuleNames_typeof(), offsetof(RootableScriptModule, _moduleNames), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Scripting::Dependency_typeof(), NULL), offsetof(RootableScriptModule, Dependencies), 0);
}

::g::Fuse::Scripting::ScriptModule_type* RootableScriptModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptModule_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RootableScriptModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptModule_type);
    type = (::g::Fuse::Scripting::ScriptModule_type*)uClassType::New("Fuse.Scripting.JavaScript.RootableScriptModule", options);
    type->fp_build_ = RootableScriptModule_build;
    type->fp_CallModuleFunc = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Function*, uArray*))RootableScriptModule__CallModuleFunc_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))RootableScriptModule__Evaluate_fn;
    type->fp_GenerateArgs = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*, ::g::Uno::Collections::List*, uString**))RootableScriptModule__GenerateArgs_fn;
    type->fp_GenerateRequireTable = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Uno::Collections::Dictionary**))RootableScriptModule__GenerateRequireTable_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public RootableScriptModule(Fuse.Scripting.JavaScript.ThreadWorker worker, Uno.UX.NameTable names) :31
void RootableScriptModule__ctor_2_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    __this->ctor_2(worker, names);
}

// internal override sealed void CallModuleFunc(Fuse.Scripting.Context context, Fuse.Scripting.Function moduleFunc, object[] args) :75
void RootableScriptModule__CallModuleFunc_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args)
{
    if (__this->_classInstance != NULL)
        uPtr(__this->_classInstance)->CallMethod(context, moduleFunc, args);
    else
        uPtr(moduleFunc)->Call(context, args);
}

// private void EnsureClassInstanceRooted(Fuse.Scripting.Context c) :43
void RootableScriptModule__EnsureClassInstanceRooted_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c)
{
    __this->EnsureClassInstanceRooted(c);
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :37
void RootableScriptModule__Evaluate_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    __this->EnsureClassInstanceRooted(c);
    ::g::Fuse::Scripting::ScriptModule__Evaluate_fn(__this, c, result);
}

// internal override sealed string GenerateArgs(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result, Uno.Collections.List<object> args) :59
void RootableScriptModule__GenerateArgs_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval)
{
    uString* ret3;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, ::g::Fuse::Scripting::Dependency> ret4;
    uString* argsString = (::g::Fuse::Scripting::ScriptModule__GenerateArgs_fn(__this, c, result, args, &ret3), ret3);
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, ::g::Fuse::Scripting::Dependency> enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->Dependencies), &ret4), ret4);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[48/*Uno.Collections.Dictionary<string, Fuse.Scripting.Dependency>.Enumerator*/]))
                {
                    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, ::g::Fuse::Scripting::Dependency> dep = enum1.Current(::TYPES[48/*Uno.Collections.Dictionary<string, Fuse.Scripting.Dependency>.Enumerator*/]);

                    if ((dep.Value(::TYPES[49/*Uno.Collections.KeyValuePair<string, Fuse.Scripting.Dependency>*/]).Type == 1) && (__this->ModuleNames() != 0))
                        continue;

                    argsString = ::g::Uno::String::op_Addition2(argsString, ::g::Uno::String::op_Addition2(::STRINGS[34/*", "*/], dep.Key(::TYPES[49/*Uno.Collections.KeyValuePair<string, Fuse.Scripting.Dependency>*/])));
                    ::g::Uno::Collections::List__Add_fn(uPtr(args), dep.Value(::TYPES[49/*Uno.Collections.KeyValuePair<string, Fuse.Scripting.Dependency>*/]).Value);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[48/*Uno.Collections.Dictionary<string, Fuse.Scripting.Dependency>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_6;
        }

        {
            enum1.Dispose(::TYPES[48/*Uno.Collections.Dictionary<string, Fuse.Scripting.Dependency>.Enumerator*/]);
        }
        __after_finally_6:;
    }

    return *__retval = argsString, void();
}

// internal override sealed Uno.Collections.Dictionary<string, Fuse.Scripting.Dependency> GenerateRequireTable(Fuse.Scripting.Context c) :54
void RootableScriptModule__GenerateRequireTable_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Uno::Collections::Dictionary** __retval)
{
    return *__retval = __this->Dependencies, void();
}

// public Fuse.Scripting.JavaScript.ScriptModuleNames get_ModuleNames() :27
void RootableScriptModule__get_ModuleNames_fn(RootableScriptModule* __this, int32_t* __retval)
{
    *__retval = __this->ModuleNames();
}

// public void set_ModuleNames(Fuse.Scripting.JavaScript.ScriptModuleNames value) :28
void RootableScriptModule__set_ModuleNames_fn(RootableScriptModule* __this, int32_t* value)
{
    __this->ModuleNames(*value);
}

// public RootableScriptModule New(Fuse.Scripting.JavaScript.ThreadWorker worker, Uno.UX.NameTable names) :31
void RootableScriptModule__New2_fn(::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Uno::UX::NameTable* names, RootableScriptModule** __retval)
{
    *__retval = RootableScriptModule::New2(worker, names);
}

// public RootableScriptModule(Fuse.Scripting.JavaScript.ThreadWorker worker, Uno.UX.NameTable names) [instance] :31
void RootableScriptModule::ctor_2(::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    ctor_1();
    _worker = worker;
    _names = names;
}

// private void EnsureClassInstanceRooted(Fuse.Scripting.Context c) [instance] :43
void RootableScriptModule::EnsureClassInstanceRooted(::g::Fuse::Scripting::Context* c)
{
    if (_names != NULL)
    {
        if (_classInstance == NULL)
            _classInstance = uPtr(uCast< ::g::Fuse::Scripting::JavaScript::JSContext*>(c, ::TYPES[25/*Fuse.Scripting.JavaScript.JSContext*/]))->GetClassInstance1(_names);

        uPtr(_classInstance)->EnsureRooted(c);
    }
}

// public Fuse.Scripting.JavaScript.ScriptModuleNames get_ModuleNames() [instance] :27
int32_t RootableScriptModule::ModuleNames()
{
    return _moduleNames;
}

// public void set_ModuleNames(Fuse.Scripting.JavaScript.ScriptModuleNames value) [instance] :28
void RootableScriptModule::ModuleNames(int32_t value)
{
    _moduleNames = value;
}

// public RootableScriptModule New(Fuse.Scripting.JavaScript.ThreadWorker worker, Uno.UX.NameTable names) [static] :31
RootableScriptModule* RootableScriptModule::New2(::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    RootableScriptModule* obj2 = (RootableScriptModule*)uNew(RootableScriptModule_typeof());
    obj2->ctor_2(worker, names);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/RootableScriptModule.uno
// -------------------------------------------------------------------------------------------

// public enum ScriptModuleNames :10
uEnumType* ScriptModuleNames_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.JavaScript.ScriptModuleNames", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "InjectAll", 0LL,
        "Require", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// private sealed class Observable.Set :411
// {
static void Observable__Set_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::JavaScript::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        uObject_typeof(), offsetof(Observable__Set, _value), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__Set, _origin), 0);
}

::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__Set_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__Set);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::Observable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::Observable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.Observable.Set", options);
    type->fp_build_ = Observable__Set_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*, uObject*))Observable__Set__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::JavaScript::Observable__Operation*))Observable__Set__Unsubscribe_fn;
    return type;
}

// public Set(Fuse.Scripting.JavaScript.Observable obs, object value, int origin) :416
void Observable__Set__ctor_1_fn(Observable__Set* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value, int32_t* origin)
{
    __this->ctor_1(obs, value, *origin);
}

// public Set New(Fuse.Scripting.JavaScript.Observable obs, object value, int origin) :416
void Observable__Set__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value, int32_t* origin, Observable__Set** __retval)
{
    *__retval = Observable__Set::New1(obs, value, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription> sub) :427
void Observable__Set__OnPerform_fn(Observable__Set* __this, uObject* sub)
{
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::JavaScript::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(__this->Observable())->_values), __this->_value);

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Scripting.JavaScript.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Scripting.JavaScript.Observable.Subscription>*/]), uCRef<int32_t>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_value);
}

// protected override sealed void Unsubscribe() :422
void Observable__Set__Unsubscribe_fn(Observable__Set* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_value);
}

// public Set(Fuse.Scripting.JavaScript.Observable obs, object value, int origin) [instance] :416
void Observable__Set::ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value, int32_t origin)
{
    ctor_(obs);
    _value = value;
    _origin = origin;
}

// public Set New(Fuse.Scripting.JavaScript.Observable obs, object value, int origin) [static] :416
Observable__Set* Observable__Set::New1(::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value, int32_t origin)
{
    Observable__Set* obj1 = (Observable__Set*)uNew(Observable__Set_typeof());
    obj1->ctor_1(obs, value, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObject.uno
// ------------------------------------------------------------------------------------------------

// private sealed class TreeObject.SetClosure :81
// {
static void TreeObject__SetClosure_build(uType* type)
{
    ::TYPES[50] = ::g::Fuse::Scripting::JavaScript::TreeObject__PropertySubscription_typeof();
    ::TYPES[31] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[32] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScript::TreeObject_typeof(), offsetof(TreeObject__SetClosure, _treeObject), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), offsetof(TreeObject__SetClosure, _newProps), 0,
        uObject_typeof(), offsetof(TreeObject__SetClosure, _rawOverride), 0,
        ::g::Uno::Bool_typeof(), offsetof(TreeObject__SetClosure, _hasRawOverride), 0);
}

uType* TreeObject__SetClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(TreeObject__SetClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.TreeObject.SetClosure", options);
    type->fp_build_ = TreeObject__SetClosure_build;
    return type;
}

// public SetClosure(Fuse.Scripting.JavaScript.TreeObject treeObject, Uno.Collections.Dictionary<string, object> newProps, object rawOverride, bool hasRawOverride) :88
void TreeObject__SetClosure__ctor__fn(TreeObject__SetClosure* __this, ::g::Fuse::Scripting::JavaScript::TreeObject* treeObject, ::g::Uno::Collections::Dictionary* newProps, uObject* rawOverride, bool* hasRawOverride)
{
    __this->ctor_(treeObject, newProps, rawOverride, *hasRawOverride);
}

// public SetClosure New(Fuse.Scripting.JavaScript.TreeObject treeObject, Uno.Collections.Dictionary<string, object> newProps, object rawOverride, bool hasRawOverride) :88
void TreeObject__SetClosure__New1_fn(::g::Fuse::Scripting::JavaScript::TreeObject* treeObject, ::g::Uno::Collections::Dictionary* newProps, uObject* rawOverride, bool* hasRawOverride, TreeObject__SetClosure** __retval)
{
    *__retval = TreeObject__SetClosure::New1(treeObject, newProps, rawOverride, *hasRawOverride);
}

// public void Perform() :97
void TreeObject__SetClosure__Perform_fn(TreeObject__SetClosure* __this)
{
    __this->Perform();
}

// public SetClosure(Fuse.Scripting.JavaScript.TreeObject treeObject, Uno.Collections.Dictionary<string, object> newProps, object rawOverride, bool hasRawOverride) [instance] :88
void TreeObject__SetClosure::ctor_(::g::Fuse::Scripting::JavaScript::TreeObject* treeObject, ::g::Uno::Collections::Dictionary* newProps, uObject* rawOverride, bool hasRawOverride)
{
    _treeObject = treeObject;
    _newProps = newProps;
    _rawOverride = rawOverride;
    _hasRawOverride = hasRawOverride;
}

// public void Perform() [instance] :97
void TreeObject__SetClosure::Perform()
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret3;
    uPtr(_treeObject)->_props = _newProps;

    if (_hasRawOverride)
        uPtr(_treeObject)->_rawOverride = _rawOverride;

    ::g::Fuse::Scripting::JavaScript::TreeObject__PropertySubscription* sub = uAs< ::g::Fuse::Scripting::JavaScript::TreeObject__PropertySubscription*>(uPtr(_treeObject)->Subscribers(), ::TYPES[50/*Fuse.Scripting.JavaScript.TreeObject.PropertySubscription*/]);

    if (sub != NULL)
    {
        ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_newProps), &ret3), ret3);

        {
            try
            {
                {
                    while (enum1.MoveNext(::TYPES[31/*Uno.Collections.Dictionary<string, object>.Enumerator*/]))
                    {
                        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > prop = enum1.Current(::TYPES[31/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
                        uPtr(sub)->OnPropertyChanged(prop.Key(::TYPES[32/*Uno.Collections.KeyValuePair<string, object>*/]), prop.Value(::TYPES[32/*Uno.Collections.KeyValuePair<string, object>*/]), NULL);
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum1.Dispose(::TYPES[31/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
                }
                                throw __t;
                goto __after_finally_7;
            }

            {
                enum1.Dispose(::TYPES[31/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
            }
            __after_finally_7:;
        }
    }
}

// public SetClosure New(Fuse.Scripting.JavaScript.TreeObject treeObject, Uno.Collections.Dictionary<string, object> newProps, object rawOverride, bool hasRawOverride) [static] :88
TreeObject__SetClosure* TreeObject__SetClosure::New1(::g::Fuse::Scripting::JavaScript::TreeObject* treeObject, ::g::Uno::Collections::Dictionary* newProps, uObject* rawOverride, bool hasRawOverride)
{
    TreeObject__SetClosure* obj2 = (TreeObject__SetClosure*)uNew(TreeObject__SetClosure_typeof());
    obj2->ctor_(treeObject, newProps, rawOverride, hasRawOverride);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// private sealed class Observable.Subscription.SetExclusiveOperation :79
// {
static void Observable__Subscription__SetExclusiveOperation_build(uType* type)
{
    ::STRINGS[35] = uString::Const("setValueWithOrigin");
    ::TYPES[51] = ::g::Fuse::Scripting::ScriptException_typeof();
    ::TYPES[15] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Scripting::IThreadWorker_typeof(), offsetof(Observable__Subscription__SetExclusiveOperation, Worker), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(Observable__Subscription__SetExclusiveOperation, Object), 0,
        uObject_typeof(), offsetof(Observable__Subscription__SetExclusiveOperation, NewValue), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__Subscription__SetExclusiveOperation, Origin), 0,
        ::g::Fuse::Scripting::DiagnosticSubject_typeof(), offsetof(Observable__Subscription__SetExclusiveOperation, DiagnosticSubject), 0);
}

uType* Observable__Subscription__SetExclusiveOperation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Observable__Subscription__SetExclusiveOperation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.Observable.Subscription.SetExclusiveOperation", options);
    type->fp_build_ = Observable__Subscription__SetExclusiveOperation_build;
    return type;
}

// public SetExclusiveOperation(Fuse.Scripting.IThreadWorker worker, Fuse.Scripting.Object obj, object newValue, int origin, Fuse.Scripting.DiagnosticSubject diagnosticSubject) :81
void Observable__Subscription__SetExclusiveOperation__ctor__fn(Observable__Subscription__SetExclusiveOperation* __this, uObject* worker, ::g::Fuse::Scripting::Object* obj, uObject* newValue, int32_t* origin, ::g::Fuse::Scripting::DiagnosticSubject* diagnosticSubject)
{
    __this->ctor_(worker, obj, newValue, *origin, diagnosticSubject);
}

// public SetExclusiveOperation New(Fuse.Scripting.IThreadWorker worker, Fuse.Scripting.Object obj, object newValue, int origin, Fuse.Scripting.DiagnosticSubject diagnosticSubject) :81
void Observable__Subscription__SetExclusiveOperation__New1_fn(uObject* worker, ::g::Fuse::Scripting::Object* obj, uObject* newValue, int32_t* origin, ::g::Fuse::Scripting::DiagnosticSubject* diagnosticSubject, Observable__Subscription__SetExclusiveOperation** __retval)
{
    *__retval = Observable__Subscription__SetExclusiveOperation::New1(worker, obj, newValue, *origin, diagnosticSubject);
}

// public void Perform(Fuse.Scripting.Context context) :96
void Observable__Subscription__SetExclusiveOperation__Perform_fn(Observable__Subscription__SetExclusiveOperation* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Perform(context);
}

// public SetExclusiveOperation(Fuse.Scripting.IThreadWorker worker, Fuse.Scripting.Object obj, object newValue, int origin, Fuse.Scripting.DiagnosticSubject diagnosticSubject) [instance] :81
void Observable__Subscription__SetExclusiveOperation::ctor_(uObject* worker, ::g::Fuse::Scripting::Object* obj, uObject* newValue, int32_t origin, ::g::Fuse::Scripting::DiagnosticSubject* diagnosticSubject)
{
    Worker = worker;
    Object = obj;
    NewValue = newValue;
    Origin = origin;
    DiagnosticSubject = diagnosticSubject;
}

// public void Perform(Fuse.Scripting.Context context) [instance] :96
void Observable__Subscription__SetExclusiveOperation::Perform(::g::Fuse::Scripting::Context* context)
{
    try
    {
        {
            uObject* newValue = uPtr(context)->Unwrap(NewValue);
            uPtr(Object)->CallMethod(context, ::STRINGS[35/*"setValueWit...*/], uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, newValue, uBox<int32_t>(::TYPES[63/*int*/], Origin)));
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[51/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* ex = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            uPtr(DiagnosticSubject)->SetDiagnostic(ex);
        }
        else         throw __t;
    }
}

// public SetExclusiveOperation New(Fuse.Scripting.IThreadWorker worker, Fuse.Scripting.Object obj, object newValue, int origin, Fuse.Scripting.DiagnosticSubject diagnosticSubject) [static] :81
Observable__Subscription__SetExclusiveOperation* Observable__Subscription__SetExclusiveOperation::New1(uObject* worker, ::g::Fuse::Scripting::Object* obj, uObject* newValue, int32_t origin, ::g::Fuse::Scripting::DiagnosticSubject* diagnosticSubject)
{
    Observable__Subscription__SetExclusiveOperation* obj1 = (Observable__Subscription__SetExclusiveOperation*)uNew(Observable__Subscription__SetExclusiveOperation_typeof());
    obj1->ctor_(worker, obj, newValue, origin, diagnosticSubject);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObservable.uno
// ----------------------------------------------------------------------------------------------------

// private sealed class TreeObservable.SetOperation :195
// {
static void TreeObservable__SetOperation_build(uType* type)
{
    ::TYPES[52] = ::g::Fuse::Scripting::JavaScript::TreeObject_typeof();
    ::TYPES[3] = ::g::Fuse::Scripting::JavaScript::TreeArray_typeof();
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof());
    type->SetFields(3);
}

::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type* TreeObservable__SetOperation_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::TreeObservable__ValueOperation_typeof();
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TreeObservable__SetOperation);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.TreeObservable.SetOperation", options);
    type->fp_build_ = TreeObservable__SetOperation_build;
    type->fp_Perform1 = (void(*)(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation*, uObject*))TreeObservable__SetOperation__Perform1_fn;
    type->fp_get_SpecialArgCount = (void(*)(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation*, int32_t*))TreeObservable__SetOperation__get_SpecialArgCount_fn;
    return type;
}

// public SetOperation(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) :197
void TreeObservable__SetOperation__ctor_2_fn(TreeObservable__SetOperation* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    __this->ctor_2(context, inst, args);
}

// public SetOperation New(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) :197
void TreeObservable__SetOperation__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args, TreeObservable__SetOperation** __retval)
{
    *__retval = TreeObservable__SetOperation::New1(context, inst, args);
}

// protected override sealed void Perform(object dc) :200
void TreeObservable__SetOperation__Perform1_fn(TreeObservable__SetOperation* __this, uObject* dc)
{
    uObject* key = uPtr(__this->Arguments)->Strong<uObject*>(uPtr(__this->Arguments)->Length() - 2);
    ::g::Fuse::Scripting::JavaScript::TreeObject* obj = uAs< ::g::Fuse::Scripting::JavaScript::TreeObject*>(dc, ::TYPES[52/*Fuse.Scripting.JavaScript.TreeObject*/]);

    if (obj != NULL)
        uPtr(obj)->Set1(::g::Uno::Object::ToString(uPtr(key)), __this->WrappedValue, NULL);

    ::g::Fuse::Scripting::JavaScript::TreeArray* arr = uAs< ::g::Fuse::Scripting::JavaScript::TreeArray*>(dc, ::TYPES[3/*Fuse.Scripting.JavaScript.TreeArray*/]);

    if (arr != NULL)
        uPtr(arr)->Set1(::g::Fuse::Marshal::ToInt(key), __this->WrappedValue);
}

// protected override sealed int get_SpecialArgCount() :198
void TreeObservable__SetOperation__get_SpecialArgCount_fn(TreeObservable__SetOperation* __this, int32_t* __retval)
{
    return *__retval = 2, void();
}

// public SetOperation(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) [instance] :197
void TreeObservable__SetOperation::ctor_2(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    ctor_1(context, inst, args);
}

// public SetOperation New(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) [static] :197
TreeObservable__SetOperation* TreeObservable__SetOperation::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    TreeObservable__SetOperation* obj1 = (TreeObservable__SetOperation*)uNew(TreeObservable__SetOperation_typeof());
    obj1->ctor_2(context, inst, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeArray.uno
// -----------------------------------------------------------------------------------------------

// private sealed class TreeArray.ArraySubscription.SimpleArray :142
// {
static void TreeArray__ArraySubscription__SimpleArray_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(TreeArray__ArraySubscription__SimpleArray_type, interface0));
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(TreeArray__ArraySubscription__SimpleArray, _values), 0);
}

TreeArray__ArraySubscription__SimpleArray_type* TreeArray__ArraySubscription__SimpleArray_typeof()
{
    static uSStrong<TreeArray__ArraySubscription__SimpleArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TreeArray__ArraySubscription__SimpleArray);
    options.TypeSize = sizeof(TreeArray__ArraySubscription__SimpleArray_type);
    type = (TreeArray__ArraySubscription__SimpleArray_type*)uClassType::New("Fuse.Scripting.JavaScript.TreeArray.ArraySubscription.SimpleArray", options);
    type->fp_build_ = TreeArray__ArraySubscription__SimpleArray_build;
    type->interface0.fp_get_Length = (void(*)(uObject*, int32_t*))TreeArray__ArraySubscription__SimpleArray__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))TreeArray__ArraySubscription__SimpleArray__get_Item_fn;
    return type;
}

// public SimpleArray(object[] values) :146
void TreeArray__ArraySubscription__SimpleArray__ctor__fn(TreeArray__ArraySubscription__SimpleArray* __this, uArray* values)
{
    __this->ctor_(values);
}

// public object get_Item(int index) :154
void TreeArray__ArraySubscription__SimpleArray__get_Item_fn(TreeArray__ArraySubscription__SimpleArray* __this, int32_t* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// public int get_Length() :151
void TreeArray__ArraySubscription__SimpleArray__get_Length_fn(TreeArray__ArraySubscription__SimpleArray* __this, int32_t* __retval)
{
    *__retval = __this->Length();
}

// public SimpleArray New(object[] values) :146
void TreeArray__ArraySubscription__SimpleArray__New1_fn(uArray* values, TreeArray__ArraySubscription__SimpleArray** __retval)
{
    *__retval = TreeArray__ArraySubscription__SimpleArray::New1(values);
}

// public SimpleArray(object[] values) [instance] :146
void TreeArray__ArraySubscription__SimpleArray::ctor_(uArray* values)
{
    _values = values;
}

// public object get_Item(int index) [instance] :154
uObject* TreeArray__ArraySubscription__SimpleArray::Item(int32_t index)
{
    return uPtr(_values)->Strong<uObject*>(index);
}

// public int get_Length() [instance] :151
int32_t TreeArray__ArraySubscription__SimpleArray::Length()
{
    return uPtr(_values)->Length();
}

// public SimpleArray New(object[] values) [static] :146
TreeArray__ArraySubscription__SimpleArray* TreeArray__ArraySubscription__SimpleArray::New1(uArray* values)
{
    TreeArray__ArraySubscription__SimpleArray* obj1 = (TreeArray__ArraySubscription__SimpleArray*)uNew(TreeArray__ArraySubscription__SimpleArray_typeof());
    obj1->ctor_(values);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno
// ---------------------------------------------------------------------------------

// public sealed class Observable.Subscription :51
// {
// static generated Subscription() :51
static void Observable__Subscription__cctor__fn(uType* __type)
{
    Observable__Subscription::_counter_ = 1;
}

static void Observable__Subscription_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(Observable__Subscription_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Observable__Subscription_type, interface1));
    type->SetFields(1,
        ::g::Uno::Int_typeof(), offsetof(Observable__Subscription, _origin), 0,
        ::g::Fuse::Scripting::JavaScript::Observable_typeof(), offsetof(Observable__Subscription, _om), 0,
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Observable__Subscription, _obs), 0,
        ::g::Uno::Bool_typeof(), offsetof(Observable__Subscription, _Removed), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&Observable__Subscription::_counter_, uFieldFlagsStatic);
}

Observable__Subscription_type* Observable__Subscription_typeof()
{
    static uSStrong<Observable__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::DiagnosticSubject_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Observable__Subscription);
    options.TypeSize = sizeof(Observable__Subscription_type);
    type = (Observable__Subscription_type*)uClassType::New("Fuse.Scripting.JavaScript.Observable.Subscription", options);
    type->fp_build_ = Observable__Subscription_build;
    type->fp_cctor_ = Observable__Subscription__cctor__fn;
    type->interface0.fp_SetExclusive = (void(*)(uObject*, uObject*))Observable__Subscription__FuseReactiveISubscriptionSetExclusive_fn;
    type->interface0.fp_ReplaceAllExclusive = (void(*)(uObject*, uObject*))Observable__Subscription__FuseReactiveISubscriptionReplaceAllExclusive_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Observable__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Scripting.JavaScript.Observable om, Fuse.Reactive.IObserver obs) :68
void Observable__Subscription__ctor_1_fn(Observable__Subscription* __this, ::g::Fuse::Scripting::JavaScript::Observable* om, uObject* obs)
{
    __this->ctor_1(om, obs);
}

// public void ClearExclusive(Fuse.Scripting.Context context) :203
void Observable__Subscription__ClearExclusive_fn(Observable__Subscription* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ClearExclusive(context);
}

// public void Dispose() :218
void Observable__Subscription__Dispose_fn(Observable__Subscription* __this)
{
    __this->Dispose();
}

// private void Fuse.Reactive.ISubscription.ReplaceAllExclusive(Fuse.IArray newValues) :165
void Observable__Subscription__FuseReactiveISubscriptionReplaceAllExclusive_fn(Observable__Subscription* __this, uObject* newValues)
{
    uArray* arr = uArray::New(::TYPES[15/*object[]*/], ::g::Fuse::IArray::Length(uInterface(uPtr(newValues), ::TYPES[35/*Fuse.IArray*/])));

    for (int32_t i = 0; i < arr->Length(); i++)
        uPtr(arr)->Strong<uObject*>(i) = ::g::Fuse::IArray::Item(uInterface(uPtr(newValues), ::TYPES[35/*Fuse.IArray*/]), i);

    Observable__Subscription__ReplaceAllExclusiveOperation* op = Observable__Subscription__ReplaceAllExclusiveOperation::New1(uPtr(__this->_om)->_worker, uPtr(__this->_om)->Object(), arr, __this->_origin);
    ::g::Fuse::Scripting::IThreadWorker::Invoke1(uInterface(uPtr(uPtr(__this->_om)->_worker), ::TYPES[24/*Fuse.Scripting.IThreadWorker*/]), uDelegate::New(::TYPES[9/*Uno.Action<Fuse.Scripting.Context>*/], (void*)Observable__Subscription__ReplaceAllExclusiveOperation__Perform_fn, op));
}

// private void Fuse.Reactive.ISubscription.SetExclusive(object newValue) :126
void Observable__Subscription__FuseReactiveISubscriptionSetExclusive_fn(Observable__Subscription* __this, uObject* newValue)
{
    __this->ClearDiagnostic();

    if (uPtr(__this->_om)->Object() == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Unexpected null object"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno"), 132, uString::Const("Fuse.Reactive.ISubscription.SetExclusive"));
        return;
    }

    Observable__Subscription__SetExclusiveOperation* op = Observable__Subscription__SetExclusiveOperation::New1(uPtr(__this->_om)->_worker, uPtr(__this->_om)->Object(), newValue, __this->_origin, __this);
    ::g::Fuse::Scripting::IThreadWorker::Invoke1(uInterface(uPtr(uPtr(__this->_om)->_worker), ::TYPES[24/*Fuse.Scripting.IThreadWorker*/]), uDelegate::New(::TYPES[9/*Uno.Action<Fuse.Scripting.Context>*/], (void*)Observable__Subscription__SetExclusiveOperation__Perform_fn, op));
}

// public Subscription New(Fuse.Scripting.JavaScript.Observable om, Fuse.Reactive.IObserver obs) :68
void Observable__Subscription__New2_fn(::g::Fuse::Scripting::JavaScript::Observable* om, uObject* obs, Observable__Subscription** __retval)
{
    *__retval = Observable__Subscription::New2(om, obs);
}

// public Fuse.Reactive.IObserver get_Observer() :66
void Observable__Subscription__get_Observer_fn(Observable__Subscription* __this, uObject** __retval)
{
    *__retval = __this->Observer();
}

// public generated bool get_Removed() :57
void Observable__Subscription__get_Removed_fn(Observable__Subscription* __this, bool* __retval)
{
    *__retval = __this->Removed();
}

// private generated void set_Removed(bool value) :57
void Observable__Subscription__set_Removed_fn(Observable__Subscription* __this, bool* value)
{
    __this->Removed(*value);
}

// public void SetExclusive(Fuse.Scripting.Context context, object newValue) :112
void Observable__Subscription__SetExclusive_fn(Observable__Subscription* __this, ::g::Fuse::Scripting::Context* context, uObject* newValue)
{
    __this->SetExclusive(context, newValue);
}

// public bool ShouldSend([int origin]) :59
void Observable__Subscription__ShouldSend_fn(Observable__Subscription* __this, int32_t* origin, bool* __retval)
{
    *__retval = __this->ShouldSend(*origin);
}

int32_t Observable__Subscription::_counter_;

// public Subscription(Fuse.Scripting.JavaScript.Observable om, Fuse.Reactive.IObserver obs) [instance] :68
void Observable__Subscription::ctor_1(::g::Fuse::Scripting::JavaScript::Observable* om, uObject* obs)
{
    ctor_();
    Removed(false);
    _origin = (Observable__Subscription::_counter_++);
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(om)->_observers), this);
    _om = om;
    _obs = obs;
}

// public void ClearExclusive(Fuse.Scripting.Context context) [instance] :203
void Observable__Subscription::ClearExclusive(::g::Fuse::Scripting::Context* context)
{
    Observable__Subscription__ClearExclusiveOperation* op = Observable__Subscription__ClearExclusiveOperation::New1(uPtr(_om)->Object(), _origin);
    op->Perform(context);
}

// public void Dispose() [instance] :218
void Observable__Subscription::Dispose()
{
    Removed(true);
    uPtr(_om)->ObserversCleanup();
}

// public Fuse.Reactive.IObserver get_Observer() [instance] :66
uObject* Observable__Subscription::Observer()
{
    return _obs;
}

// public generated bool get_Removed() [instance] :57
bool Observable__Subscription::Removed()
{
    return _Removed;
}

// private generated void set_Removed(bool value) [instance] :57
void Observable__Subscription::Removed(bool value)
{
    _Removed = value;
}

// public void SetExclusive(Fuse.Scripting.Context context, object newValue) [instance] :112
void Observable__Subscription::SetExclusive(::g::Fuse::Scripting::Context* context, uObject* newValue)
{
    ClearDiagnostic();

    if (uPtr(_om)->Object() == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Unexpected null object"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno"), 118, uString::Const("SetExclusive"));
        return;
    }

    Observable__Subscription__SetExclusiveOperation* op = Observable__Subscription__SetExclusiveOperation::New1(uPtr(_om)->_worker, uPtr(_om)->Object(), newValue, _origin, this);
    op->Perform(context);
}

// public bool ShouldSend([int origin]) [instance] :59
bool Observable__Subscription::ShouldSend(int32_t origin)
{
    return !Removed() && (origin != _origin);
}

// public Subscription New(Fuse.Scripting.JavaScript.Observable om, Fuse.Reactive.IObserver obs) [static] :68
Observable__Subscription* Observable__Subscription::New2(::g::Fuse::Scripting::JavaScript::Observable* om, uObject* obs)
{
    Observable__Subscription* obj1 = (Observable__Subscription*)uNew(Observable__Subscription_typeof());
    obj1->ctor_1(om, obs);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ThreadWorker.uno
// -----------------------------------------------------------------------------------

// internal sealed class ThreadWorker :15
// {
static void ThreadWorker_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Scripting::JavaScript::JSContext_typeof(),
        ::g::Fuse::Platform::Lifecycle_typeof(),
        ::g::Uno::Threading::Thread_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadWorker_type, interface0),
        ::g::Fuse::Scripting::IThreadWorker_typeof(), offsetof(ThreadWorker_type, interface1));
    type->SetFields(0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(ThreadWorker, _thread), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(ThreadWorker, _idle), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(ThreadWorker, _terminate), 0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), NULL), NULL), offsetof(ThreadWorker, _queue), 0);
}

ThreadWorker_type* ThreadWorker_typeof()
{
    static uSStrong<ThreadWorker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(ThreadWorker);
    options.TypeSize = sizeof(ThreadWorker_type);
    type = (ThreadWorker_type*)uClassType::New("Fuse.Scripting.JavaScript.ThreadWorker", options);
    type->fp_build_ = ThreadWorker_build;
    type->fp_ctor_ = (void*)ThreadWorker__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadWorker__Dispose_fn;
    type->interface1.fp_Invoke1 = (void(*)(uObject*, uDelegate*))ThreadWorker__Invoke1_fn;
    return type;
}

// public ThreadWorker() :24
void ThreadWorker__ctor__fn(ThreadWorker* __this)
{
    __this->ctor_();
}

// private void DispatchException(Uno.Exception e) :151
void ThreadWorker__DispatchException_fn(ThreadWorker* __this, ::g::Uno::Exception* e)
{
    __this->DispatchException(e);
}

// public void Dispose() :46
void ThreadWorker__Dispose_fn(ThreadWorker* __this)
{
    __this->Dispose();
}

// public void Invoke(Uno.Action action) :163
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public void Invoke(Uno.Action<Fuse.Scripting.Context> action) :157
void ThreadWorker__Invoke1_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke1(action);
}

// public ThreadWorker New() :24
void ThreadWorker__New1_fn(ThreadWorker** __retval)
{
    *__retval = ThreadWorker::New1();
}

// private void OnTerminating(Fuse.Platform.ApplicationState newState) :41
void ThreadWorker__OnTerminating_fn(ThreadWorker* __this, int32_t* newState)
{
    __this->OnTerminating(*newState);
}

// private void Run() :55
void ThreadWorker__Run_fn(ThreadWorker* __this)
{
    __this->Run();
}

// private void RunInner(Fuse.Scripting.JavaScript.JSContext context) :99
void ThreadWorker__RunInner_fn(ThreadWorker* __this, ::g::Fuse::Scripting::JavaScript::JSContext* context)
{
    __this->RunInner(context);
}

// private bool RunOnce(Fuse.Scripting.JavaScript.JSContext context) :69
void ThreadWorker__RunOnce_fn(ThreadWorker* __this, ::g::Fuse::Scripting::JavaScript::JSContext* context, bool* __retval)
{
    *__retval = __this->RunOnce(context);
}

// public ThreadWorker() [instance] :24
void ThreadWorker::ctor_()
{
    _idle = ::g::Uno::Threading::ManualResetEvent::New2(true);
    _terminate = ::g::Uno::Threading::ManualResetEvent::New2(false);
    _queue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::TYPES[9/*Uno.Action<Fuse.Scripting.Context>*/], NULL)));
    ::g::Fuse::Platform::Lifecycle::add_Terminating(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL), (void*)ThreadWorker__OnTerminating_fn, this));
    _thread = ::g::Uno::Threading::Thread::New2(uDelegate::New(::g::Uno::Threading::ThreadStart_typeof(), (void*)ThreadWorker__Run_fn, this));
    uPtr(_thread)->Start();
}

// private void DispatchException(Uno.Exception e) [instance] :151
void ThreadWorker::DispatchException(::g::Uno::Exception* e)
{
    ThreadWorker__ExceptionClosure* closure = ThreadWorker__ExceptionClosure::New1(e);
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)ThreadWorker__ExceptionClosure__Run_fn, closure));
}

// public void Dispose() [instance] :46
void ThreadWorker::Dispose()
{
    ::g::Fuse::Platform::Lifecycle::remove_Terminating(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL), (void*)ThreadWorker__OnTerminating_fn, this));
    uPtr(_terminate)->Set();
    uPtr(_thread)->Join();
    uPtr(_terminate)->Dispose();
}

// public void Invoke(Uno.Action action) [instance] :163
void ThreadWorker::Invoke(uDelegate* action)
{
    Invoke1(uDelegate::New(::TYPES[9/*Uno.Action<Fuse.Scripting.Context>*/], (void*)ThreadWorker__ContextIgnoringAction__Run_fn, ThreadWorker__ContextIgnoringAction::New1(action)));
}

// public void Invoke(Uno.Action<Fuse.Scripting.Context> action) [instance] :157
void ThreadWorker::Invoke1(uDelegate* action)
{
    uPtr(_idle)->Reset();
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_queue), action);
}

// private void OnTerminating(Fuse.Platform.ApplicationState newState) [instance] :41
void ThreadWorker::OnTerminating(int32_t newState)
{
    Dispose();
}

// private void Run() [instance] :55
void ThreadWorker::Run()
{
    try
    {
        {
            ::g::Fuse::Scripting::JavaScript::JSContext* context = ::g::Fuse::Scripting::JavaScript::JSContext::Create();

            {
                try
                {
                    {
                        RunInner(context);
                    }
                }

                catch (const uThrowable& __t)
                {
                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)context), ::g::Uno::IDisposable_typeof()));
                    }
                                        throw __t;
                    goto __after_finally_8;
                }

                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)context), ::g::Uno::IDisposable_typeof()));
                }
                __after_finally_8:;
            }
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Diagnostics::UnknownException(uString::Const("ThreadWorked failed"), e, this, uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ThreadWorker.uno"), 64, uString::Const("Run"));
        DispatchException(e);
    }
}

// private void RunInner(Fuse.Scripting.JavaScript.JSContext context) [instance] :99
void ThreadWorker::RunInner(::g::Fuse::Scripting::JavaScript::JSContext* context)
{
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();

    while (true)
    {
        if (uPtr(_terminate)->WaitOne1(0))
            break;

        uAutoReleasePool ____pool;
        bool didAnything = RunOnce(context);
        double t2 = ::g::Uno::Diagnostics::Clock::GetSeconds();

        if (!didAnything)
            uPtr(_idle)->Set();

        if (!didAnything || ((t2 - t) > 5.0))
        {
            ::g::Uno::Threading::Thread::Sleep(1);
            t = t2;
        }
    }
}

// private bool RunOnce(Fuse.Scripting.JavaScript.JSContext context) [instance] :69
bool ThreadWorker::RunOnce(::g::Fuse::Scripting::JavaScript::JSContext* context)
{
    bool ret2;
    bool didAnything = false;
    uDelegate* action;

    if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_queue), (void**)(&action), &ret2), ret2))
    {
        try
        {
            {
                didAnything = true;
                uPtr(action)->InvokeVoid(context);
            }
        }

        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            DispatchException(e);
        }
    }

    try
    {
        {
            didAnything = uPtr(uPtr(context)->FuseJS())->UpdateModules(context) || didAnything;
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e1 = __t.Exception;
        DispatchException(e1);
    }

    return didAnything;
}

// public ThreadWorker New() [static] :24
ThreadWorker* ThreadWorker::New1()
{
    ThreadWorker* obj1 = (ThreadWorker*)uNew(ThreadWorker_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeArray.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class TreeArray :9
// {
static void TreeArray_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IRaw_typeof(), offsetof(TreeArray_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(TreeArray_type, interface1),
        ::g::Fuse::Reactive::IObservableArray_typeof(), offsetof(TreeArray_type, interface2));
    type->SetFields(4);
}

TreeArray_type* TreeArray_typeof()
{
    static uSStrong<TreeArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::ArrayMirror_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(TreeArray);
    options.TypeSize = sizeof(TreeArray_type);
    type = (TreeArray_type*)uClassType::New("Fuse.Scripting.JavaScript.TreeArray", options);
    type->fp_build_ = TreeArray_build;
    type->interface2.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TreeArray__Subscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int32_t*))::g::Fuse::Scripting::JavaScript::ArrayMirror__get_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))::g::Fuse::Scripting::JavaScript::ArrayMirror__get_Item_fn;
    type->interface0.fp_get_ReflectedRaw = (void(*)(uObject*, uObject**))::g::Fuse::Scripting::ValueMirror__get_ReflectedRaw_fn;
    return type;
}

// internal TreeArray(Fuse.Scripting.Array arr) :11
void TreeArray__ctor_5_fn(TreeArray* __this, ::g::Fuse::Scripting::Array* arr)
{
    __this->ctor_5(arr);
}

// internal void Add(object value) :211
void TreeArray__Add_fn(TreeArray* __this, uObject* value)
{
    __this->Add(value);
}

// internal void InsertAt(int index, object value) :219
void TreeArray__InsertAt_fn(TreeArray* __this, int32_t* index, uObject* value)
{
    __this->InsertAt(*index, value);
}

// internal TreeArray New(Fuse.Scripting.Array arr) :11
void TreeArray__New3_fn(::g::Fuse::Scripting::Array* arr, TreeArray** __retval)
{
    *__retval = TreeArray::New3(arr);
}

// internal void RemoveAt(int index) :227
void TreeArray__RemoveAt_fn(TreeArray* __this, int32_t* index)
{
    __this->RemoveAt(*index);
}

// internal void ReplaceAll(Fuse.IArray newValues, Fuse.Scripting.JavaScript.TreeArray.ArraySubscription exclude) :181
void TreeArray__ReplaceAll_fn(TreeArray* __this, uObject* newValues, TreeArray__ArraySubscription* exclude)
{
    __this->ReplaceAll(newValues, exclude);
}

// internal void Set(int index, object newValue) :200
void TreeArray__Set1_fn(TreeArray* __this, int32_t* index, uObject* newValue)
{
    __this->Set1(*index, newValue);
}

// public Uno.IDisposable Subscribe(Fuse.Reactive.IObserver observer) :13
void TreeArray__Subscribe_fn(TreeArray* __this, uObject* observer, uObject** __retval)
{
    *__retval = __this->Subscribe(observer);
}

// internal TreeArray(Fuse.Scripting.Array arr) [instance] :11
void TreeArray::ctor_5(::g::Fuse::Scripting::Array* arr)
{
    ctor_3(arr);
}

// internal void Add(object value) [instance] :211
void TreeArray::Add(uObject* value)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_items), value);
    TreeArray__ArraySubscription* sub = uAs<TreeArray__ArraySubscription*>(Subscribers(), TreeArray__ArraySubscription_typeof());

    if (sub != NULL)
        uPtr(sub)->OnAdd(value);
}

// internal void InsertAt(int index, object value) [instance] :219
void TreeArray::InsertAt(int32_t index, uObject* value)
{
    ::g::Uno::Collections::List__Insert_fn(uPtr(_items), uCRef<int32_t>(index), value);
    TreeArray__ArraySubscription* sub = uAs<TreeArray__ArraySubscription*>(Subscribers(), TreeArray__ArraySubscription_typeof());

    if (sub != NULL)
        uPtr(sub)->OnInsertAt(index, value);
}

// internal void RemoveAt(int index) [instance] :227
void TreeArray::RemoveAt(int32_t index)
{
    uPtr(_items)->RemoveAt(index);
    TreeArray__ArraySubscription* sub = uAs<TreeArray__ArraySubscription*>(Subscribers(), TreeArray__ArraySubscription_typeof());

    if (sub != NULL)
        uPtr(sub)->OnRemoveAt(index);
}

// internal void ReplaceAll(Fuse.IArray newValues, Fuse.Scripting.JavaScript.TreeArray.ArraySubscription exclude) [instance] :181
void TreeArray::ReplaceAll(uObject* newValues, TreeArray__ArraySubscription* exclude)
{
    uObject* ret2;

    for (int32_t i = 0; i < uPtr(_items)->Count(); ++i)
        ::g::Fuse::Scripting::ValueMirror::Unsubscribe1((::g::Uno::Collections::List__get_Item_fn(uPtr(_items), uCRef<int32_t>(i), &ret2), ret2));

    uPtr(_items)->Clear();

    for (int32_t i1 = 0; i1 < ::g::Fuse::IArray::Length(uInterface(uPtr(newValues), ::TYPES[35/*Fuse.IArray*/])); ++i1)
        ::g::Uno::Collections::List__Add_fn(uPtr(_items), ::g::Fuse::IArray::Item(uInterface(uPtr(newValues), ::TYPES[35/*Fuse.IArray*/]), i1));

    TreeArray__ArraySubscription* sub = uAs<TreeArray__ArraySubscription*>(Subscribers(), TreeArray__ArraySubscription_typeof());

    if (sub != NULL)
        uPtr(sub)->OnReplaceAll(newValues, exclude);
}

// internal void Set(int index, object newValue) [instance] :200
void TreeArray::Set1(int32_t index, uObject* newValue)
{
    uObject* ret3;
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1((::g::Uno::Collections::List__get_Item_fn(uPtr(_items), uCRef<int32_t>(index), &ret3), ret3));
    ::g::Uno::Collections::List__set_Item_fn(uPtr(_items), uCRef<int32_t>(index), newValue);
    TreeArray__ArraySubscription* sub = uAs<TreeArray__ArraySubscription*>(Subscribers(), TreeArray__ArraySubscription_typeof());

    if (sub != NULL)
        uPtr(sub)->OnReplaceAt(index, newValue);
}

// public Uno.IDisposable Subscribe(Fuse.Reactive.IObserver observer) [instance] :13
uObject* TreeArray::Subscribe(uObject* observer)
{
    return (uObject*)TreeArray__ArraySubscription::New1(this, observer);
}

// internal TreeArray New(Fuse.Scripting.Array arr) [static] :11
TreeArray* TreeArray::New3(::g::Fuse::Scripting::Array* arr)
{
    TreeArray* obj1 = (TreeArray*)uNew(TreeArray_typeof());
    obj1->ctor_5(arr);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObject.uno
// ------------------------------------------------------------------------------------------------

// internal class TreeObject :8
// {
static void TreeObject_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IRaw_typeof(), offsetof(TreeObject_type, interface0),
        ::g::Fuse::IObject_typeof(), offsetof(TreeObject_type, interface1),
        ::g::Fuse::Reactive::IObservableObject_typeof(), offsetof(TreeObject_type, interface2));
    type->SetFields(4,
        uObject_typeof(), offsetof(TreeObject, _rawOverride), 0);
}

TreeObject_type* TreeObject_typeof()
{
    static uSStrong<TreeObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::ObjectMirror_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TreeObject);
    options.TypeSize = sizeof(TreeObject_type);
    type = (TreeObject_type*)uClassType::New("Fuse.Scripting.JavaScript.TreeObject", options);
    type->fp_build_ = TreeObject_build;
    type->fp_get_ReflectedRaw = (void(*)(::g::Fuse::Scripting::ValueMirror*, uObject**))TreeObject__get_ReflectedRaw_fn;
    type->fp_Set = (void(*)(::g::Fuse::Scripting::JavaScript::ObjectMirror*, ::g::Fuse::Scripting::Context*, uObject*, ::g::Fuse::Scripting::Object*))TreeObject__Set_fn;
    type->interface2.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TreeObject__Subscribe_fn;
    type->interface1.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))::g::Fuse::Scripting::JavaScript::ObjectMirror__ContainsKey_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, uString*, uObject**))::g::Fuse::Scripting::JavaScript::ObjectMirror__get_Item_fn;
    type->interface1.fp_get_Keys = (void(*)(uObject*, uArray**))::g::Fuse::Scripting::JavaScript::ObjectMirror__get_Keys_fn;
    type->interface0.fp_get_ReflectedRaw = (void(*)(uObject*, uObject**))TreeObject__get_ReflectedRaw_fn;
    return type;
}

// protected TreeObject(Fuse.Scripting.Object obj) :11
void TreeObject__ctor_4_fn(TreeObject* __this, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_4(obj);
}

// protected TreeObject New(Fuse.Scripting.Object obj) :11
void TreeObject__New3_fn(::g::Fuse::Scripting::Object* obj, TreeObject** __retval)
{
    *__retval = TreeObject::New3(obj);
}

// public override sealed object get_ReflectedRaw() :75
void TreeObject__get_ReflectedRaw_fn(TreeObject* __this, uObject** __retval)
{
    uObject* ind1;
    uObject* ret5;
    ind1 = __this->_rawOverride;
    return *__retval = (ind1 != NULL) ? ind1 : (::g::Fuse::Scripting::ValueMirror__get_ReflectedRaw_fn(__this, &ret5), ret5), void();
}

// internal override sealed void Set(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.IMirror mirror, Fuse.Scripting.Object obj) :116
void TreeObject__Set_fn(TreeObject* __this, ::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Object* obj)
{
    uObject* rawOverride = NULL;
    bool hasRawOverride = false;
    ::g::Uno::Collections::Dictionary* newProps = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[21/*Uno.Collections.Dictionary<string, object>*/]);
    uArray* keys = uPtr(obj)->Keys();

    for (int32_t i = 0; i < uPtr(keys)->Length(); i++)
    {
        uString* key = uPtr(keys)->Strong<uString*>(i);

        if (::g::Uno::String::op_Equality(key, uString::Const("__fuse_raw")))
        {
            rawOverride = uPtr(obj)->Item(key);
            hasRawOverride = true;
            continue;
        }

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(newProps), key, ::g::Fuse::Scripting::JavaScript::IMirror::Reflect(uInterface(uPtr(mirror), ::TYPES[5/*Fuse.Scripting.JavaScript.IMirror*/]), context, uPtr(obj)->Item(key)));
    }

    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)TreeObject__SetClosure__Perform_fn, TreeObject__SetClosure::New1(__this, newProps, rawOverride, hasRawOverride)));
}

// internal void Set(string key, object newValue, Fuse.Scripting.JavaScript.TreeObject.PropertySubscription exclude) :139
void TreeObject__Set1_fn(TreeObject* __this, uString* key, uObject* newValue, TreeObject__PropertySubscription* exclude)
{
    __this->Set1(key, newValue, exclude);
}

// public Fuse.Reactive.IPropertySubscription Subscribe(Fuse.Reactive.IPropertyObserver observer) :13
void TreeObject__Subscribe_fn(TreeObject* __this, uObject* observer, uObject** __retval)
{
    *__retval = __this->Subscribe(observer);
}

// protected TreeObject(Fuse.Scripting.Object obj) [instance] :11
void TreeObject::ctor_4(::g::Fuse::Scripting::Object* obj)
{
    ctor_3(obj);
}

// internal void Set(string key, object newValue, Fuse.Scripting.JavaScript.TreeObject.PropertySubscription exclude) [instance] :139
void TreeObject::Set1(uString* key, uObject* newValue, TreeObject__PropertySubscription* exclude)
{
    bool ret3;
    uObject* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_props), key, &ret3), ret3))
        ::g::Fuse::Scripting::ValueMirror::Unsubscribe1((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_props), key, &ret4), ret4));

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_props), key, newValue);
    TreeObject__PropertySubscription* sub = uAs<TreeObject__PropertySubscription*>(Subscribers(), ::TYPES[50/*Fuse.Scripting.JavaScript.TreeObject.PropertySubscription*/]);

    if (sub != NULL)
        uPtr(sub)->OnPropertyChanged(key, newValue, exclude);
}

// public Fuse.Reactive.IPropertySubscription Subscribe(Fuse.Reactive.IPropertyObserver observer) [instance] :13
uObject* TreeObject::Subscribe(uObject* observer)
{
    return (uObject*)TreeObject__PropertySubscription::New1(this, observer);
}

// protected TreeObject New(Fuse.Scripting.Object obj) [static] :11
TreeObject* TreeObject::New3(::g::Fuse::Scripting::Object* obj)
{
    TreeObject* obj2 = (TreeObject*)uNew(TreeObject_typeof());
    obj2->ctor_4(obj);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObservable.uno
// ----------------------------------------------------------------------------------------------------

// internal sealed class TreeObservable :8
// {
static void TreeObservable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IRaw_typeof(), offsetof(TreeObservable_type, interface0),
        ::g::Fuse::IObject_typeof(), offsetof(TreeObservable_type, interface1),
        ::g::Fuse::Reactive::IObservableObject_typeof(), offsetof(TreeObservable_type, interface2),
        ::g::Fuse::Scripting::JavaScript::IMirror_typeof(), offsetof(TreeObservable_type, interface3));
    type->SetFields(5,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Long_typeof(), ::g::Fuse::Scripting::ValueMirror_typeof(), NULL), offsetof(TreeObservable, _reflections), 0);
}

TreeObservable_type* TreeObservable_typeof()
{
    static uSStrong<TreeObservable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::TreeObject_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TreeObservable);
    options.TypeSize = sizeof(TreeObservable_type);
    type = (TreeObservable_type*)uClassType::New("Fuse.Scripting.JavaScript.TreeObservable", options);
    type->fp_build_ = TreeObservable_build;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::ValueMirror*))TreeObservable__Unsubscribe_fn;
    type->interface3.fp_Reflect = (void(*)(uObject*, ::g::Fuse::Scripting::Context*, uObject*, uObject**))TreeObservable__Reflect_fn;
    type->interface2.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::Scripting::JavaScript::TreeObject__Subscribe_fn;
    type->interface1.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))::g::Fuse::Scripting::JavaScript::ObjectMirror__ContainsKey_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, uString*, uObject**))::g::Fuse::Scripting::JavaScript::ObjectMirror__get_Item_fn;
    type->interface1.fp_get_Keys = (void(*)(uObject*, uArray**))::g::Fuse::Scripting::JavaScript::ObjectMirror__get_Keys_fn;
    type->interface0.fp_get_ReflectedRaw = (void(*)(uObject*, uObject**))::g::Fuse::Scripting::JavaScript::TreeObject__get_ReflectedRaw_fn;
    return type;
}

// public TreeObservable(Fuse.Scripting.Context context, Fuse.Scripting.Object obj) :10
void TreeObservable__ctor_5_fn(TreeObservable* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_5(context, obj);
}

// private object Add(Fuse.Scripting.Context context, object[] args) :97
void TreeObservable__Add_fn(TreeObservable* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Add(context, args);
}

// private long GetId(Fuse.Scripting.Context context, object obj) :81
void TreeObservable__GetId_fn(TreeObservable* __this, ::g::Fuse::Scripting::Context* context, uObject* obj, int64_t* __retval)
{
    *__retval = __this->GetId(context, obj);
}

// private object InsertAt(Fuse.Scripting.Context context, object[] args) :109
void TreeObservable__InsertAt_fn(TreeObservable* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->InsertAt(context, args);
}

// public TreeObservable New(Fuse.Scripting.Context context, Fuse.Scripting.Object obj) :10
void TreeObservable__New4_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj, TreeObservable** __retval)
{
    *__retval = TreeObservable::New4(context, obj);
}

// private void NullifyCallbacks() :30
void TreeObservable__NullifyCallbacks_fn(TreeObservable* __this)
{
    __this->NullifyCallbacks();
}

// public object Reflect(Fuse.Scripting.Context context, object obj) :41
void TreeObservable__Reflect_fn(TreeObservable* __this, ::g::Fuse::Scripting::Context* context, uObject* obj, uObject** __retval)
{
    *__retval = __this->Reflect(context, obj);
}

// private object RemoveAt(Fuse.Scripting.Context context, object[] args) :103
void TreeObservable__RemoveAt_fn(TreeObservable* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->RemoveAt(context, args);
}

// private object Set(Fuse.Scripting.Context context, object[] args) :91
void TreeObservable__Set2_fn(TreeObservable* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Set2(context, args);
}

// private void Subscribe() :16
void TreeObservable__Subscribe1_fn(TreeObservable* __this)
{
    __this->Subscribe1();
}

// public override sealed void Unsubscribe() :25
void TreeObservable__Unsubscribe_fn(TreeObservable* __this)
{
    uPtr(::g::Fuse::Reactive::JavaScript::Worker_)->Invoke(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)TreeObservable__NullifyCallbacks_fn, __this));
}

// public TreeObservable(Fuse.Scripting.Context context, Fuse.Scripting.Object obj) [instance] :10
void TreeObservable::ctor_5(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj)
{
    _reflections = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Long_typeof(), ::TYPES[6/*Fuse.Scripting.ValueMirror*/], NULL)));
    ctor_4(obj);
    Set(context, (uObject*)this, obj);
    Subscribe1();
}

// private object Add(Fuse.Scripting.Context context, object[] args) [instance] :97
uObject* TreeObservable::Add(::g::Fuse::Scripting::Context* context, uArray* args)
{
    TreeObservable__AddOperation::New1(context, this, args)->Perform(context);
    return NULL;
}

// private long GetId(Fuse.Scripting.Context context, object obj) [instance] :81
int64_t TreeObservable::GetId(::g::Fuse::Scripting::Context* context, uObject* obj)
{
    ::g::Fuse::Scripting::Function* func = uCast< ::g::Fuse::Scripting::Function*>(uPtr(context)->Evaluate(uString::Const("(get node ID)"), uString::Const("(function(obj) { if (obj instanceof Object && typeof obj.__fuse_id  !== 'undefined') return obj.__fuse_id; return -1 })")), ::TYPES[16/*Fuse.Scripting.Function*/]);
    uObject* res = uPtr(func)->Call(context, uArray::Init<uObject*>(::TYPES[15/*object[]*/], 1, obj));

    if (uIs(res, ::g::Uno::Double_typeof()))
        return (int64_t)uUnbox<double>(::g::Uno::Double_typeof(), res);

    if (uIs(res, ::TYPES[63/*int*/]))
        return (int64_t)uUnbox<int32_t>(::TYPES[63/*int*/], res);

    if (uIs(res, ::g::Uno::Long_typeof()))
        return uUnbox<int64_t>(::g::Uno::Long_typeof(), res);

    return -1LL;
}

// private object InsertAt(Fuse.Scripting.Context context, object[] args) [instance] :109
uObject* TreeObservable::InsertAt(::g::Fuse::Scripting::Context* context, uArray* args)
{
    TreeObservable__InsertAtOperation::New1(context, this, args)->Perform(context);
    return NULL;
}

// private void NullifyCallbacks() [instance] :30
void TreeObservable::NullifyCallbacks()
{
    ::g::Fuse::Scripting::Object* obj = uCast< ::g::Fuse::Scripting::Object*>(Raw(), ::TYPES[11/*Fuse.Scripting.Object*/]);
    uPtr(obj)->Item(uString::Const("__fuse_set"), NULL);
    obj->Item(uString::Const("__fuse_add"), NULL);
    obj->Item(uString::Const("__fuse_removeAt"), NULL);
    obj->Item(uString::Const("__fuse_insertAt"), NULL);
}

// public object Reflect(Fuse.Scripting.Context context, object obj) [instance] :41
uObject* TreeObservable::Reflect(::g::Fuse::Scripting::Context* context, uObject* obj)
{
    bool ret2;

    if (uIs(obj, ::TYPES[16/*Fuse.Scripting.Function*/]))
        return ::g::Fuse::Scripting::FunctionMirror::New2(uCast< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[16/*Fuse.Scripting.Function*/]));

    if (uIs(obj, ::TYPES[11/*Fuse.Scripting.Object*/]) || uIs(obj, ::TYPES[20/*Fuse.Scripting.Array*/]))
    {
        int64_t id = GetId(context, obj);

        if (id < 0LL)
            U_THROW(::g::Uno::Exception::New2(uString::Const("Expected TreeObservable node to have an ID")));

        ::g::Fuse::Scripting::ValueMirror* res;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_reflections), uCRef<int64_t>(id), (void**)(&res), &ret2), ret2))
            return res;

        if (uIs(obj, ::TYPES[11/*Fuse.Scripting.Object*/]))
        {
            ::g::Fuse::Scripting::Object* so = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[11/*Fuse.Scripting.Object*/]);
            ::g::Fuse::Scripting::JavaScript::TreeObject* k = ::g::Fuse::Scripting::JavaScript::TreeObject::New3(so);
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_reflections), uCRef<int64_t>(id), k);
            k->Set(context, (uObject*)this, so);
            return k;
        }

        if (uIs(obj, ::TYPES[20/*Fuse.Scripting.Array*/]))
        {
            ::g::Fuse::Scripting::Array* sa = uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[20/*Fuse.Scripting.Array*/]);
            ::g::Fuse::Scripting::JavaScript::TreeArray* k1 = ::g::Fuse::Scripting::JavaScript::TreeArray::New3(sa);
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_reflections), uCRef<int64_t>(id), k1);
            k1->Set(context, (uObject*)this, sa);
            return k1;
        }
    }

    return obj;
}

// private object RemoveAt(Fuse.Scripting.Context context, object[] args) [instance] :103
uObject* TreeObservable::RemoveAt(::g::Fuse::Scripting::Context* context, uArray* args)
{
    TreeObservable__RemoveAtOperation::New1(this, args)->Perform(context);
    return NULL;
}

// private object Set(Fuse.Scripting.Context context, object[] args) [instance] :91
uObject* TreeObservable::Set2(::g::Fuse::Scripting::Context* context, uArray* args)
{
    TreeObservable__SetOperation::New1(context, this, args)->Perform(context);
    return NULL;
}

// private void Subscribe() [instance] :16
void TreeObservable::Subscribe1()
{
    ::g::Fuse::Scripting::Object* obj = uCast< ::g::Fuse::Scripting::Object*>(Raw(), ::TYPES[11/*Fuse.Scripting.Object*/]);
    uPtr(obj)->Item(uString::Const("__fuse_set"), uDelegate::New(::TYPES[18/*Fuse.Scripting.Callback*/], (void*)TreeObservable__Set2_fn, this));
    obj->Item(uString::Const("__fuse_add"), uDelegate::New(::TYPES[18/*Fuse.Scripting.Callback*/], (void*)TreeObservable__Add_fn, this));
    obj->Item(uString::Const("__fuse_removeAt"), uDelegate::New(::TYPES[18/*Fuse.Scripting.Callback*/], (void*)TreeObservable__RemoveAt_fn, this));
    obj->Item(uString::Const("__fuse_insertAt"), uDelegate::New(::TYPES[18/*Fuse.Scripting.Callback*/], (void*)TreeObservable__InsertAt_fn, this));
}

// public TreeObservable New(Fuse.Scripting.Context context, Fuse.Scripting.Object obj) [static] :10
TreeObservable* TreeObservable::New4(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj)
{
    TreeObservable* obj1 = (TreeObservable*)uNew(TreeObservable_typeof());
    obj1->ctor_5(context, obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TypeWrapper.uno
// ----------------------------------------------------------------------------------

// internal static class TypeWrapper :11
// {
static void TypeWrapper_build(uType* type)
{
    ::STRINGS[36] = uString::Const("external_object");
    ::TYPES[15] = uObject_typeof()->Array();
    ::TYPES[53] = ::g::Uno::String_typeof();
    ::TYPES[54] = ::g::Fuse::Scripting::IRaw_typeof();
    ::TYPES[16] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[20] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[55] = ::g::Uno::Float2_typeof();
    ::TYPES[56] = ::g::Uno::Float3_typeof();
    ::TYPES[57] = ::g::Uno::Float4_typeof();
    ::TYPES[58] = ::g::Uno::Int2_typeof();
    ::TYPES[59] = ::g::Uno::Int3_typeof();
    ::TYPES[60] = ::g::Uno::Int4_typeof();
    ::TYPES[61] = ::g::Uno::DateTime_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[62] = ::g::Uno::Float_typeof();
    ::TYPES[63] = ::g::Uno::Int_typeof();
    ::TYPES[64] = ::g::Uno::UInt_typeof();
    ::TYPES[65] = ::g::Fuse::Scripting::IScriptObject_typeof();
    type->SetDependencies(
        ::g::Fuse::Scripting::ScriptClass_typeof());
}

uClassType* TypeWrapper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JavaScript.TypeWrapper", options);
    type->fp_build_ = TypeWrapper_build;
    return type;
}

// private static Fuse.Scripting.Array ToArray(Fuse.Scripting.JavaScript.JSContext context, float2 v) :60
void TypeWrapper__ToArray_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Float2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = TypeWrapper::ToArray(context, *v);
}

// private static Fuse.Scripting.Array ToArray(Fuse.Scripting.JavaScript.JSContext context, float3 v) :65
void TypeWrapper__ToArray1_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Float3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = TypeWrapper::ToArray1(context, *v);
}

// private static Fuse.Scripting.Array ToArray(Fuse.Scripting.JavaScript.JSContext context, float4 v) :70
void TypeWrapper__ToArray2_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Float4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = TypeWrapper::ToArray2(context, *v);
}

// private static Fuse.Scripting.Array ToArray(Fuse.Scripting.JavaScript.JSContext context, int2 v) :75
void TypeWrapper__ToArray3_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Int2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = TypeWrapper::ToArray3(context, *v);
}

// private static Fuse.Scripting.Array ToArray(Fuse.Scripting.JavaScript.JSContext context, int3 v) :80
void TypeWrapper__ToArray4_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Int3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = TypeWrapper::ToArray4(context, *v);
}

// private static Fuse.Scripting.Array ToArray(Fuse.Scripting.JavaScript.JSContext context, int4 v) :85
void TypeWrapper__ToArray5_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Int4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = TypeWrapper::ToArray5(context, *v);
}

// public static object Unwrap(Fuse.Scripting.JavaScript.JSContext context, object dc) :40
void TypeWrapper__Unwrap_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, uObject* dc, uObject** __retval)
{
    *__retval = TypeWrapper::Unwrap(context, dc);
}

// public static object Wrap(Fuse.Scripting.JavaScript.JSContext context, object obj) :15
void TypeWrapper__Wrap_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, uObject* obj, uObject** __retval)
{
    *__retval = TypeWrapper::Wrap(context, obj);
}

// private static object WrapScriptClass(Fuse.Scripting.JavaScript.JSContext context, object obj) :90
void TypeWrapper__WrapScriptClass_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, uObject* obj, uObject** __retval)
{
    *__retval = TypeWrapper::WrapScriptClass(context, obj);
}

// private static Fuse.Scripting.Array ToArray(Fuse.Scripting.JavaScript.JSContext context, float2 v) [static] :60
::g::Fuse::Scripting::Array* TypeWrapper::ToArray(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Float2 v)
{
    return uPtr(context)->NewArray(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, uBox(::g::Uno::Double_typeof(), (double)v.X), uBox(::g::Uno::Double_typeof(), (double)v.Y)));
}

// private static Fuse.Scripting.Array ToArray(Fuse.Scripting.JavaScript.JSContext context, float3 v) [static] :65
::g::Fuse::Scripting::Array* TypeWrapper::ToArray1(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Float3 v)
{
    return uPtr(context)->NewArray(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 3, uBox(::g::Uno::Double_typeof(), (double)v.X), uBox(::g::Uno::Double_typeof(), (double)v.Y), uBox(::g::Uno::Double_typeof(), (double)v.Z)));
}

// private static Fuse.Scripting.Array ToArray(Fuse.Scripting.JavaScript.JSContext context, float4 v) [static] :70
::g::Fuse::Scripting::Array* TypeWrapper::ToArray2(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Float4 v)
{
    return uPtr(context)->NewArray(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 4, uBox(::g::Uno::Double_typeof(), (double)v.X), uBox(::g::Uno::Double_typeof(), (double)v.Y), uBox(::g::Uno::Double_typeof(), (double)v.Z), uBox(::g::Uno::Double_typeof(), (double)v.W)));
}

// private static Fuse.Scripting.Array ToArray(Fuse.Scripting.JavaScript.JSContext context, int2 v) [static] :75
::g::Fuse::Scripting::Array* TypeWrapper::ToArray3(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Int2 v)
{
    return uPtr(context)->NewArray(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, uBox(::g::Uno::Double_typeof(), (double)v.X), uBox(::g::Uno::Double_typeof(), (double)v.Y)));
}

// private static Fuse.Scripting.Array ToArray(Fuse.Scripting.JavaScript.JSContext context, int3 v) [static] :80
::g::Fuse::Scripting::Array* TypeWrapper::ToArray4(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Int3 v)
{
    return uPtr(context)->NewArray(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 3, uBox(::g::Uno::Double_typeof(), (double)v.X), uBox(::g::Uno::Double_typeof(), (double)v.Y), uBox(::g::Uno::Double_typeof(), (double)v.Z)));
}

// private static Fuse.Scripting.Array ToArray(Fuse.Scripting.JavaScript.JSContext context, int4 v) [static] :85
::g::Fuse::Scripting::Array* TypeWrapper::ToArray5(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Int4 v)
{
    return uPtr(context)->NewArray(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 4, uBox(::g::Uno::Double_typeof(), (double)v.X), uBox(::g::Uno::Double_typeof(), (double)v.Y), uBox(::g::Uno::Double_typeof(), (double)v.Z), uBox(::g::Uno::Double_typeof(), (double)v.W)));
}

// public static object Unwrap(Fuse.Scripting.JavaScript.JSContext context, object dc) [static] :40
uObject* TypeWrapper::Unwrap(::g::Fuse::Scripting::JavaScript::JSContext* context, uObject* dc)
{
    if (dc == NULL)
        return NULL;
    else if (uIs(dc, ::TYPES[53/*string*/]))
        return dc;
    else if (uIs(dc, ::TYPES[54/*Fuse.Scripting.IRaw*/]))
        return ::g::Fuse::Scripting::IRaw::ReflectedRaw(uInterface(uPtr((uObject*)dc), ::TYPES[54/*Fuse.Scripting.IRaw*/]));
    else if (uIs(dc, ::TYPES[16/*Fuse.Scripting.Function*/]))
        return dc;
    else if (uIs(dc, ::TYPES[11/*Fuse.Scripting.Object*/]))
        return dc;
    else if (uIs(dc, ::TYPES[20/*Fuse.Scripting.Array*/]))
        return dc;
    else if (uIs(dc, ::TYPES[55/*float2*/]))
        return TypeWrapper::ToArray(context, uUnbox< ::g::Uno::Float2>(::TYPES[55/*float2*/], dc));
    else if (uIs(dc, ::TYPES[56/*float3*/]))
        return TypeWrapper::ToArray1(context, uUnbox< ::g::Uno::Float3>(::TYPES[56/*float3*/], dc));
    else if (uIs(dc, ::TYPES[57/*float4*/]))
        return TypeWrapper::ToArray2(context, uUnbox< ::g::Uno::Float4>(::TYPES[57/*float4*/], dc));
    else if (uIs(dc, ::TYPES[58/*int2*/]))
        return TypeWrapper::ToArray3(context, uUnbox< ::g::Uno::Int2>(::TYPES[58/*int2*/], dc));
    else if (uIs(dc, ::TYPES[59/*int3*/]))
        return TypeWrapper::ToArray4(context, uUnbox< ::g::Uno::Int3>(::TYPES[59/*int3*/], dc));
    else if (uIs(dc, ::TYPES[60/*int4*/]))
        return TypeWrapper::ToArray5(context, uUnbox< ::g::Uno::Int4>(::TYPES[60/*int4*/], dc));
    else if (uIs(dc, ::TYPES[61/*Uno.DateTime*/]))
        return ::g::Fuse::Scripting::JavaScript::DateTimeConverterHelpers::ConvertDateTimeToJSDate(context, uUnbox< ::g::Uno::DateTime>(::TYPES[61/*Uno.DateTime*/], dc), uPtr(uPtr(context)->FuseJS())->DateCtor);
    else if (::g::Uno::Type::IsClass(uPtr(::g::Uno::Object::GetType(uPtr(dc)))))
        return TypeWrapper::WrapScriptClass(context, dc);
    else if (::g::Uno::Type::IsEnum(uPtr(::g::Uno::Object::GetType(uPtr(dc)))))
        return ::g::Uno::Object::ToString(uPtr(dc));
    else
        return dc;
}

// public static object Wrap(Fuse.Scripting.JavaScript.JSContext context, object obj) [static] :15
uObject* TypeWrapper::Wrap(::g::Fuse::Scripting::JavaScript::JSContext* context, uObject* obj)
{
    if (uIs(obj, ::TYPES[19/*Fuse.Scripting.External*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::External*>(obj, ::TYPES[19/*Fuse.Scripting.External*/]))->Object;
    else if (uIs(obj, ::TYPES[11/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* sobj = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[11/*Fuse.Scripting.Object*/]);

        if (uPtr(sobj)->InstanceOf(context, uPtr(uPtr(context)->FuseJS())->Date))
            return uBox(::TYPES[61/*Uno.DateTime*/], ::g::Fuse::Scripting::JavaScript::DateTimeConverterHelpers::ConvertDateToDateTime(context, sobj));
        else if (uPtr(sobj)->ContainsKey(::STRINGS[36/*"external_ob...*/]))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(::STRINGS[36/*"external_ob...*/]), ::TYPES[19/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return uPtr(ext)->Object;
        }
    }

    if (uIs(obj, ::TYPES[62/*float*/]))
        return uBox(::g::Uno::Double_typeof(), (double)uUnbox<float>(::TYPES[62/*float*/], obj));

    if (uIs(obj, ::TYPES[63/*int*/]))
        return uBox(::g::Uno::Double_typeof(), (double)uUnbox<int32_t>(::TYPES[63/*int*/], obj));

    if (uIs(obj, ::TYPES[64/*uint*/]))
        return uBox(::g::Uno::Double_typeof(), (double)uUnbox<uint32_t>(::TYPES[64/*uint*/], obj));

    return obj;
}

// private static object WrapScriptClass(Fuse.Scripting.JavaScript.JSContext context, object obj) [static] :90
uObject* TypeWrapper::WrapScriptClass(::g::Fuse::Scripting::JavaScript::JSContext* context, uObject* obj)
{
    uObject* so = uAs<uObject*>(obj, ::TYPES[65/*Fuse.Scripting.IScriptObject*/]);

    if ((so != NULL) && (::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::TYPES[65/*Fuse.Scripting.IScriptObject*/])) != NULL))
        return ::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::TYPES[65/*Fuse.Scripting.IScriptObject*/]));

    ::g::Fuse::Scripting::External* ext = ::g::Fuse::Scripting::External::New1(obj);
    ::g::Fuse::Scripting::ScriptClass* sc = ::g::Fuse::Scripting::ScriptClass::Get(::g::Uno::Object::GetType(uPtr(obj)));

    if (sc == NULL)
        return ext;

    ::g::Fuse::Scripting::Function* ctor = uPtr(context)->GetClass(sc);
    ::g::Fuse::Scripting::Object* res = uPtr(ctor)->Construct(context, uArray::Init<uObject*>(::TYPES[15/*object[]*/], 1, ext));

    if (so != NULL)
        ::g::Fuse::Scripting::IScriptObject::SetScriptObject(uInterface(uPtr(so), ::TYPES[65/*Fuse.Scripting.IScriptObject*/]), res, context);

    return res;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObservable.uno
// ----------------------------------------------------------------------------------------------------

// private abstract class TreeObservable.ValueOperation :185
// {
static void TreeObservable__ValueOperation_build(uType* type)
{
    type->SetFields(2,
        uObject_typeof(), offsetof(TreeObservable__ValueOperation, WrappedValue), 0);
}

::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type* TreeObservable__ValueOperation_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TreeObservable__ValueOperation);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type);
    type = (::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type*)uClassType::New("Fuse.Scripting.JavaScript.TreeObservable.ValueOperation", options);
    type->fp_build_ = TreeObservable__ValueOperation_build;
    return type;
}

// protected ValueOperation(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) :187
void TreeObservable__ValueOperation__ctor_1_fn(TreeObservable__ValueOperation* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    __this->ctor_1(context, inst, args);
}

// protected ValueOperation(Fuse.Scripting.Context context, Fuse.Scripting.JavaScript.TreeObservable inst, object[] args) [instance] :187
void TreeObservable__ValueOperation::ctor_1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args)
{
    ctor_(inst, args);
    WrappedValue = uPtr(inst)->Reflect(context, uPtr(args)->Strong<uObject*>(uPtr(args)->Length() - 1));
}
// }

}}}} // ::g::Fuse::Scripting::JavaScript
