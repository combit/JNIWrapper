# Project Description
Accessing the List & Label API from Java is not directly possible, because it is a native C++ API. Therefore you need a Translation-Layer to communicate from Java to List & Label (C++) and back to Java. This is achieved by using the Jave Native Interface (JNI) which is a standard programming interface for writing Java native methods. See also https://en.wikipedia.org/wiki/Java_Native_Interface

This project contains a Visual Studio C++ project for such a Translation-Layer and its output generates a JNI Wrapper DLL. Additionally, the necessary Java (Declaration) files are also included. Inside of your Java application source code you can simply access the List & Label native APIs like this:
  ```
  // Create object for accessing the JNI of List & Label
  CmbtLL?? Ll = new CmbtLL??();

  // Typical native API call of List & Label: call LlJobOpen to start working
  int nLLJob_ = Ll.LlJobOpen(CmbtLL??.CMBTLANG_DEFAULT);

  // Do something interesting with List & Label:
  // register your data, call the designer or run an export task
  // all this is also shown in the Java programming samples included in the trial version

  // Typical native API call of List & Label: call LlJobClose to cleanup used ressources
  Ll.LlJobClose(nLLJob_);
  ```

For a fully functional free 30-day trial version and further information about reporting tool List & Label please visit: https://www.combit.com/reporting-tool/

# What's Available so Far
* The fundamentals of course: calling the Designer and printing or exporting with options
* Working with one report container in a Designer project
* Using relations, sortings and groupings
* Real data preview and export within the Designer
* Report parameters for filtering
* Accessing Designer projects with the DOM (Document Object Model) API from source code at runtime
* Both x86 and x64 support

# How Can I Help?
We're happy to receive pull requests. Fields of interest include

* Own Designer functions, objects and actions
* Drilldown-reporting and expandable regions
* Implementation of the ILlDataProvider Interface enables a lot more features like
    - using multiple report containers per Designer project 
    - nested tables 
    - autosize for column widths 
    - printing columns across-down 
    - etc.
* Windows DEVMODE structure support for calling LlSetPrinterInPrinterFile for special printer settings

Any feedback as well as additional contributions are very welcome, just contact the project's administrator.
