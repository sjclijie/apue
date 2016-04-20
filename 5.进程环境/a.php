<?php

    $arr1 = [1,2];

    $a = &$arr1[0];
    $b = &$arr1[1];

    unset($a);
    unset($b);

    $arr2 = $arr1;

    $arr1[0] = 23;
    $arr1[1] = 22;

    var_dump($arr1);
    var_dump($arr2);

