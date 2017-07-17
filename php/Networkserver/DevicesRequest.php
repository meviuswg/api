<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: github.com/TheThingsNetwork/api/networkserver/networkserver.proto

namespace Networkserver;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Protobuf type <code>networkserver.DevicesRequest</code>
 */
class DevicesRequest extends \Google\Protobuf\Internal\Message
{
    /**
     * <pre>
     * Device address from the uplink message
     * </pre>
     *
     * <code>bytes dev_addr = 1 [(.gogoproto.customtype) = "github.com/TheThingsNetwork/ttn/core/types.DevAddr"];</code>
     */
    private $dev_addr = '';
    /**
     * <pre>
     * Frame counter from the uplink message
     * </pre>
     *
     * <code>uint32 f_cnt = 2;</code>
     */
    private $f_cnt = 0;

    public function __construct() {
        \GPBMetadata\GithubCom\TheThingsNetwork\Api\Networkserver\Networkserver::initOnce();
        parent::__construct();
    }

    /**
     * <pre>
     * Device address from the uplink message
     * </pre>
     *
     * <code>bytes dev_addr = 1 [(.gogoproto.customtype) = "github.com/TheThingsNetwork/ttn/core/types.DevAddr"];</code>
     */
    public function getDevAddr()
    {
        return $this->dev_addr;
    }

    /**
     * <pre>
     * Device address from the uplink message
     * </pre>
     *
     * <code>bytes dev_addr = 1 [(.gogoproto.customtype) = "github.com/TheThingsNetwork/ttn/core/types.DevAddr"];</code>
     */
    public function setDevAddr($var)
    {
        GPBUtil::checkString($var, False);
        $this->dev_addr = $var;
    }

    /**
     * <pre>
     * Frame counter from the uplink message
     * </pre>
     *
     * <code>uint32 f_cnt = 2;</code>
     */
    public function getFCnt()
    {
        return $this->f_cnt;
    }

    /**
     * <pre>
     * Frame counter from the uplink message
     * </pre>
     *
     * <code>uint32 f_cnt = 2;</code>
     */
    public function setFCnt($var)
    {
        GPBUtil::checkUint32($var);
        $this->f_cnt = $var;
    }

}
