<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: github.com/TheThingsNetwork/api/protocol/lorawan/lorawan.proto

namespace GPBMetadata\GithubCom\TheThingsNetwork\Api\Protocol\Lorawan;

class Lorawan
{
    public static $is_initialized = false;

    public static function initOnce() {
        $pool = \Google\Protobuf\Internal\DescriptorPool::getGeneratedPool();

        if (static::$is_initialized == true) {
          return;
        }
        \GPBMetadata\GithubCom\Gogo\Protobuf\Gogoproto\Gogo::initOnce();
        $pool->internalAddGeneratedFile(hex2bin(
            "0ae5150a3e6769746875622e636f6d2f5468655468696e67734e6574776f" .
            "726b2f6170692f70726f746f636f6c2f6c6f726177616e2f6c6f72617761" .
            "6e2e70726f746f12076c6f726177616e22ac010a084d6574616461746112" .
            "270a0a6d6f64756c6174696f6e180b2001280e32132e6c6f726177616e2e" .
            "4d6f64756c6174696f6e12110a09646174615f72617465180c2001280912" .
            "100a086269745f72617465180d2001280d12130a0b636f64696e675f7261" .
            "7465180e20012809120d0a05665f636e74180f2001280d122e0a0e667265" .
            "7175656e63795f706c616e18102001280e32162e6c6f726177616e2e4672" .
            "657175656e6379506c616e2283010a0f5478436f6e66696775726174696f" .
            "6e12270a0a6d6f64756c6174696f6e180b2001280e32132e6c6f72617761" .
            "6e2e4d6f64756c6174696f6e12110a09646174615f72617465180c200128" .
            "0912100a086269745f72617465180d2001280d12130a0b636f64696e675f" .
            "72617465180e20012809120d0a05665f636e74180f2001280d22c4030a12" .
            "41637469766174696f6e4d6574616461746112460a076170705f65756918" .
            "012001280c4235dade1f316769746875622e636f6d2f5468655468696e67" .
            "734e6574776f726b2f74746e2f636f72652f74797065732e417070455549" .
            "12460a076465765f65756918022001280c4235dade1f316769746875622e" .
            "636f6d2f5468655468696e67734e6574776f726b2f74746e2f636f72652f" .
            "74797065732e44657645554912480a086465765f6164647218032001280c" .
            "4236dade1f326769746875622e636f6d2f5468655468696e67734e657477" .
            "6f726b2f74746e2f636f72652f74797065732e4465764164647212490a09" .
            "6e776b5f735f6b657918042001280c4236dade1f326769746875622e636f" .
            "6d2f5468655468696e67734e6574776f726b2f74746e2f636f72652f7479" .
            "7065732e4e776b534b657912150a0d7278315f64725f6f6666736574180b" .
            "2001280d120e0a067278325f6472180c2001280d12100a0872785f64656c" .
            "6179180d2001280d12200a0763665f6c697374180e2001280b320f2e6c6f" .
            "726177616e2e43464c697374122e0a0e6672657175656e63795f706c616e" .
            "180f2001280e32162e6c6f726177616e2e4672657175656e6379506c616e" .
            "22ed010a074d65737361676512260a056d5f68647218012001280b320d2e" .
            "6c6f726177616e2e4d4844524208d0de1f01c8de1f00120b0a036d696318" .
            "022001280c122a0a0b6d61635f7061796c6f616418032001280b32132e6c" .
            "6f726177616e2e4d41435061796c6f61644800123b0a146a6f696e5f7265" .
            "71756573745f7061796c6f616418042001280b321b2e6c6f726177616e2e" .
            "4a6f696e526571756573745061796c6f6164480012390a136a6f696e5f61" .
            "63636570745f7061796c6f616418052001280b321a2e6c6f726177616e2e" .
            "4a6f696e4163636570745061796c6f6164480042090a075061796c6f6164" .
            "22450a044d484452121e0a066d5f7479706518012001280e320e2e6c6f72" .
            "6177616e2e4d54797065121d0a056d616a6f7218022001280e320e2e6c6f" .
            "726177616e2e4d616a6f7222590a0a4d41435061796c6f616412260a0566" .
            "5f68647218012001280b320d2e6c6f726177616e2e464844524208d0de1f" .
            "01c8de1f00120e0a06665f706f727418022001280512130a0b66726d5f70" .
            "61796c6f616418032001280c22b8010a0446484452124c0a086465765f61" .
            "64647218012001280c423ac8de1f00dade1f326769746875622e636f6d2f" .
            "5468655468696e67734e6574776f726b2f74746e2f636f72652f74797065" .
            "732e4465764164647212280a06665f6374726c18022001280b320e2e6c6f" .
            "726177616e2e464374726c4208d0de1f01c8de1f00120d0a05665f636e74" .
            "18032001280d12290a06665f6f70747318042003280b32132e6c6f726177" .
            "616e2e4d4143436f6d6d616e644204c8de1f0022490a05464374726c120b" .
            "0a0361647218012001280812130a0b6164725f61636b5f72657118022001" .
            "2808120b0a0361636b18032001280812110a09665f70656e64696e671804" .
            "20012808222a0a0a4d4143436f6d6d616e64120b0a036369641801200128" .
            "0d120f0a077061796c6f616418022001280c22fc010a124a6f696e526571" .
            "756573745061796c6f6164124a0a076170705f65756918012001280c4239" .
            "c8de1f00dade1f316769746875622e636f6d2f5468655468696e67734e65" .
            "74776f726b2f74746e2f636f72652f74797065732e417070455549124a0a" .
            "076465765f65756918022001280c4239c8de1f00dade1f31676974687562" .
            "2e636f6d2f5468655468696e67734e6574776f726b2f74746e2f636f7265" .
            "2f74797065732e446576455549124e0a096465765f6e6f6e636518032001" .
            "280c423bc8de1f00dade1f336769746875622e636f6d2f5468655468696e" .
            "67734e6574776f726b2f74746e2f636f72652f74797065732e4465764e6f" .
            "6e636522f6020a114a6f696e4163636570745061796c6f616412110a0965" .
            "6e6372797074656418012001280c124e0a096170705f6e6f6e6365180220" .
            "01280c423bc8de1f00dade1f336769746875622e636f6d2f546865546869" .
            "6e67734e6574776f726b2f74746e2f636f72652f74797065732e4170704e" .
            "6f6e636512480a066e65745f696418032001280c4238c8de1f00dade1f30" .
            "6769746875622e636f6d2f5468655468696e67734e6574776f726b2f7474" .
            "6e2f636f72652f74797065732e4e65744944124c0a086465765f61646472" .
            "18042001280c423ac8de1f00dade1f326769746875622e636f6d2f546865" .
            "5468696e67734e6574776f726b2f74746e2f636f72652f74797065732e44" .
            "65764164647212320a0b646c5f73657474696e677318052001280b32132e" .
            "6c6f726177616e2e444c53657474696e67734208d0de1f01c8de1f001210" .
            "0a0872785f64656c617918062001280d12200a0763665f6c697374180720" .
            "01280b320f2e6c6f726177616e2e43464c69737422330a0a444c53657474" .
            "696e677312150a0d7278315f64725f6f666673657418012001280d120e0a" .
            "067278325f647218022001280d22160a0643464c697374120c0a04667265" .
            "7118012003280d2a1f0a0a4d6f64756c6174696f6e12080a044c4f524110" .
            "0012070a0346534b10012ab7010a0d4672657175656e6379506c616e120e" .
            "0a0a45555f3836335f3837301000120e0a0a55535f3930325f3932381001" .
            "120e0a0a434e5f3737395f3738371002120a0a0645555f3433331003120e" .
            "0a0a41555f3931355f3932381004120e0a0a434e5f3437305f3531301005" .
            "120a0a0641535f3932331006120e0a0a41535f3932305f393233103d120e" .
            "0a0a41535f3932335f393235103e120e0a0a4b525f3932305f3932331007" .
            "120e0a0a494e5f3836355f38363710082a170a054d616a6f72120e0a0a4c" .
            "4f524157414e5f523110002a7a0a054d5479706512100a0c4a4f494e5f52" .
            "4551554553541000120f0a0b4a4f494e5f414343455054100112120a0e55" .
            "4e434f4e4649524d45445f5550100212140a10554e434f4e4649524d4544" .
            "5f444f574e100312100a0c434f4e4649524d45445f5550100412120a0e43" .
            "4f4e4649524d45445f444f574e1005429c010a296f72672e746865746869" .
            "6e67736e6574776f726b2e6170692e70726f746f636f6c2e6c6f72617761" .
            "6e42144c6f526157414e50726f746f636f6c50726f746f50015a30676974" .
            "6875622e636f6d2f5468655468696e67734e6574776f726b2f6170692f70" .
            "726f746f636f6c2f6c6f726177616eaa02245468655468696e67734e6574" .
            "776f726b2e4150492e4c6f526157414e50726f746f636f6c620670726f74" .
            "6f33"
        ));

        static::$is_initialized = true;
    }
}
