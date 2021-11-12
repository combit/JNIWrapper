
// package
package combit.callbacks;

/**
* Description: Interface for List & Label callbacks.
*
* @author Copyright (c) combit Software GmbH
* @version 27.0
*/

public interface Callback
{
  /**
  * Will be called directly from JNI.
  *
  * @param value Parameters for the corresponding callback.
  */
  void notify(CallbackInfo value);
}
