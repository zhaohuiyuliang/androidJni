package com.ndkdemo;

/**
 * Created by wangliang on 2017/6/19.
 */

public class JniUtils {
    static {
        System.loadLibrary("hello-jni");
    }

    public native String getString();
}
